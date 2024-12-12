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

int main()
{
    int categoria;

    do
    {
        printf("\nEscolha a categoria de conversao:\n");

        scanf("%d", &categoria);

        if (categoria == 0)
        {
            printf("Saindo...\n");
            break;
        }

    } while (categoria != 0);

    return 0;
}
