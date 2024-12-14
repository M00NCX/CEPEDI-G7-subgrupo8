#include <stdio.h>

// comprimento 1
double metrosParaCentimetros(double metros) { return metros * 100; }
double metrosParaMilimetros(double metros) { return metros * 1000; }
double centimetrosParaMetros(double centimetros) { return centimetros / 100; }
double centimetrosParaMilimetros(double centimetros) { return centimetros * 10; }
double milimetrosParaMetros(double milimetros) { return milimetros / 1000; }
double milimetrosParaCentimetros(double milimetros) { return milimetros / 10; }

// massa 2
double quilogramasParaGramas(double kg) { return kg * 1000; }
double quilogramasParaToneladas(double kg) { return kg / 1000; }
double gramasParaQuilogramas(double g) { return g / 1000; }
double toneladasParaQuilogramas(double t) { return t * 1000; }

// volume 3
double litrosParaMililitros(double litros) { return litros * 1000; }
double mililitrosParaLitros(double ml) { return ml / 1000; }

// temperatura 4
double celsiusParaFahrenheit(double c) { return (c * 9 / 5) + 32; }
double celsiusParaKelvin(double c) { return c + 273.15; }
double fahrenheitParaCelsius(double f) { return (f - 32) * 5 / 9; }
double kelvinParaCelsius(double k) { return k - 273.15; }

// velocidade 5
double kmhParaMs(double kmh) { return kmh / 3.6; }
double msParaKmh(double ms) { return ms * 3.6; }
double kmhParaMph(double kmh) {return kmh / 1.609;}
double mphParaKmh(double mph) {return mph * 1.6;}
double mphParaMs(double mph) {return mph * 0.44704;}
double msParaMph(double ms) {return ms * 2.23694;}

// potência 6
double wattsParaQuilowatts(double w) { return w / 1000; }
double quilowattsParaWatts(double kw) { return kw * 1000; }

// área 7
double metroQuadradoParaCentimetroQuadrado(double m2) { return m2 * 10000; }
double centimetroQuadradoParaMetroQuadrado(double cm2) { return cm2 / 10000; }

// tempo 8
double segundosParaMinutos(double segundos) { return segundos / 60; }
double minutosParaSegundos(double minutos) { return minutos * 60; }
double minutosParaHoras(double minutos) { return minutos / 60; }
double horasParaMinutos(double horas) { return horas * 60; }
double segundosParaHoras(double segundos) {return segundos / 3600;}
double horasParaSegundos(double horas) {return horas * 3600;}

// armazenamento 9
double bytesParaKilobytes(double bytes) { return bytes / 1024; }
double kilobytesParaBytes(double kb) { return kb * 1024; }
double kilobytesParaMegabytes(double kb) { return kb / 1024; }

void informarCategorias() {
    printf("\nEscolha a categoria para conversão: \n");
    printf("1. Comprimento\n");
    printf("2. Massa\n");
    printf("3. Volume\n");
    printf("4. Temperatura\n");
    printf("5. Velocidade\n");
    printf("6. Potência\n");
    printf("7. Área\n");
    printf("8. Tempo\n");
    printf("9. Armazenamento\n");
    printf("0. Cancelar\n");
}

void processarCategorias(int categoria) {
    double entrada, resultado;
    int subcategoria;

    switch (categoria) {
        //adicionem os outros cases
        case 1:
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;

        case 5: //velocidade 
            printf("\n escolha a conversão que deseja realizar: \n");
            printf("1. Km/h para m/s\n");
            printf("2. m/s para Km/h\n");
            printf("3. Km/h para Mp/h\n");
            printf("4. Mp/h para Km/h\n");
            printf("5. Mp/h para m/s\n");
            printf("6. m/s para Mp/h\n");
            scanf("%d", &subcategoria);

            printf("digite o valor na unidade informada: \n");
            scanf("%lf", &entrada);

            switch (subcategoria) {
                case 1: resultado = kmhParaMs(entrada);
                    break;
                case 2: resultado = msParaKmh(entrada);
                    break;
                case 3: resultado = kmhParaMph(entrada);
                    break;
                case 4: resultado = mphParaKmh(entrada);
                    break;
                case 5: resultado = mphParaMs(entrada);
                    break;
                case 6: resultado = msParaMph(entrada);
                    break;
                default:
                    printf("Opção invalida\n");
                    return; 
            }
            
            printf("Resultado: %.2lf\n", resultado);
            break;

        case 6:
            break;
        
        case 7:
            break;

        case 8: //tempo
            printf("\n escolha a conversão que deseja realizar: \n");
            printf("1. segundos para minutos\n");
            printf("2. minutos para segundos\n");
            printf("3. minutos para horas\n");
            printf("4. horas para minutos\n");
            printf("5. segundos para horas\n");
            printf("6. horas para segundos\n");
            scanf("%d", &subcategoria);

            printf("digite o valor na unidade informada: \n");
            scanf("%lf", &entrada);

            switch (subcategoria) {
                case 1: resultado = segundosParaMinutos(entrada);
                    break;
                case 2: resultado = minutosParaSegundos(entrada);
                    break;
                case 3: resultado = minutosParaHoras(entrada);
                    break;
                case 4: resultado = horasParaMinutos(entrada);
                    break;
                case 5: resultado = segundosParaHoras(entrada);
                    break;
                case 6: resultado = horasParaSegundos(entrada);
                    break;
                default: 
                    printf("Opção invalida\n"); 
                    return; 
            }
            printf("Resultado: %.2lf\n", resultado);
            break;

        //adicionem os outros cases
        case 9:
            break;

        default:
            printf("Opção invalida\n");
    }
}

int main() {
    int categoria;

    do {
        informarCategorias();
        printf("Digite a categoria desejada: \n");
        scanf("%d", &categoria);

        if (categoria == 0) {
            printf("Saindo...\n");
            break;
        }

        processarCategorias(categoria);

    } while (categoria != 0);

    return 0;
}
