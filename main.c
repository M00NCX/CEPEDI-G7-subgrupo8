#include <stdio.h>

// Função vazia para conversão
void converterTemperatura() {
    int unidadeEntrada, unidadeConversao;
    float valorEntrada, valorConvertido;

    printf("Escolha a unidade de entrada:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
    printf("Escolha uma opcao (1/2/3): ");
    scanf("%d", &unidadeEntrada);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valorEntrada);

    printf("\nEscolha a unidade para conversao:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
    printf("Escolha uma opcao (1/2/3): ");
    scanf("%d", &unidadeConversao);

    // Realizando a conversao
    if (unidadeEntrada == 1) {
        // Entrada em Celsius
        if (unidadeConversao == 1) {
            valorConvertido = valorEntrada;
            printf("%.2f Celsius = %.2f Celsius\n", valorEntrada, valorConvertido);
        } else if (unidadeConversao == 2) {
            valorConvertido = (valorEntrada * 9/5) + 32;
            printf("%.2f Celsius = %.2f Fahrenheit\n", valorEntrada, valorConvertido);
        } else if (unidadeConversao == 3) {
            valorConvertido = valorEntrada + 273.15;
            printf("%.2f Celsius = %.2f Kelvin\n", valorEntrada, valorConvertido);
        }
    } else if (unidadeEntrada == 2) {
        // Entrada em Fahrenheit
        if (unidadeConversao == 1) {
            valorConvertido = (valorEntrada - 32) * 5/9;
            printf("%.2f Fahrenheit = %.2f Celsius\n", valorEntrada, valorConvertido);
        } else if (unidadeConversao == 2) {
            valorConvertido = valorEntrada;
            printf("%.2f Fahrenheit = %.2f Fahrenheit\n", valorEntrada, valorConvertido);
        } else if (unidadeConversao == 3) {
            valorConvertido = (valorEntrada - 32) * 5/9 + 273.15;
            printf("%.2f Fahrenheit = %.2f Kelvin\n", valorEntrada, valorConvertido);
        }
    } else if (unidadeEntrada == 3) {
        // Entrada em Kelvin
        if (unidadeConversao == 1) {
            valorConvertido = valorEntrada - 273.15;
            printf("%.2f Kelvin = %.2f Celsius\n", valorEntrada, valorConvertido);
        } else if (unidadeConversao == 2) {
            valorConvertido = (valorEntrada - 273.15) * 9/5 + 32;
            printf("%.2f Kelvin = %.2f Fahrenheit\n", valorEntrada, valorConvertido);
        } else if (unidadeConversao == 3) {
            valorConvertido = valorEntrada;
            printf("%.2f Kelvin = %.2f Kelvin\n", valorEntrada, valorConvertido);
        }
    } else {
        printf("Opcao invalida!\n");
    }
}

int main() {
    // Chamando a funcao vazia
    int opcao;
    
    printf("Escolha uma opção:\n");
    printf("1. Conversão de temperatura\n");
    printf("Escolha uma opcao : ");
    scanf("%d",&opcao);
    
    switch(opcao){
        
        case 1:
             converterTemperatura();
             break;
             
        default:
            printf("Opcao invalida !\n");
    }
    
    return 0;
}
