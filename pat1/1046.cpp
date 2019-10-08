#include <cstdio>

int main()
{
    int a1, a2, b1, b2;
    int n, a = 0, b = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
        if (a1 + b1 == a2 && a1 + b1 == b2)
        {
            continue;
        }
        else if (a1 + b1 == a2)
        {
            b++;
        }
        else if (a1 + b1 == b2)
        {
            a++;
        }
    }
    printf("%d %d", a, b);

    return 0;
}