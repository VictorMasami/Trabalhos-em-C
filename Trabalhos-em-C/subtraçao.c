// Escreva um programa que leia um número de dois dígitos e subtraia o valor de cada um dos 
//dígitos do valor lido. O valor resultante deve ser exibido. 
#include<stdio.h>

main(){
    int valorLido, parte1, parte2;
    printf("Digite um número inteiro: ");
    scanf("%d", &valorLido);
    parte1 = valorLido / 10;
    parte2 = valorLido % 10;

    parte1 = parte1 + parte2;
    valorLido = valorLido - parte1;

    printf("O valor resultante e %d", valorLido);
    

}