#include <stdio.h>

void t7()
{
    int n;
    printf("n = ");
    scanf("%d", &n);

    double b0 = 1, b1 = 0, bk;
    double a0 = 0, a1 = 1, ak;

    double s = 2.0 / (a0 + b0);;

    if (n == 1)
    {
        printf("s = %lf", s);
        return;
    }

    s += 4.0 / (a1 + b1);

    if (n == 2)
    {
        printf("s = %lf", s);
        return;
    }

    double p = 4.0;

    for (int k = 3; k <= n; ++k)
    {
        bk = b1 + a1;
        ak = a1 / k + a0 * bk;

        p *= 2.0;
        s += p / (ak + bk);

        b0 = b1;
        b1 = bk;
        a0 = a1;
        a1 = ak;
    }
    printf("s = %lf", s);
}

int main()
{
    t7();
}
