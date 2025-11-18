#include <stdio.h>

int main(){
    /*
    comentários:
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int num1, num2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o primeiro número: \n");
    scanf("%d", &num1);

    printf("Entre com o segundo número: \n");
    scanf("%d", &num2);

    //operação soma
    soma = num1 + num2;

    //operação subtração
    subtracao = num1 - num2;

    //operação multiplicação
    multiplicacao = num1 * num2;

    //operação divisão
    divisao = num1 / num2;

    printf("A soma é: %d \n", soma);
    printf("A subtração é: %d \n", subtracao);
    printf("A multiplicação é: %d \n", multiplicacao);
    printf("A divisão é: %d \n", divisao);

}
