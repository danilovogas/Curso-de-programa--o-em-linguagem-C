#include <stdio.h>
#include <stdlib.h>

int main(){

    //Como ter dois caracteres e limpar o buffer do teclado com espaço
    char a, b;

    printf("\n\tDigite dois caracteres (a e b): ");
    scanf("%c %c", &a, &b);
    printf("\n\tOs caracteres sao: %c e %c\n", a, b);
    printf("\n\ta = %d\tb = %d\n", a, b);



   //Problemas ao ler caractere. Como ler um caractere depois de outros dados?
    char sexo;
    int idade;
    float peso, altura;

    printf("\n\tDigite sua idade, seu peso, sua altura e seu sexo(f ou m) ");
    scanf("%d%f%f%c", &idade, &peso, &altura, &sexo);
    printf("\n\tIdade: %d\n\tPeso: %f\n\tAltura: %f\n\tSexo: %c\n", idade, peso, altura, sexo);


   //Como ler vários valores do teclado com a função scanf()
    //int idade;
    //float peso, altura;

    printf("\n\tDigite sua idade, seu peso e sua altura? ");
    scanf("%d %f %f", &idade, &peso, &altura);
    printf("\n\tIdade: %d\tPeso: %f\tAltura: %f\n", idade, peso, altura);

   //ler caracteres do teclado com a função fgetc
   //char sexo;

   printf("\n\tDigite f para feminino e m para masculino: ");
   sexo = fgetc(stdin);
   printf("\n\tSexo: %c\n", sexo);

   //Lendo caracteres do teclado com a função getc()
    //char sexo = 'a';

    printf("\n\tDigite f para feminino e m para masculino: ");
    sexo = getc(stdin);
    printf("\n\tSexo: %c\n", sexo);

    //Lendo caracteres com getchar()
    //char sexo;

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
    //float peso = 75.380;

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
