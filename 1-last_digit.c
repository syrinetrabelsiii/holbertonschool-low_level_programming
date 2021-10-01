#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main()
{
        int n,i;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        i=n%10;
        printf("Last digit of %d is %d\n",n,i);
        if (i>5)
                printf("%d is greater than 5\n",i);
        else if (i==0)
                printf("%d is equal to 0\n",i);
        else if (i<6 && i!=0)
                printf("%d is less than 6 and not 0\n" ,i);
        return (0);
} 
