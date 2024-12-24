#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void comprimento() {
  double data, result;
  int indexIn = -1, indexOut = -1;
  char typeIn[3], typeOut[3];
  const char* units[] = {"m", "dm", "cm", "mm"};

  printf("1 - Conversão de unidade de Comprimento\n");
  printf("Digite a uniadade de entrada - m, cm, mm: \n");
  scanf("%s", &typeIn);

  printf("Digite o seu valor á ser convertido: ");
  scanf("%lf", &data);

  printf("Digite para qual unidade deseja converter - m, cm, mm: \n");
  scanf("%s", &typeOut);

  for (int i = 0; i < 4; i++) {
    if (strcmp(typeIn, units[i]) == 0){
      indexIn = i;
    }
    if (strcmp(typeOut, units[i]) == 0) {
      indexOut = i;
    }
  }

  if (indexIn == -1 || indexOut == -1) {
    printf("Unidade de medida inválida\n");
    exit(1);
  }

  int diff = indexOut - indexIn;
  result = data * pow(10, diff);
  printf("%.4lf %s é igual a %.4lf %s\n", data, typeIn, result, typeOut);

}

void unidadesDeVolume() {
    int operacao; // João Vitor Soares Amorim
    float volume, resultado;

    do {
        
        printf("Escolha uma conversao de unidade de volume:\n");
        printf("1 - Litros para Mililitros\n");
        printf("2 - Mililitros para Litros\n");
        printf("3 - Litros para Metros Cúbicos\n");
        printf("4 - Metros Cúbicos para Litros\n");
        printf("0 - Sair\n");
        scanf("%d", &operacao);

        if (operacao == 0) {
            break;
        }

        
        printf("Digite o volume: ");
        scanf("%f", &volume);

        
        switch (operacao) {
            case 1:
                resultado = volume * 1000; // 1 litro = 1000 mililitros
                printf("Resultado: %.2f mililitros\n", resultado);
                break;
            case 2:
                resultado = volume / 1000; // 1000 mililitros = 1 litro
                printf("Resultado: %.2f litros\n", resultado);
                break;
            case 3:
                resultado = volume / 1000; // 1000 litros = 1 metro cúbico
                printf("Resultado: %.2f metros cúbicos\n", resultado);
                break;
            case 4:
                resultado = volume * 1000; // 1 metro cúbico = 1000 litros
                printf("Resultado: %.2f litros\n", resultado);
                break;
            default:
                printf("Operacao invalida. Tente novamente.\n");
                break;
        }

    } while (operacao != 0);

    printf("Conversor de volume encerrado.\n");
}


void dados(){
  int diff;
  int indexIn = -1;
  int indexOut = -1;
  double data, result;
  char typeIn[3], typeOut[3];
  const char* units[] = {"b", "B", "KB", "MB", "GB", "TB"};

  printf("Digite a uniadade de entrada - b, B, KB, MB, GB, TB: \n");
  scanf("%s", &typeIn);

  printf("Digite o seu valor á ser convertido: ");
  scanf("%lf", &data);

  printf("Digite para qual unidade deseja converter - b, B, KB, MB, GB, TB: \n");
  scanf("%s", &typeOut);

  for (int i = 0; i < 6; i++) {
    if (strcmp(typeIn, units[i]) == 0){
      indexIn = i;
    }
    if (strcmp(typeOut, units[i]) == 0) {
      indexOut = i;
    }
  }

  if (indexIn == -1 || indexOut == -1) {
    printf("Valor invalido\n");
    exit(1);
  }

  diff = indexIn - indexOut;

  if(strcmp(typeIn, "b") == 0) {
    diff += 1;
    result = data / 8 * pow(1024, diff);
  }else if(strcmp(typeOut, "b") == 0) {
    diff -= 1;
    result = data * pow(1024, diff) * 8;
  }else {
    result = data * pow(1024, diff);
  }

  printf("%.5lf %s é igual a %.5lf %s\n", data, typeIn, result, typeOut);
}

