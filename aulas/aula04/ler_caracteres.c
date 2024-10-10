#include <stdio.h>
int main(){
char tecla = '\0'; // caractere nulo

  printf("Digite outra tecla: ");
  int deu_certo = scanf("%c", &tecla);
  printf("Voce digitou: %c\n", tecla);
getchar(); // limpa o buffer do teclado (ex: enter)
  
  printf("Digitou uma tecla: ");
  deu_certo = scanf("%c", &tecla);
  printf("Voce digitou: %c\n", tecla);
getchar();
  
  char nome[31];
  printf("Digite seu nome: ");
  deu_certo = scanf("%[^\n]s", nome);
printf("Ola %s\n", nome);
  


  
  
  return 0;
}