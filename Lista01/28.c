#include <stdio.h>

double sumofSquares(double numA, double numB, double numC);

int main(void){
    double numA, numB, numC;
    printf("Digite o numero A: ");
    scanf("%lf", &numA);
    printf("Digite o numero B: ");
    scanf("%lf", &numB);
    printf("Digite o numero C: ");
    scanf("%lf", &numC);

    double sum = sumofSquares(numA, numB, numC);

    printf("%.2lf*%.2lf + %.2lf*%.2lf + %.2lf*%.2lf = %.2lf\n", numA, numA, numB, numB, numC, numC, sum);

    return 0;
}

double sumofSquares(double numA, double numB, double numC){
    return numA*numA + numB*numB + numC*numC;
}
