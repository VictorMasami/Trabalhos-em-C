//Escrever um programa que leia um valor em Reais e calcule o menor número possível de 
//notas de R$100,00, R$50,00, R$20,00, R$10,00, R$5,00, R$2,00 e R$1,00 em que o valor lido 
//pode ser decomposto. Ignore os centavos. O programa deve mostrar o número total de notas. 
#include<stdio.h>
int main(){
    int valorInserido, resto, somaDoResto;
    somaDoResto = 0;
    printf("DIgite um valor: ");
    scanf("%d",&valorInserido);
    
    resto = valorInserido / 100;
    
    resto = resto % 50;
    somaDoResto = somaDoResto + resto;

    resto = resto % 20;
    somaDoResto = somaDoResto + resto;

    resto = resto % 10;
    somaDoResto = somaDoResto + resto;

    resto = resto % 5;
    somaDoResto = somaDoResto + resto;

    resto = resto % 2;
    somaDoResto = somaDoResto + resto;

    resto = resto % 1;
    somaDoResto = somaDoResto + resto;
    
    printf("o minimo de notas utilizadas fica %d",somaDoResto);

 
}