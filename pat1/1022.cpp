#include <cstdio>
int ans[32];
int main()
{
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &d);
    c = a + b;
    int i = 0;
    do
    {
        ans[i++] = c % d;
        c /= d;
    } while (c != 0);
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", ans[j]);
    }

    return 0;
}