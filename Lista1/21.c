#include <stdio.h>

int main(void)
{
    float quilos, libras;

    printf("Massa (lb): ");
    scanf("%f", &libras);

    quilos = libras*0.45;

    printf("Massa: %.3f kg.\n", quilos);

    return 0;
}
