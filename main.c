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
double WattsParaKwatts(double w) { return w / 1000; }
double WattsParaCV(double w) { return w / 735.5; }
double KwattsParaWatts(double kw) { return kw / 1000; }
double KwattsParaCV(double kw) { return (kw / 1000) / 735.5; }
double CVParaWatts(double cv) { return cv * 735.5; }
double CVParaKwatts(double cv) { return cv * 1000 * 735.5; }

// área
double metroQuadradoParaCentimetroQuadrado(double m2) { return m2 * 10000; }
double centimetroQuadradoParaMetroQuadrado(double cm2) { return cm2 / 10000; }

// tempo
double segundosParaMinutos(double segundos) { return segundos / 60; }
double minutosParaSegundos(double minutos) { return minutos * 60; }
double minutosParaHoras(double minutos) { return minutos / 60; }
double horasParaMinutos(double horas) { return horas * 60; }

// armazenamento
double bitsParaBytes(double bits) { return bits / 8; }
double bytesParaBits(double bytes) { return bytes * 8; }
double bytesParaKilobytes(double bytes) { return bytes / 1024; }
double kilobytesParaBytes(double kb) { return kb * 1024; }
double kilobytesParaMegabytes(double kb) { return kb / 1024; }
double megabytesParaKilobytes(double mb) { return mb * 1024; }
double megabytesParaGigabytes(double mb) { return mb / 1024; }
double gigabytesParaMegabytes(double gb) { return gb * 1024; }
double gigabytesParaTerabytes(double gb) { return gb / 1024; }
double terabytesParaGigabytes(double tb) { return tb * 1024; }

// 1 - Função separada para as conversões de comprimento
void conversaoComprimento()
{
    int opcao;
    double valor;

    printf("\nEscolha o tipo de conversao de comprimento: \n");
    printf("1. Metros para centimetros\n");
    printf("2. Metros para milimetros\n");
    printf("3. Centimetros para metros\n");
    printf("4. Centimetros para milimetros\n");
    printf("5. Milimetros para metros\n");
    printf("6. Milimetros para centimetros\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite o valor em metros: ");
        scanf("%lf", &valor);
        printf("\n%.2lf Metros = %.2lf Centimetros\n", valor, metrosParaCentimetros(valor));
        break;
    case 2:
        printf("Digite o valor em metros: ");
        scanf("%lf", &valor);
        printf("\n%.2lf Metros = %.2lf Milimetros\n", valor, metrosParaMilimetros(valor));
        break;
    case 3:
        printf("Digite o valor em centimetros: ");
        scanf("%lf", &valor);
        printf("\n%.2lf Centimetros = %.2lf Metros\n", valor, centimetrosParaMetros(valor));
        break;
    case 4:
        printf("Digite o valor em centimetros: ");
        scanf("%lf", &valor);
        printf("\n%.2lf Centimetros = %.2lf Milimetros\n", valor, centimetrosParaMilimetros(valor));
        break;
    case 5:
        printf("Digite o valor em milimetros: ");
        scanf("%lf", &valor);
        printf("\n%.2lf milimetros = %.2lf Metros\n", valor, milimetrosParaMetros(valor));
        break;
    case 6:
        printf("Digite o valor em milimetros: ");
        scanf("%lf", &valor);
        printf("\n%.2lf milimetros = %.2lf Centimetros\n", valor, milimetrosParaCentimetros(valor));
        break;
    default:
        printf("Opcao invalida.\n");
    }
}

// 3 - Função separada para as conversões de volume
void conversaoVolume()
{
    int opcao;
    double valor;

    printf("\nEscolha o tipo de conversao de volume:\n");
    printf("1. Litros para Mililitros\n");
    printf("2. Mililitros para Litros\n");
    printf("3. Metros Cubicos para Litros\n");
    printf("4. Litros para Metros Cubicos\n");
    printf("5. Centimetros Cubicos para Litros\n");
    printf("6. Litros para Centimetros Cubicos\n");
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
        printf("Digite o valor em Metros Cubicos: ");
        scanf("%lf", &valor);
        printf("%.2lf Metros Cúbicos = %.2lf Litros\n", valor, metrosCubicosParaLitros(valor));
        break;
    case 4:
        printf("Digite o valor em Litros: ");
        scanf("%lf", &valor);
        printf("%.2lf Litros = %.2lf Metros Cubicos\n", valor, litrosParaMetrosCubicos(valor));
        break;
    case 5:
        printf("Digite o valor em Centimetros Cubicos: ");
        scanf("%lf", &valor);
        printf("%.2lf Centimetros Cubicos = %.2lf Litros\n", valor, centimetrosCubicosParaLitros(valor));
        break;
    case 6:
        printf("Digite o valor em Litros: ");
        scanf("%lf", &valor);
        printf("%.2lf Litros = %.2lf Centímetros Cúbicos\n", valor, litrosParaCentimetrosCubicos(valor));
        break;
    default:
        printf("Opcao invalida.\n");
    }
}

