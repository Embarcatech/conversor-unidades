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

#include <stdio.h>

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
    return (fahrenheit - 32) * (5 / 9);
}

//Função de calculo de conversão de temperatura de Celsius para Fahrenheit
//Variavel do tipo float que recebe a temperatura em Celsius
float converterCelsiusParaFahrenheit(float celsius) {
    return (9 / 5) * celsius + 32;
}



int main()
{

    float celsius, fahrenheit, kelvin;

// Solicitar do usuario qual tipo de conversão de temperatura e qual o valor

   // Solicitar o valor em Celsius ao usuário
    printf("Digite a temperatura em Graus Celsius: ");
    scanf("%f", &celsius);

    // Solicitar o valor em Fahrenheit ao usuário
    printf("Digite a temperatura em Graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Solicitar o valor em Kelvin ao usuário  
    printf("Digite a temperatura em Kelvin: ");
    scanf("%f", &kelvin);

    // Exibir o resultado da conversão de Celsius para Kelvin
    kelvin = converterCelsiusParaKelvin(celsius);
    printf("A temperatura %.2f em Celsius é %.2f em Kelvin\n", celsius, kelvin);

    // Exibir o resultado da conversão de Fahrenheit para Celsius
    celsius = converterFahrenheitParaCelsius(fahrenheit);
    printf("A temperatura %.2f em Fahrenheit é %.2f em Celsius\n", fahrenheit, celsius);

    // Exibir o resultado da conversão de Celsius para Fahrenheit
    fahrenheit = converterCelsiusParaFahrenheit(celsius);
    printf("A temperatura %.2f em Celsius é %.2f em Fahrenheit\n", celsius, fahrenheit);


    return 0;
}



