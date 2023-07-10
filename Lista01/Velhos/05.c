#include <stdio.h>

int main(void)
{
    float num1, quintaParte;

    scanf("%f", &num1);

    quintaParte = num1/5.0;

    printf("%.3f", quintaParte);

    return 0;
}
