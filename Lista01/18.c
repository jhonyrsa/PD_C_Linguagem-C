#include <stdio.h>

double litersConverter(double volume);

int main(void){
    double cubicMeters;

    printf("Digite o volume em metros cubicos: ");
    scanf("%lf", &cubicMeters);

    double liters = litersConverter(cubicMeters);

    printf("Volume: %.2lf L\n", liters);

    return 0;
}

double litersConverter(double volume){
    return volume*1000;
}
