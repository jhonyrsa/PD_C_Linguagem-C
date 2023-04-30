#include <stdio.h>

int main(void)
{
    float a, b, c;

    printf("Digite tres valores separados por espaco: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a>b && a>c && b>c)
        printf("Ordem decrescente: %.2f %.2f %.2f.\n", a, b, c);
    else if(a>b && a>c && c>b)
        printf("Ordem decrescente: %.2f %.2f %.2f.\n", a, c, b);
    else if(b>a && b>c && a>c)
        printf("Ordem decrescente: %.2f %.2f %.2f.\n", b, a, c);
    else if(b>a && b>c && c>a)
        printf("Ordem decrescente: %.2f %.2f %.2f.\n", b, c, a);
    else if(c>a && c>b && a>b)
        printf("Ordem decrescente: %.2f %.2f %.2f.\n", c, a, b);
    else
        printf("Ordem decrescente: %.2f %.2f %.2f.\n", c, b, a);

    return 0;
}
