#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "interfacetemperatura.h"

void comprimento() {
  double data, result;
  int indexIn = -1, indexOut = -1;
  char typeIn[3], typeOut[3];
  const char* units[] = {"m", "dm", "cm", "mm"};

  printf("1 - Conversão de unidade de Comprimento\n");
  printf("Digite a uniadade de entrada - m, cm, mm: \n");
  scanf("%s", typeIn);

  printf("Digite o seu valor á ser convertido: ");
  scanf("%lf", &data);

  printf("Digite para qual unidade deseja converter - m, cm, mm: \n");
  scanf("%s", typeOut);

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
  scanf("%s", typeIn);

  printf("Digite o seu valor á ser convertido: ");
  scanf("%lf", &data);

  printf("Digite para qual unidade deseja converter - b, B, KB, MB, GB, TB: \n");
  scanf("%s", typeOut);

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

void unidadesDeArea() {
    int operacao;
    float valor, resultado;

    do {
        printf("\nEscolha uma conversão de unidade de área:\n");
        printf("1 - Metros quadrados (m²) para Decímetros quadrados (dm²)\n");
        printf("2 - Metros quadrados (m²) para Centímetros quadrados (cm²)\n");
        printf("3 - Metros quadrados (m²) para Milímetros quadrados (mm²)\n");
        printf("4 - Decímetros quadrados (dm²) para Metros quadrados (m²)\n");
        printf("5 - Centímetros quadrados (cm²) para Metros quadrados (m²)\n");
        printf("6 - Milímetros quadrados (mm²) para Metros quadrados (m²)\n");
        printf("0 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &operacao);

        if (operacao == 0) {
            printf("Conversor de área encerrado.\n");
            break;
        }

        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

        switch (operacao) {
            case 1: // m² para dm²
                resultado = valor * 100;
                printf("%.2f m² é igual a %.2f dm²\n", valor, resultado);
                break;
            case 2: // m² para cm²
                resultado = valor * 10000;
                printf("%.2f m² é igual a %.2f cm²\n", valor, resultado);
                break;
            case 3: // m² para mm²
                resultado = valor * 1000000;
                printf("%.2f m² é igual a %.2f mm²\n", valor, resultado);
                break;
            case 4: // dm² para m²
                resultado = valor / 100;
                printf("%.2f dm² é igual a %.2f m²\n", valor, resultado);
                break;
            case 5: // cm² para m²
                resultado = valor / 10000;
                printf("%.2f cm² é igual a %.2f m²\n", valor, resultado);
                break;
            case 6: // mm² para m²
                resultado = valor / 1000000;
                printf("%.2f mm² é igual a %.6f m²\n", valor, resultado);
                break;
            default:
                printf("Operação inválida. Por favor, tente novamente.\n");
                break;
        }
    } while (operacao != 0);
}

// Função única para conversão de pressão entre todas as unidades
void pressao() {
    double valor, resultado;
    char unidade_inicial, unidade_destino;

    // Entrada do usuário
    printf("Digite o valor da pressão a ser convertido: ");
    scanf("%lf", &valor);

    printf("Digite a unidade inicial (P: Pascal, A: atm, B: bar, T: Torr): ");
    scanf(" %c", &unidade_inicial);

    printf("Digite a unidade de destino (P: Pascal, A: atm, B: bar, T: Torr): ");
    scanf(" %c", &unidade_destino);

    // Verifica a unidade inicial e realiza a conversão para a unidade de destino
    if (unidade_inicial == 'P') { // Pascal
        if (unidade_destino == 'A') { // Pascal para atm
            resultado = valor / 101325;
            printf("%.3lf Pa = %.6lf atm\n", valor, resultado);
        } else if (unidade_destino == 'B') { // Pascal para bar
            resultado = valor / 100000;
            printf("%.3lf Pa = %.6lf bar\n", valor, resultado);
        } else if (unidade_destino == 'T') { // Pascal para Torr
            resultado = valor / 133.322;
            printf("%.3lf Pa = %.3lf Torr\n", valor, resultado);
        } else if (unidade_destino == 'P') { // Pascal para Pascal
            printf("%.3lf Pa = %.3lf Pa\n", valor, valor);
        }
    } else if (unidade_inicial == 'A') { // Atmosfera (atm)
        if (unidade_destino == 'P') { // atm para Pascal
            resultado = valor * 101325;
            printf("%.3lf atm = %.3lf Pa\n", valor, resultado);
        } else if (unidade_destino == 'B') { // atm para bar
            resultado = valor * 1.01325;
            printf("%.3lf atm = %.6lf bar\n", valor, resultado);
        } else if (unidade_destino == 'T') { // atm para Torr
            resultado = valor * 760;
            printf("%.3lf atm = %.3lf Torr\n", valor, resultado);
        } else if (unidade_destino == 'A') { // atm para atm
            printf("%.3lf atm = %.3lf atm\n", valor, valor);
        }
    } else if (unidade_inicial == 'B') { // Bar
        if (unidade_destino == 'P') { // bar para Pascal
            resultado = valor * 100000;
            printf("%.3lf bar = %.3lf Pa\n", valor, resultado);
        } else if (unidade_destino == 'A') { // bar para atm
            resultado = valor / 1.01325;
            printf("%.3lf bar = %.6lf atm\n", valor, resultado);
        } else if (unidade_destino == 'T') { // bar para Torr
            resultado = valor * 750.062;
            printf("%.3lf bar = %.3lf Torr\n", valor, resultado);
        } else if (unidade_destino == 'B') { // bar para bar
            printf("%.3lf bar = %.3lf bar\n", valor, valor);
        }
    } else if (unidade_inicial == 'T') { // Torr
        if (unidade_destino == 'P') { // Torr para Pascal
            resultado = valor * 133.322;
            printf("%.3lf Torr = %.3lf Pa\n", valor, resultado);
        } else if (unidade_destino == 'A') { // Torr para atm
            resultado = valor / 760;
            printf("%.3lf Torr = %.6lf atm\n", valor, resultado);
        } else if (unidade_destino == 'B') { // Torr para bar
            resultado = valor / 750.062;
            printf("%.3lf Torr = %.6lf bar\n", valor, resultado);
        } else if (unidade_destino == 'T') { // Torr para Torr
            printf("%.3lf Torr = %.3lf Torr\n", valor, valor);
        }
    } else {
        printf("Unidade inválida. Utilize 'P' para Pascal, 'A' para atm, 'B' para bar e 'T' para Torr.\n");
    }
}

//informa que a função não foi implementada
void semimplementacao() {
    printf("Função não implementada\n");
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
  printf("10 - Unidades de Pressão\n");

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
    temperatura();
    /* Hugo Santos Dias */
    break;

  case 5:
    semimplementacao();
    /* sem implementação */
    break;

  case 6:
  energia();
    /* Alinne de Souza Santos Castro*/
    break;

  case 7:
    unidadesDeArea(); /* Vinícius Kauan Santos da Cruz */
    break;

  case 8:
    semimplementacao();
    /* sem implementação */
    break;

  case 9:
    dados();
    break;

  case 10:
    pressao();/*Gabriel Santos de Lacerda*/
    break;  

  default:
    break;
  }
}
