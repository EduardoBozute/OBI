#include <stdio.h>

int main()
{
    int n, d, a;
    scanf(" %d %d %d", &n, &d, &a);
    if (d>=a)
        printf(" %d", d-a);
    else
        printf(" %d", n-a+d);
    return 0;
}