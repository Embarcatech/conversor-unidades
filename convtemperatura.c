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
#define KELVIN 273

//Função de calculo de conversão de temperatura de Celsius para Fahrenheit
//Variavel do tipo float que recebe a temperatura em Celsius
float converterCelsiusParaKelvin(float celsius) {
    return celsius + KELVIN;
}



int main()
{

//printf("Escolha a unidade de temperatura que deseja converter:\n");

//Variaveis de temperatura das unidades Celsius, Fahrenheit e Kelvin
float celsius, fahrenheit, kelvin; 


printf("Digite a temperatura em Graus Celsius: ");
scanf("%f", &celsius);


// Exibir o resultado da conversão de Celsius para Kelvin
kelvin = converterCelsiusParaKelvin(celsius);
printf("A temperatura %.2f em Celsius é %.2f em Kelvin\n", celsius, kelvin);


//return 0;

}



