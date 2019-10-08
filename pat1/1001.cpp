#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    while (n != 1)
    {
        sum++;
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = (3 * n + 1) / 2;
        }
    }
    printf("%d", sum);

    return 0;
}