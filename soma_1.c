#include <stdio.h>

int sum(int num1, int num2);

int main(){

    int num1 = 10, num2 = 5;

    printf("O resultado da soma = %d", sum(num1, num2));
}


int sum(int num1, int num2){
    
    int soma;

    soma = num1 + num2;

    return soma;
}
