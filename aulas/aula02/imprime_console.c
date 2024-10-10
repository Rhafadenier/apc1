#include <stdio.h> // biblioteca de entrada e saida na console

int main() {
  // imprime um texto na tela
printf("um texto qualquer entre aspas duplas\n");
printf("%i\n\n", 10);
printf("%i %i\n\n", 50, 100);
printf("%i\n", 0001);
  printf("%5i\n", 0001);
  printf("%05i\n", 21);

// imprime um numero decimal
  printf("%f\n", 8.5);
  printf("%.3f\n", 3.14159);
  printf("%8.2f\n", 110.5);
  printf("%8.2f\n", 2556.86);

  // imprime um caractere

  printf("%c\n", 'A');
  printf("%c\n", 68);

  // imprime uma string - conjunto de caracteres, texto
  printf("%s\n", "boa noite");
printf("%30s! \n", "Quero Café");
printf("%-30.20s!\n", "Quero Café");

  
return 0;
}
