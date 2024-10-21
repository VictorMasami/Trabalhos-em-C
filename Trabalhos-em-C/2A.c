#include <stdio.h>

int main() {
    int a, b, n; 
    int soma = 0; 
    int proximo;  

    
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    
    printf("Digite um valor positivo N: ");
    scanf("%d", &n);

    
    soma = a + b;

    printf("%d\n", a);
    printf("%d\n", b);

    
    while (soma <= n) {
        proximo = a + b; 
        printf("%d\n", proximo); 
        soma += proximo; 
        
        
        a = b;
        b = proximo;
    }

    printf("A soma total dos elementos é: %d\n", soma);

    return 0;
}
