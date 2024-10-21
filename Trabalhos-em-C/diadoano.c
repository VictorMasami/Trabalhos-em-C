#include <stdio.h>

int main()
{
    int dia, mes, ano, bissexto, dia_do_ano;
    int diasPorMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    {
        bissexto = 1;
    }
    else
    {
        bissexto = 0;
    }

    if (bissexto)
    {
        diasPorMes[1] = 29;
    }

    
    dia_do_ano = 0;
    for (int i = 0; i < mes - 1; i++)
    {
        dia_do_ano += diasPorMes[i];
    }
    dia_do_ano += dia;

    
    printf("O dia %d/%d/%d é o dia %d do ano.\n", dia, mes, ano, dia_do_ano);

    return 0;
}
