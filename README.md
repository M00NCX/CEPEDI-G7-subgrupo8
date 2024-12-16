# CEPEDI

# Grupo 7 Subgrupo 8

## Atividade 1

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

