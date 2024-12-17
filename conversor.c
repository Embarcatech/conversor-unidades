#include <stdio.h>

void comprimento() {
  printf("1 - Conversão de unidade de Comprimento");
}


int main() {
  system("chcp 65001>NULL");

  printf("Selecione uma opção para conversão de unidade\n");
  printf("1 - Unidades de Comprimento\n");
  printf("2 - Unidades de Massa\n");
  printf("3 - Unidades de Volume\n");
  printf("4 - Unidades de Temperatura\n");
  printf("5 - Unidades de Velocidade\n");
  printf("6 - Unidades de Energia\n");
  printf("7 - Unidades de Área\n");
  printf("8 - Unidades de Tempo\n");
  printf("9 - Unidades de Tamanho de dados\n");

  int option;
  scanf("%d", &option);

  switch (option)
  {
  case 1:
    comprimento();
    break;

  case 2:
    /* code */
    break;
  
  case 3:
    /* code */
    break;

  case 4:
    /* code */
    break;

  case 5:
    /* code */
    break;

  case 6:
    /* code */
    break;

  case 7:
    /* code */
    break;

  case 8:
    /* code */
    break;

  case 9:
    /* code */
    break;

  default:
    break;
  }
}