#include <stdio.h>

int main()
{
    int N, M, d[65], e[65], p=0;
    char L;
    
    for (int i = 0; i < 65; i++)
    {
        d[i] = 0;
        e[i] = 0;
    }
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %c", &M, &L);
        if (L == 'D')
            d[M]++;
        else 
            e[M]++;
    }
    for (int i = 30; i <= 60; i++)
    {
        if (d[i] <= e[i])
            p += d[i];
        else 
            p += e[i];
    }
    printf("%d",p);
    return 0;
}
