#include <stdio.h>
int main(){
  
 char isbn[14] = "0000000000000";
  int num_paginas = 0;
  float preco = 0.00;
  int ano_publicacao = 0;

  printf("ISBN; %\n", isbn);
  printf("Num. Paginas: %03d\n", num_paginas);
  printf("Preco: R$ %.2f\n", preco);
  printf("Publicado em: %d\n", ano_publicacao);

    return 0;

  
}