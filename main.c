#include <stdio.h>

// comprimento
double metrosParaCentimetros(double metros) { return metros * 100; }
double metrosParaMilimetros(double metros) { return metros * 1000; }
double centimetrosParaMetros(double centimetros) { return centimetros / 100; }
double centimetrosParaMilimetros(double centimetros) { return centimetros * 10; }
double milimetrosParaMetros(double milimetros) { return milimetros / 1000; }
double milimetrosParaCentimetros(double milimetros) { return milimetros / 10; }

// massa
double quilogramasParaGramas(double kg) { return kg * 1000; }
double quilogramasParaToneladas(double kg) { return kg / 1000; }
double gramasParaQuilogramas(double g) { return g / 1000; }
double toneladasParaQuilogramas(double t) { return t * 1000; }

// volume
double litrosParaMililitros(double litros) { return litros * 1000; }
double mililitrosParaLitros(double ml) { return ml / 1000; }
double metrosCubicosParaLitros(double metrosCubicos) { return metrosCubicos * 1000; }
double litrosParaMetrosCubicos(double litros) { return litros / 1000; }
double centimetrosCubicosParaLitros(double cm3) { return cm3 / 1000.0; }
double litrosParaCentimetrosCubicos(double litros) { return litros * 1000.0; }

// temperatura
double celsiusParaFahrenheit(double c) { return (c * 9 / 5) + 32; }
double celsiusParaKelvin(double c) { return c + 273.15; }
double fahrenheitParaCelsius(double f) { return (f - 32) * 5 / 9; }
double kelvinParaCelsius(double k) { return k - 273.15; }

// velocidade
double kmhParaMs(double kmh) { return kmh / 3.6; }
double msParaKmh(double ms) { return ms * 3.6; }

// potência
double wattsParaQuilowatts(double w) { return w / 1000; }
double quilowattsParaWatts(double kw) { return kw * 1000; }

// área
double metroQuadradoParaCentimetroQuadrado(double m2) { return m2 * 10000; }
double centimetroQuadradoParaMetroQuadrado(double cm2) { return cm2 / 10000; }

// tempo
double segundosParaMinutos(double segundos) { return segundos / 60; }
double minutosParaSegundos(double minutos) { return minutos * 60; }
double minutosParaHoras(double minutos) { return minutos / 60; }
double horasParaMinutos(double horas) { return horas * 60; }

// armazenamento
double bytesParaKilobytes(double bytes) { return bytes / 1024; }
double kilobytesParaBytes(double kb) { return kb * 1024; }
double kilobytesParaMegabytes(double kb) { return kb / 1024; }

// Função separada para as conversões de volume
void conversaoVolume() {
    int opcao;
    double valor;

    printf("\nEscolha o tipo de conversao de volume:\n");
    printf("1. Litros para Mililitros\n");
    printf("2. Mililitros para Litros\n");
    printf("3. Metros Cúbicos para Litros\n");
    printf("4. Litros para Metros Cúbicos\n");
    printf("5. Centímetros Cúbicos para Litros\n");
    printf("6. Litros para Centímetros Cúbicos\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            printf("Digite o valor em Litros: ");
            scanf("%lf", &valor);
            printf("%.2lf Litros = %.2lf Mililitros\n", valor, litrosParaMililitros(valor));
            break;
        case 2:
            printf("Digite o valor em Mililitros: ");
            scanf("%lf", &valor);
            printf("%.2lf Mililitros = %.2lf Litros\n", valor, mililitrosParaLitros(valor));
            break;
        case 3:
            printf("Digite o valor em Metros Cúbicos: ");
            scanf("%lf", &valor);
            printf("%.2lf Metros Cúbicos = %.2lf Litros\n", valor, metrosCubicosParaLitros(valor));
            break;
        case 4:
            printf("Digite o valor em Litros: ");
            scanf("%lf", &valor);
            printf("%.2lf Litros = %.2lf Metros Cúbicos\n", valor, litrosParaMetrosCubicos(valor));
            break;
        case 5:
            printf("Digite o valor em Centímetros Cúbicos: ");
            scanf("%lf", &valor);
            printf("%.2lf Centímetros Cúbicos = %.2lf Litros\n", valor, centimetrosCubicosParaLitros(valor));
            break;
        case 6:
            printf("Digite o valor em Litros: ");
            scanf("%lf", &valor);
            printf("%.2lf Litros = %.2lf Centímetros Cúbicos\n", valor, litrosParaCentimetrosCubicos(valor));
            break;
        default:
            printf("Opção inválida.\n");
    }
}

int main()
{
    int categoria;

    do
    {
        printf("\nEscolha a categoria de conversao:\n");
        printf("1. Comprimento\n");
        printf("2. Massa\n");
        printf("3. Volume\n");
        printf("4. Temperatura\n");
        printf("5. Velocidade\n");
        printf("6. Potência\n");
        printf("7. Área\n");
        printf("8. Tempo\n");
        printf("9. Armazenamento\n");
        printf("0. Sair\n");
        scanf("%d", &categoria);

        switch (categoria)
        {
            case 1:
                // Aqui iriam as opções de conversões de comprimento
                break;
            case 2:
                // Aqui iriam as opções de conversões de massa
                break;
            case 3:
                conversaoVolume(); // Chama a função separada para volume
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }

    } while (categoria != 0);

    return 0;
}
