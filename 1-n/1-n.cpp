#include <stdio.h>
int  main()
{
    int N=1000;

    //printf("Hello World!");
    printf("N= ");
    scanf_s("%d", &N);
 

    int sum = 0;
    int i = 0;
    printf("i=%d N=%d\n", i, N);
    for (i = -1; i <= N; i++)//;
    {
        printf("Before i=%d, sum=%d\n", i, sum);
        sum = sum + i;
        printf("After i=%d, sum=%d\n", i, sum);
    }


    printf("%d\n", sum);
    return sum;
}