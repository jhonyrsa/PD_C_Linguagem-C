#include <stdio.h>

int main(void)
{
    float n1, n2, n3, n4, media;

    printf("Digite N1: ");
    scanf("%f", &n1);
    printf("Digite N2: ");
    scanf("%f", &n2);
    printf("Digite N3: ");
    scanf("%f", &n3);
    printf("Digite N4: ");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4;

    printf("A media eh: %.1f\n", media);

    return 0;
}
