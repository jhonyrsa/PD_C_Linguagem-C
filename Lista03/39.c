#include <stdio.h>

int main (void)
{
    float a, b, area;

    while(1){

        printf("a = ");
        scanf("%f", &a);
        printf("b = ");
        scanf("%f", &b);

        if(a<=0 || b<=0)
            continue;
        else{
            area = (a*b)/2;
            break;
        }
    }
    printf("A area do triangulo eh %.2f.\n", area);

    return 0;
}