void massa() {
    int opcao;
    float valor, resultado;

    printf("Escolha a unidade que deseja converter:\n");
    printf("1 - Quilograma para Grama\n");
    printf("2 - Quilograma para Tonelada\n");
    printf("3 - Grama para Quilograma\n");
    printf("4 - Grama para Tonelada\n");
    printf("5 - Tonelada para Quilograma\n");
    printf("6 - Tonelada para Grama\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 6) {
        printf("Opção inválida\n");
        return;
    }

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    if (valor < 0) {
        printf("Valor inválido! Deve ser positivo.\n");
        return;
    }
    

    switch (opcao) {
        case 1:  // Quilograma para Grama
            resultado = valor * 1000;
            printf("O valor em gramas é: %.2f\n", resultado);
            break;
        case 2:  // Quilograma para Tonelada
            resultado = valor / 1000;
            printf("O valor em toneladas é: %.2f\n", resultado);
            break;
        case 3:  // Grama para Quilograma
            resultado = valor / 1000;
            printf("O valor em quilogramas é: %.2f\n", resultado);
            break;
        case 4:  // Grama para Tonelada
            resultado = valor / 1000000;
            printf("O valor em toneladas é: %.6f\n", resultado);
            break;
        case 5:  // Tonelada para Quilograma
            resultado = valor * 1000;
            printf("O valor em quilogramas é: %.2f\n", resultado);
            break;
        case 6:  // Tonelada para Grama
            resultado = valor * 1000000;
            printf("O valor em gramas é: %.2f\n", resultado);
            break;
    }
}
void energia(){
    int escolha_entrada, escolha_saida;
    double valor;
    double resultado;
  
do{
    printf("Escolha a unidade de entrada:\n");
    printf("1 - Watts (W)\n");
    printf("2 - Quilowatts (kW)\n");
    printf("3 - Cavalo-vapor (CV)\n");
    printf("4 - Horse Power (HP)\n");
    printf("Digite o numero da opcao de entrada: ");
    scanf("%d", &escolha_entrada);
    if (escolha_entrada>4){
      printf ("Escolha indisponivel\n");
    }
}while(escolha_entrada>4);
do{
    printf("Escolha a unidade de saida:\n");
    printf("1 - Watts (W)\n");
    printf("2 - Quilowatts (kW)\n");
    printf("3 - Cavalo-vapor (CV)\n");
    printf("4 - Horse Power (HP)\n");
    printf("Digite o numero da opcao de saida: ");
    scanf("%d", &escolha_saida);
    if (escolha_saida>4){
      printf ("Escolha indisponivel\n");
    }
}while(escolha_saida>4);
    printf("Digite o valor:");
    scanf("%lf", &valor);

    if (escolha_entrada==1){
        if (escolha_saida==1){
        resultado=valor;
        }

        if (escolha_saida==2){
            resultado = valor/1000;
            
        }
        if (escolha_saida==3){
            resultado = valor/735.5;
            
        }
        if (escolha_saida==4){
            resultado = valor/745.7;
            
        }
    }
    else if (escolha_entrada==2){
        if (escolha_saida==1){
            resultado = valor*1000;
    }
    if (escolha_saida==2){
        resultado = valor;
    }
    if (escolha_saida==3){
        resultado = valor*1.36;
    }
    if (escolha_saida==4){
        resultado = valor*1.34;
    }
    }
    else if (escolha_entrada==3){
    if (escolha_saida==1){
        resultado = valor*735.5;
    }
    if (escolha_saida==2){
        resultado=(valor*735.5)/1000;
    }
    if (escolha_saida==3){
        resultado = valor;
    }
    if (escolha_saida==4){
        resultado=(valor*735.5)/745.7;
    }
    }
    if (escolha_entrada==4){
        if (escolha_saida==1){
            resultado = valor*745.7;
        }
        if (escolha_saida==2){
            resultado = (valor*745.7)/1000;
        }
        if(escolha_saida==3){
            resultado = (valor*745.7)/735.5;
        }
        if (escolha_saida==4){
            resultado = valor;
        }
    }
    printf ("O resultado da conversao eh: %.3f",resultado);
    
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
    massa(); // Jackson Silva dos Santos
    break;
  
  case 3: 
    unidadesDeVolume();
    break;
/*João Vitor Soares Amorim*/ 
  case 4:
    /* code */
    break;

  case 5:
    /* code */
    break;

  case 6:
  energia();
    /* Alinne de Souza Santos Castro*/
    break;

  case 7:
    /* code */
    break;

  case 8:
    /* code */
    break;

  case 9:
    dados();
    break;

  default:
    break;
  }
}
