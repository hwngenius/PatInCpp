#include <cstdio>

struct item
{
    int cof;
    double exp;
} input[12];
double ans[2048] = {0.0};

int main()
{

    int K, N, m;
    double exp;
    scanf("%d", &K);
    for (int i = 0; i < K; i++)
    {
        scanf("%d %lf", &input[i].cof, &input[i].exp);
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d %lf", &N, &exp);
        for (int j = 0; j < K; j++)
        {
            ans[N + input[j].cof] += exp * input[j].exp;
        }
    }
    int sum = 0;
    for (int i = 0; i < 2001; i++)
    {
        if (ans[i] != 0.0)
            sum++;
    }
    printf("%d", sum);
    for (int i = 2000; i >= 0; i--)
    {
        if (ans[i] != 0.0)
        {
            printf(" %d %.1f", i, ans[i]);
        }
    }

    return 0;
}