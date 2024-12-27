#include <stdio.h>
#include <stdlib.h>

// Função para converter de quilograma para grama
float kg_para_g(float kg){
    return kg * 1000;
}

// Função para converter de quilograma para tonelada
float kg_para_t(float kg){
    return kg / 1000;
}

// Função para converter de grama para quilograma
float g_para_kg(float g){
    return g / 1000;
}

// Função para converter de grama para tonelada
float g_para_t(float g){
    return g / 1000000;
}

// Função para converter de tonelada para quilograma
float t_para_kg(float t){
    return t * 1000;
}

// Função para converter de tonelada para grama
float t_para_g(float t){
    return t * 1000000;
}

// Função que converte a massa
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
            resultado = kg_para_g(valor);
            printf("O valor em gramas é: %.2f\n", resultado);
            break;
        case 2:  // Quilograma para Tonelada
            resultado = kg_para_t(valor);
            printf("O valor em toneladas é: %.2f\n", resultado);
            break;
        case 3:  // Grama para Quilograma
            resultado = g_para_kg(valor);
            printf("O valor em quilogramas é: %.2f\n", resultado);
            break;
        case 4:  // Grama para Tonelada
            resultado = g_para_t(valor);
            printf("O valor em toneladas é: %.6f\n", resultado);
            break;
        case 5:  // Tonelada para Quilograma
            resultado = t_para_kg(valor);
            printf("O valor em quilogramas é: %.2f\n", resultado);
            break;
        case 6:  // Tonelada para Grama
            resultado = t_para_g(valor);
            printf("O valor em gramas é: %.2f\n", resultado);
            break;
    }
}
