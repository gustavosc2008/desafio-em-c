#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

    // ---------------------------------------
int main(void) {
    FILE *arquivo;
    int pid = fork(); 

    // ---------------------------------------

    if (pid == 0) {
  
        printf("Sou o filho! PID=%d, PPID=%d\n", getpid(), getppid());
    } else {

        printf("Sou o pai! PID=%d, filho PID=%d\n", getpid(), pid);

        wait(NULL); 

        arquivo = fopen("relatorio_so.txt", "a");
        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo!\n");
            return 1;
        }


    // ---------------------------------------


        char data[11];
        char nome_aluno[50];


    // ---------------------------------------
    
    
        printf("Digite o nome do aluno: ");
        fgets(nome_aluno, sizeof(nome_aluno), stdin);
        nome_aluno[strcspn(nome_aluno, "\n")] = '\0';
        fprintf(arquivo, "Aluno: %s\n", nome_aluno);


    // ---------------------------------------


        printf("Digite a data: ");
        fgets(data, sizeof(data), stdin);
        data[strcspn(data, "\n")] = '\0';
        fprintf(arquivo, "Data: %s\n", data);


    // ---------------------------------------


        fprintf(arquivo, "Pid do processo: %d\n", getpid());


    // ---------------------------------------


        fprintf(arquivo, "Teste prático de interação com o kernel\n");


    // ---------------------------------------


        for (int i = 0; i < 10; i++) {
            printf(" %u", i);
            fprintf(arquivo, " %u", i);
        }
        

        fclose(arquivo);
    

    // ---------------------------------------


        arquivo = fopen("relatorio_so.txt", "r");
        if (arquivo == NULL) {
            printf("Erro ao reabrir o arquivo!\n");
            return 1;
        }


    // ---------------------------------------


        char linha[200];
        printf("\nReabrindo e lendo conteúdo:\n");
        while (fgets(linha, sizeof(linha), arquivo) != NULL) {
            printf("%s", linha);
        }
        printf("\n");

        fclose(arquivo); 
    }

    return 0;
}
