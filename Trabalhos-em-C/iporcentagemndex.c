//. Escreva um programa que leia dois valores inteiros, um representando o número total de 
//elementos de uma amostragem, e outro representando uma fração desta amostragem. A 
//seguir, o programa deve calcular a porcentagem representada pela fração e retornar este valor
#include<stdio.h>

main(){
    int Inteiro, Porcentagem, ResultadoDiv, Resultado;
    printf("Digite dois números inteiros : ");
    scanf("%d",&Inteiro);
    scanf("%d",&Porcentagem);
    ResultadoDiv = Inteiro / 100;
    Resultado = Porcentagem * ResultadoDiv;
    printf("A porcentagem com base nos valores informados e %d", Resultado);
    return 0;






}