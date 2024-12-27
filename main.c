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

#include<studio.h>

//Conversão de Temperatura

void convertertemperatura() {
int entrada;
float valorentrada, valorconvertido;

printf("Qual a unidade de entrada?\n");
printf("1.Celsius\n");
printf("2.Fahrenheit\n");
printf("3.Kelvin\n");
scanf("%d",&entrada);

printf("Digite a temperatura que será convertida:\n");
scanf("%d", &valorentrada);

if(entrada==1){
valorconvertido = valorentrada;
printf("A temperatura de entrada foi %.2f Celsius e a temperatua convertida é %.2f Celsius\n",valorentrada,valorconvertido);
}
else if (entrada==2){
valorconvertido = (valorentrada * 9/5) + 32;
printf("A temperatura de entrada foi %.2f Celsius e a temperatua convertida é %.2f Fahrenheit\n",valorentrada,valorconvertido);
}
else if (entrada==3){
valorConvertido = valorEntrada + 273.15;
printf("A temperatura de entrada foi %.2f Celsius e a temperatua convertida é %.2f Kelvin\n",valorentrada,valorconvertido);
}
}
} else {
printf("Opcao invalida!\n");
}


#Conversão Armazenamento 
void conversaoArmazenamento()
{
    int opcao;
    double valor;

    printf("\nEscolha o tipo de conversao de armazenamento:\n");
    printf("1. Bits para Bytes\n");
    printf("2. Bytes para Bits\n");
    printf("3. Bytes para Kilobytes (KB)\n");
    printf("4. Kilobytes (KB) para Bytes\n");
    printf("5. Kilobytes (KB) para Megabytes (MB)\n");
    printf("6. Megabytes (MB) para Kilobytes (KB)\n");
    printf("7. Megabytes (MB) para Gigabytes (GB)\n");
    printf("8. Gigabytes (GB) para Megabytes (MB)\n");
    printf("9. Gigabytes (GB) para Terabytes (TB)\n");
    printf("10. Terabytes (TB) para Gigabytes (GB)\n");
    scanf("%d", &opcao);

    printf("Digite o valor para conversao: ");
    scanf("%lf", &valor);

    switch (opcao)
    {
    case 1:
        printf("%.2lf Bits = %.2lf Bytes\n", valor, bitsParaBytes(valor));
        break;
    case 2:
        printf("%.2lf Bytes = %.2lf Bits\n", valor, bytesParaBits(valor));
        break;
    case 3:
        printf("%.2lf Bytes = %.2lf Kilobytes (KB)\n", valor, bytesParaKilobytes(valor));
        break;
    case 4:
        printf("%.2lf Kilobytes (KB) = %.2lf Bytes\n", valor, kilobytesParaBytes(valor));
        break;
    case 5:
        printf("%.2lf Kilobytes (KB) = %.2lf Megabytes (MB)\n", valor, kilobytesParaMegabytes(valor));
        break;
    case 6:
        printf("%.2lf Megabytes (MB) = %.2lf Kilobytes (KB)\n", valor, megabytesParaKilobytes(valor));
        break;
    case 7:
        printf("%.2lf Megabytes (MB) = %.2lf Gigabytes (GB)\n", valor, megabytesParaGigabytes(valor));
        break;
    case 8:
        printf("%.2lf Gigabytes (GB) = %.2lf Megabytes (MB)\n", valor, gigabytesParaMegabytes(valor));
        break;
    case 9:
        printf("%.2lf Gigabytes (GB) = %.2lf Terabytes (TB)\n", valor, gigabytesParaTerabytes(valor));
        break;
    case 10:
        printf("%.2lf Terabytes (TB) = %.2lf Gigabytes (GB)\n", valor, terabytesParaGigabytes(valor));
        break;
    default:
        printf("Opcao invalida.\n");
        break;
    }
}
    return 0;
}
