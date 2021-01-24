#include <stdio.h>
int main(void)
{
    int a, b, c;
    int d, e;
    int A[10] = { 0 };
    scanf("%d %d %d", &a, &b, &c);

    d = a * b * c;
    while (d >= 1)
    {
        e = d % 10;
        A[e] += 1;
        d /= 10;
    }
    for (int i = 0; i < 10; i++)
        printf("%d\n", A[i]);
    
    return 0;
}
