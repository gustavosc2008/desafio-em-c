#  Atividade de Sistemas Operacionais

##  Descrição
Esta atividade foi realizada na disciplina **Sistemas Operacionais**, com base no documento **"Teste Prático em C"**.  
O objetivo principal foi desenvolver e executar programas em linguagem C dentro de um ambiente Linux.

##  Etapas Realizadas
1. **Instalação do Ubuntu**  
   - Download e configuração do sistema operacional Ubuntu.  
   - Preparação do ambiente para desenvolvimento.  

2. **Configuração do GCC**  
   - Instalação do compilador **GCC**.  
   - Testes iniciais de compilação para garantir funcionamento correto.  

3. **Integração com VS Code**  
   - Configuração do **Visual Studio Code** como IDE principal.  
   - Ajuste de extensões e ambiente para compilar e executar programas em C.  

4. **Implementação do Código em C**  
   - Criação de um programa que utiliza **fork()** para gerar processos pai e filho.  
   - Interação com o usuário para coletar informações (nome do aluno e data).  
   - Escrita dessas informações em um arquivo `relatorio_so.txt`.  
   - Reabertura e leitura do arquivo para exibir o conteúdo no terminal.  
   - Impressão de números sequenciais e informações de PID para demonstrar interação com o kernel.  

##  Desafios Enfrentados
- Instalação e configuração inicial do Ubuntu.  
- Ajustes necessários para o funcionamento do GCC.  
- Integração do compilador com o VS Code para execução fluida dos programas.  
- Implementação correta da lógica de processos e manipulação de arquivos em C.  

##  Estrutura do Repositório
- `p1.c` → Código-fonte em C com uso de **fork()**, manipulação de arquivos e interação com o usuário.  
- `relatorio_so.txt` → Arquivo gerado pelo programa contendo informações do aluno, data, PID e resultados da execução.  
- `README.md` → Documentação do projeto com instruções e descrição da atividade.
- ´p1´ → o arquivo exe do p1.c, para executar

##  Resultado
Ao final, o ambiente foi configurado com sucesso, permitindo compilar e executar programas em C no Ubuntu utilizando o GCC diretamente pelo **Visual Studio Code**.  
O programa gera relatórios em arquivo texto e demonstra conceitos fundamentais de processos e interação com o kernel.
