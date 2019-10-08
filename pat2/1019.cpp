#include <cstdio>

bool func(int *N, int n)
{
    for (int i = 0; i < n; i++, n--)
    {
        if (N[i] != N[n])
            return false;
    }
    return true;
}

int ans[32];
int main()
{
    int c, d;
    scanf("%d %d", &c, &d);
    // c = a + b;
    int i = 0;
    do
    {
        ans[i++] = c % d;
        c /= d;
    } while (c != 0);
    if (func(ans, i - 1))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    i--;
    printf("%d", ans[i]);
    for (int j = i - 1; j >= 0; j--)
    {
        printf(" %d", ans[j]);
    }

    return 0;
}