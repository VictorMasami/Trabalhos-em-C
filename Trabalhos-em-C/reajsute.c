// Escrever um programa que leia dois valores numéricos, um representando o valor do salário 
//de um trabalhador e o outro o percentual de reajuste que este salário deve receber. O 
//programa deve calcular e mostrar na tela o salário após o reajuste. 
#include<stdio.h>
main(){
 float salario, reajuste, PorcentagemDoReajuste, salarioFinal;
 printf("Digite o valor do salario: ");
 scanf("%f",&salario);
 printf("Digite o percentual de reajuste: ");
 scanf("%f",&PorcentagemDoReajuste);
 reajuste = (salario / 100) * PorcentagemDoReajuste;
salarioFinal = salario + reajuste;
printf("O salario apos o reajuste fica no valor de %f", salarioFinal);
return 0;




}