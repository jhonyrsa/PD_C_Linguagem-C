#include <stdio.h>

int main(void)
{
    int n, i, j, c=0;

    printf("Digite um numero >0: ");
    scanf("%d", &n);

    for(i=1; i<=n;i++){
        for(j=1;j<=i;j++){
            c++;
            printf(" %3d", c);
        }
        printf("\n");
    }

    getch();
    return 0;
}
