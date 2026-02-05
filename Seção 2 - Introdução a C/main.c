#include <stdio.h>
#include <stdlib.h>

int main(){

    //Lendo caracteres com getchar()
    char sexo;

    printf("\n\tDigite f para feminino ou m para masculino: ");
    sexo = getchar();
    printf("\n\tSexo : %c\n", sexo);
    printf("\n\tInteiro: %d\n", sexo);
    printf("\n\tLetra g: %c\n", 103);

    //lendo caracteres com scanf()
    //char sexo;

    printf("\n\tDigite f para feminino ou m para masculino: ");
    scanf("%c", &sexo);
    printf("\n\tSexo digitado: %c\n", sexo);

    //lendo números reais
    float peso = 75.380;

    printf("\n\tDigite seu peso: ");
    scanf("%f", &peso);
    printf("\n\tPeso: %f\n", peso);


    //Criação de variáveis e ler números inteiros do teclado com a função scanf
    int num1, num2;

    printf("\nDigite dois valores inteiros: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("\nSoma: %d\n", num1 + num2);


    //Operações matemáticas

    printf("\n\t%d + %d = %d\n", 10,  15, 10 + 15);//lista de parâmetros
    printf("\t%d - %d = %d\n", 15, 10, 15 - 10);
    printf("\t%d * %d = %d\n", 10, 15, 10 * 15);
    printf("\t%d / %d = %d\n", 10, 15, 15 / 10);

    return 0;

}
