#include <stdio.h>

double wattParaKilowatt(double watt)
{
    return watt / 1000.0;
}

double wattParaCV(double watt)
{
    return watt / 735.49875;
}

double kilowattParaWatt(double kilowatt)
{
    return kilowatt * 1000.0;
}

double kilowattParaCV(double kilowatt)
{
    return kilowatt / 0.73549875;
}

double cvParaWatt(double cv)
{
    return cv * 735.49875;
}

double cvParaKilowatt(double cv)
{
    return cvParaWatt(cv) / 1000.0;
}

void conversaoPotencia()
{
    int unidadeEntrada, unidadeConversao;
    double valorEntrada, valorConvertido;

    printf("Escolha a unidade de entrada:\n");
    printf("1. Watt (W)\n");
    printf("2. Kilowatt (kW)\n");
    printf("3. Cavalo-vapor (CV)\n");

    scanf("%d", &unidadeEntrada);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valorEntrada);

    printf("\nEscolha a unidade para conversao:\n");
    printf("1. Watt (W)\n");
    printf("2. Kilowatt (kW)\n");
    printf("3. Cavalo-vapor (CV)\n");
    scanf("%d", &unidadeConversao);

    if (unidadeEntrada == 1)
    {
        if (unidadeConversao == 1)
        {
            valorConvertido = valorEntrada;
        }
        else if (unidadeConversao == 2)
        {
            valorConvertido = wattParaKilowatt(valorEntrada);
        }
        else if (unidadeConversao == 3)
        {
            valorConvertido = wattParaCV(valorEntrada);
        }
    }
    else if (unidadeEntrada == 2)
    {
        if (unidadeConversao == 1)
        {
            valorConvertido = kilowattParaWatt(valorEntrada);
        }
        else if (unidadeConversao == 2)
        {
            valorConvertido = valorEntrada;
        }
        else if (unidadeConversao == 3)
        {
            valorConvertido = kilowattParaCV(valorEntrada);
        }
    }
    else if (unidadeEntrada == 3)
    {
        if (unidadeConversao == 1)
        {
            valorConvertido = cvParaWatt(valorEntrada);
        }
        else if (unidadeConversao == 2)
        {
            valorConvertido = cvParaKilowatt(valorEntrada);
        }
        else if (unidadeConversao == 3)
        {
            valorConvertido = valorEntrada;
        }
    }
    else
    {
        printf("Opcao de unidade de entrada invalida!\n");
        return 1;
    }

    printf("\nValor convertido: %.3lf\n", valorConvertido);
}