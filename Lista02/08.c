#include <stdio.h>

int main(void)
{
    float n1, n2;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    if((n1>=0.0 && n1<=10.0) && (n2>=0.0 && n2<=10.0))
        printf("A media das duas notas eh %.1f.\n", (n1+n2)/2);
    else
        printf("Notas invalidas, verifique e reinicie o programa.\n");

    return 0;
}