// 4 - Função para conversão de Temperatura
void converterTemperatura()
{
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

    // Realizando a conversao Temperatura
    if (unidadeEntrada == 1)
    {
        // Entrada em Celsius
        if (unidadeConversao == 1)
        {
            valorConvertido = valorEntrada;
            printf("%.2f Celsius = %.2f Celsius\n", valorEntrada, valorConvertido);
        }
        else if (unidadeConversao == 2)
        {
            valorConvertido = (valorEntrada * 9 / 5) + 32;
            printf("%.2f Celsius = %.2f Fahrenheit\n", valorEntrada, valorConvertido);
        }
        else if (unidadeConversao == 3)
        {
            valorConvertido = valorEntrada + 273.15;
            printf("%.2f Celsius = %.2f Kelvin\n", valorEntrada, valorConvertido);
        }
    }
    else if (unidadeEntrada == 2)
    {
        // Entrada em Fahrenheit
        if (unidadeConversao == 1)
        {
            valorConvertido = (valorEntrada - 32) * 5 / 9;
            printf("%.2f Fahrenheit = %.2f Celsius\n", valorEntrada, valorConvertido);
        }
        else if (unidadeConversao == 2)
        {
            valorConvertido = valorEntrada;
            printf("%.2f Fahrenheit = %.2f Fahrenheit\n", valorEntrada, valorConvertido);
        }
        else if (unidadeConversao == 3)
        {
            valorConvertido = (valorEntrada - 32) * 5 / 9 + 273.15;
            printf("%.2f Fahrenheit = %.2f Kelvin\n", valorEntrada, valorConvertido);
        }
    }
    else if (unidadeEntrada == 3)
    {
        // Entrada em Kelvin
        if (unidadeConversao == 1)
        {
            valorConvertido = valorEntrada - 273.15;
            printf("%.2f Kelvin = %.2f Celsius\n", valorEntrada, valorConvertido);
        }
        else if (unidadeConversao == 2)
        {
            valorConvertido = (valorEntrada - 273.15) * 9 / 5 + 32;
            printf("%.2f Kelvin = %.2f Fahrenheit\n", valorEntrada, valorConvertido);
        }
        else if (unidadeConversao == 3)
        {
            valorConvertido = valorEntrada;
            printf("%.2f Kelvin = %.2f Kelvin\n", valorEntrada, valorConvertido);
        }
    }
    else
    {
        printf("Opcao invalida!\n");
    }
}

// 5 - Função para conversão de Velocidade
void conversaoVelocidade()
{
    int opcao;
    double valor;

    printf("\nEscolha o tipo de conversao de velocidade:\n");
    printf("1. Km/h para m/s\n");
    printf("2. m/s para Km/h\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite o valor em Km/h: ");
        scanf("%lf", &valor);
        printf("%.2lf Km/h = %.2lf m/s\n", valor, kmhParaMs(valor));
        break;
    case 2:
        printf("Digite o valor em m/s: ");
        scanf("%lf", &valor);
        printf("%.2lf m/s = %.2lf Km/h\n", valor, msParaKmh(valor));
        break;
    default:
        printf("Opcao invalida.\n");
    }
}

// 6 - Função para conversão de Potência
void conversaoPotencia()
{
    int opcao;
    double valor;

    printf("\nEscolha o tipo de conversao de potencia:\n");
    printf("1. Watts para kWatts");
    printf("2. Watts para cv");
    printf("3. kWatts para Watts");
    printf("4. kWatts para cv");
    printf("5. cv para Watts");
    printf("6. cv para kWatts");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite o valor em Watts: ");
        scanf("%lf", &valor);
        printf("%.2lf Watts = %.2lf kWatts\n", valor, WattsParaKwatts(valor));
        break;
    case 2:
        printf("Digite o valor em Watts: ");
        scanf("%lf", &valor);
        printf("%.2lf Watts = %.2lf cv\n", valor, WattsParaCV(valor));
        break;
    case 3:
        printf("Digite o valor em kWatts: ");
        scanf("%lf", &valor);
        printf("%.2lf kWatts = %.2lf Watts\n", valor, KwattsParaWatts(valor));
        break;
    case 4:
        printf("Digite o valor em kWatts: ");
        scanf("%lf", &valor);
        printf("%.2lf kWatts = %.2lf cv\n", valor, KwattsParaCV(valor));
        break;
    case 5:
        printf("Digite o valor em cv: ");
        scanf("%lf", &valor);
        printf("%.2lf cv = %.2lf Watts\n", valor, CVParaWatts(valor));
        break;
    case 6:
        printf("Digite o valor em cv: ");
        scanf("%lf", &valor);
        printf("%.2lf cv = %.2lf kWatts\n", valor, CVParaKwatts(valor));
        break;
    default:
        printf("Opcao invalida.\n");
    }
}

