#include <stdio.h>

int main(void)
{
    int num, a,b,c,d,e,f,g,h, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(num<0)
        printf("Numero invalido");
    else{
        a = num/10000000;
        b = (num%10000000)/1000000;
        c = ((num%10000000)%1000000)/100000;
        d = (((num%10000000)%1000000)%100000)/10000;
        e = ((((num%10000000)%1000000)%100000)%10000)/1000;
        f = (((((num%10000000)%1000000)%100000)%10000)%1000)/100;
        g = ((((((num%10000000)%1000000)%100000)%10000)%1000)%100)/10;
        h = ((((((num%10000000)%1000000)%100000)%10000)%1000)%100)%10;

        soma = a+b+c+d+e+f+g+h;

        printf("A soma dos algarismos do numero digitado eh: %d.\n", soma);
    }

    return 0;
}
