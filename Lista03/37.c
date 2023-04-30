#include <stdio.h>

int main(void)
{
    int i;

    int a, b, c, d, e, f;

    for(i=1000;i<=9999;i++){
        a = i/1000;
        b = (i%1000)/100;
        c = ((i%1000)%100)/10;
        d = ((i%1000)%100)%10;

        e = 10*a + b;
        f = 10*c + d;

        if(((e+f)*(e+f))==i)
            printf("%2d + %2d = %2d e %d x %2d = %d\n", e, f, e+f, e+f, e+f, i);
    }

    return 0;
}
