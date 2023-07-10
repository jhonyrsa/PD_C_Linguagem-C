#include <stdio.h>

int main(void)
{
    float jardas, metros;

    printf("Distancia (m): ");
    scanf("%f", &metros);

    jardas = metros/0.9144;

    printf("Distancia: %.3f yd.\n", jardas);

    return 0;
}
