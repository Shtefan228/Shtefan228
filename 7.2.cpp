#include <stdio.h>

#define N 4

int main()
{
    int array[N] = { 5, 112, 4, 3 };

    for (int i = N - 1; i >= 0; i--)
    {
        printf(" a[%d] = %d \n", i, array[i]);
    }

}