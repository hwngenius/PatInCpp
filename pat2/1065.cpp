#include <cstdio>

int main()
{
    bool flag = false;
    long long a, b, c;
    long long res;
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &c);
        res = a + b;
        if (a > 0 && b > 0 && res < 0)
            flag = true;
        else if (a < 0 && b < 0 && res >= 0)
            flag = false;
        else if (res > c)
            flag = true;
        else
            flag = false;
        if (flag)
        {
            printf("Case #%d: true\n", i);
        }
        else
        {
            printf("Case #%d: false\n", i);
        }
    }

    return 0;
}