// Função para conversão de Tempo
void conversaoTempo()
{
    int opcao;
    double valor;

    printf("\nEscolha o tipo de conversao de tempo:\n");
    printf("1. Segundos para minutos\n");
    printf("2. Minutos para segundos\n");
    printf("3. Minutos para horas\n");
    printf("4. Horas para minutos\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite o valor em segundos: ");
        scanf("%lf", &valor);
        printf("%.2lf Segundos = %.2lf Minutos\n", valor, segundosParaMinutos(valor));
        break;
    case 2:
        printf("Digite o valor em minutos: ");
        scanf("%lf", &valor);
        printf("%.2lf Minutos = %.2lf Segundos\n", valor, minutosParaSegundos(valor));
        break;
    case 3:
        printf("Digite o valor em minutos: ");
        scanf("%lf", &valor);
        printf("%.2lf Minutos = %.2lf Horas\n", valor, minutosParaHoras(valor));
        break;
    case 4:
        printf("Digite o valor em horas: ");
        scanf("%lf", &valor);
        printf("%.2lf Horas = %.2lf Minutos\n", valor, horasParaMinutos(valor));
        break;
    default:
        printf("Opcao invalida.\n");
    }
}
// 6- Função para conversão de Massa
void conversaoMassa()
{
    int opcao;
    double valor;

    printf("\nEscolha o tipo de conversão de massa:\n");
    printf("1. Quilograma (kg) para Grama (g)\n");
    printf("2. Quilograma (kg) para Tonelada (t)\n");
    printf("3. Grama (g) para Quilograma (kg)\n");
    printf("4. Tonelada (t) para Quilograma (kg)\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite o valor em Quilogramas (kg): ");
        scanf("%lf", &valor);
        printf("%.2lf kg = %.2lf g\n", valor, quilogramasParaGramas(valor));
        break;
    case 2:
        printf("Digite o valor em Quilogramas (kg): ");
        scanf("%lf", &valor);
        printf("%.2lf kg = %.2lf t\n", valor, quilogramasParaToneladas(valor));
        break;
    case 3:
        printf("Digite o valor em Gramas (g): ");
        scanf("%lf", &valor);
        printf("%.2lf g = %.2lf kg\n", valor, gramasParaQuilogramas(valor));
        break;
    case 4:
        printf("Digite o valor em Toneladas (t): ");
        scanf("%lf", &valor);
        printf("%.2lf t = %.2lf kg\n", valor, toneladasParaQuilogramas(valor));
        break;
    default:
        printf("Opcao invalida.\n");
    }
}

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

// Função principal
int main()
{
    int categoria;

    do
    {
        printf("\nEscolha a categoria de conversao:\n");
        printf("1. Comprimento\n");
        printf("2. Volume\n");
        printf("3. Temperatura\n");
        printf("4. Velocidade\n");
        printf("5. Tempo\n");
        printf("6. Massa\n");
        printf("7. Armazenamento\n");
        printf("8. Potencia \n");
        printf("0. Sair\n");
        scanf("%d", &categoria);

        switch (categoria)
        {
        case 1:
            conversaoComprimento(); // Chama a função separada para comprimento
            break;
        case 2:
            conversaoVolume(); // Chama a função separada para volume
            break;
        case 3:
            converterTemperatura(); // Chama a função separada para Temperatura
            break;
        case 4:
            conversaoVelocidade(); // Chama a função separada para Velocidade
            break;
        case 5:
            conversaoTempo(); // Chama a função separada para Tempo
            break;
        case 6:
            conversaoMassa(); // Chama a função separada para Massa
            break;
        case 7:
            conversaoArmazenamento(); // Chama a função separada para Armazenamento
            break;
        case 8:
            conversaoPotencia(); // Chama a função separada para Potencia
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida.\n");
        }

    } while (categoria != 0);

    return 0;
}
