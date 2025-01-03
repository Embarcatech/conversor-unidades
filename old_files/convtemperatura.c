/*
Arquivo inicial para a conversão de temperaturas

### 4. Temperatura

- Celsius
- Fahrenheit
- Kelvin

*/

/*
Fórmulas matemáticas para calcular temperaturas:

Converter Celsius para Kelvin
TK = TC + 273, onde TK é a temperatura em Kelvin e TC é a temperatura em graus Celsius. 
Por exemplo, para converter 40° C em K, a fórmula é TK = 40 + 273, resultando em TK = 313. 

Converter Fahrenheit para Celsius
C = 5/9 x (F – 32), onde C é a temperatura em graus Celsius e F é a temperatura em graus Fahrenheit. 

Converter Celsius para Fahrenheit
F = (9/5) x TC + 32, onde F é a temperatura em Fahrenheit e TC é a temperatura em graus Celsius. 
Por exemplo, para converter 40°C para Fahrenheit, temos: F = (9/5) x 40 + 32 = 72 + 32 = 104°F.

*/

#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <stdlib.h> //Biblioteca padrão do sistema

//Definição da constante KELVIN, por enquanto em valor inteiro
#define KELVIN 273

//Função de calculo de conversão de temperatura de Celsius para Fahrenheit
//Variavel do tipo float que recebe a temperatura em Celsius
float converterCelsiusParaKelvin(float celsius) {
    return celsius + KELVIN;
}

//Função de calculo de conversão de temperatura de Fahrenheit para Celsius
//Variavel do tipo float que recebe a temperatura em Fahrenheit
float converterFahrenheitParaCelsius(float fahrenheit) {
    return (fahrenheit - 32) * (5.0 / 9.0);
}

//Função de calculo de conversão de temperatura de Celsius para Fahrenheit
//Variavel do tipo float que recebe a temperatura em Celsius
float converterCelsiusParaFahrenheit(float celsius) {
    return (9.0 / 5.0) * celsius + 32;
}


// Função para limpar a tela dependendo do sistema operacional
void limparTela() {
    #ifdef _WIN32
        system("cls"); // Comando para Windows
    #else
        system("clear");  // Comando para Linux ou macOS
    #endif
}


//função para calcular a temperatura
void temperatura()
{

    system("chcp 65001>NULL"); // Comando para Windows mudar o charset para UTF-8
    
   // Variáveis para armazenar as temperaturas
    float entradaCelsius, entradaFahrenheit, entradaKelvin;
    float saidaKelvin, saidaCelsius, saidaFahrenheit;

   // Limpar a tela
    limparTela();

   // Solicitar do usuario qual tipo de conversão de temperatura e qual o valor

   // Solicitar o valor em Celsius ao usuário
    printf("Digite a temperatura em Graus Celsius: ");
    scanf("%f", &entradaCelsius);

    // Solicitar o valor em Fahrenheit ao usuário
    printf("Digite a temperatura em Graus Fahrenheit: ");
    scanf("%f", &entradaFahrenheit);

    // Solicitar o valor em Kelvin ao usuário  
    printf("Digite a temperatura em Kelvin: ");
    scanf("%f", &entradaKelvin);

    // Exibir o resultado da conversão de Celsius para Kelvin
    saidaKelvin = converterCelsiusParaKelvin(entradaCelsius);
    printf("A temperatura %.2f em Celsius é %.2f em Kelvin\n", entradaCelsius, saidaKelvin);

    // Exibir o resultado da conversão de Fahrenheit para Celsius
    saidaCelsius = converterFahrenheitParaCelsius(entradaFahrenheit);
    printf("A temperatura %.2f em Fahrenheit é %.2f em Celsius\n", entradaFahrenheit, saidaCelsius);

    // Exibir o resultado da conversão de Celsius para Fahrenheit
    saidaFahrenheit = converterCelsiusParaFahrenheit(entradaCelsius);
    printf("A temperatura %.2f em Celsius é %.2f em Fahrenheit\n", entradaCelsius, saidaFahrenheit);


    return 0;


}




//função principal
int main() {
    system("chcp 65001>NULL");

    limparTela();
    temperatura();
    return 0;
}  