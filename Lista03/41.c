#include <stdio.h>

int main(void)
{
    float R1, R2, Req;

    printf("R1 = ");
    scanf("%f", &R1);
    printf("R2 = ");
    scanf("%f", &R2);

    while(1){
        if(R1==0 || R2==0){
            printf("Uma das resistencias digitadas eh 0.\n");
            break;
        }
        else{
            Req = (R1*R2)/(R1+R2);
            printf("R1 || R2 = %.3f\n",Req);
        }
        printf("R1 = ");
        scanf("%f", &R1);
        printf("R2 = ");
        scanf("%f", &R2);
    }

    return 0;
}
