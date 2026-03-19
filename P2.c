#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
int main(void) {
   pid_t pid = fork();
   if (pid < 0) {
       perror("fork falhou");
       exit(EXIT_FAILURE);
   }
   if (pid == 0) {
       // Código do processo filho
       printf("Processo filho - PID: %d\n", getpid());
       exit(EXIT_SUCCESS);
   } else {
       // Código do processo pai
       printf("Processo pai - PID: %d\n", getpid());
       wait(NULL); // Aguarda o filho terminar
   }
   return 0;
}