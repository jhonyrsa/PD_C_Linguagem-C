#include <stdio.h>

int main(void)
{
    float alturaChico=1.50, alturaZe=1.10;
    int anos=0;

    for(;;anos++){
        alturaChico = alturaChico+0.02;
        alturaZe = alturaZe+0.03;
        if(alturaZe>alturaChico){
            anos++;
            break;
        }
    }
    printf("Ze demora %d anos para ficar maior que Chico\n", anos);

    return 0;
}
