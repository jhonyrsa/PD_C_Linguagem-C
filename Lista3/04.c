#include <stdio.h>


int main(void)
{
    int i=0;

    while(i<=100000){
        if(i%10000==0)
            printf("\t%6d\n", i);
        else
            printf("\t%6d", i);
        i+=1000;
    }

    return 0;
}
