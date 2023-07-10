#include <stdio.h>

typedef float grade;

grade mediaGrade(grade grade1, grade grade2, grade grade3, grade grade4);

int main(void){
    grade grade1, grade2, grade3, grade4;

    printf("P1: ");
    scanf("%f", &grade1);
    printf("P2: ");
    scanf("%f", &grade2);
    printf("P3: ");
    scanf("%f", &grade3);
    printf("P4: ");
    scanf("%f", &grade4);

    grade media = mediaGrade(grade1, grade2, grade3, grade4);

    printf("Media: %.2f", media);

    return 0;
}

grade mediaGrade(grade p1, grade p2, grade p3, grade p4){
    return (p1+p2+p3+p4)/4.0;
}
