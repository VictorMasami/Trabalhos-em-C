#include<stdio.h>

int a, b, soma, proximo;
main(){
   int a, b, x, y;
   int soma = 0 ;
   printf("Digite um número inteiro: ");
   scanf("%d", &a);

   printf("Digite outro número inteiro: ");
   scanf("%d", &b);
   x = a; 
   y = b;


   soma += x + y;

   printf("%d\n", &a);
   printf("%d\n", &b);

   while (soma >= a && b)  {
      int proximo = x  + y;

      x = y;
      y = proximo;
      soma += proximo; 

      if(( x == a && y == b )||(x == b && y == a)){

         break;
      }
    }
    printf(" O resultado da somatoria é %d\n", soma);
   return 0; 
}

