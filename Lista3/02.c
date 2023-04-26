#include <stdio.h>

int main(void){
    int i;

    for(i=1; i<=100; i++){
        if(i%100==0)
            printf("\t%3d\n\n", i);
        else if(i%10==0)
            printf("\t%3d\n", i);
        else
            printf("\t%3d", i);
    }

    i = 1;

    while(i<=100){
        if(i%100==0)
            printf("\t%3d\n\n", i);
        else if(i%10==0)
            printf("\t%3d\n", i);
        else
            printf("\t%3d", i);
        i++;
    }

    i = 1;

    do{
        if(i%10==0)
            printf("\t%3d\n", i);
        else
            printf("\t%3d", i);
        i++;
    }while(i<101);

    return 0;
}
