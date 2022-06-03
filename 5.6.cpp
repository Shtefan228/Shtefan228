#include <stdio.h>

int main()
{
    double b, bk;
    unsigned n;
    
    printf("b, n; ");
    scanf("%lf, %u", &b, &n);
    
    bk = b;
    for(unsigned i=0;i<n;i++)
    {
        bk = b + 1 / bk;
    }
    printf("b%u = %g\n", n, bk);
}