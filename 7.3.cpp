#include <stdio.h>
#include <math.h>

#define N 10

double Sum(double array[N])
{
    double S = 0.0;

    for (int i = 0; i < N; i++)
    {
        if (array[i] > M_E)
        {
            S += array[i];
        }
    }
    return S;
}

int main()
{
    double array[N];

    for (int i = 0; i < N; i++)
    {
        printf("a[%d] = ", i);
        scanf("%lf", &array[i]);
    }

    printf("Сума елементів бильших за число Ейлера = %lf", Sum(array));
}