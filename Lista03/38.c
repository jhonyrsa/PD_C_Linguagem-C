#include <stdio.h>

int main(void)
{
    int a, b, c;

    for(a=1;;a++){
        for(b=1;;b++){
            for(c=1;;c++){
                if(((a*a)+(b*b)==(c*c))&&((a+b+c)==1000)) break;
            }
        }
    }

    printf("O terno pitagorico eh %d, %d e %d\n",a,b,c);

    return 0;
}
