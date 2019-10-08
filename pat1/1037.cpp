#include <cstdio>

int func(int a, int b, int c)
{
    return a * 17 * 29 + b * 29 + c;
}

int main()
{
    int a, b, c, sum1, sum2;
    scanf("%d.%d.%d", &a, &b, &c);
    sum1 = func(a, b, c);
    scanf("%d.%d.%d", &a, &b, &c);
    sum2 = func(a, b, c);
    int sum = sum2 - sum1;
    if (sum < 0)
    {
        printf("-");
        sum = -sum;
    }
    printf("%d.", sum / (29 * 17));
    sum %= (29 * 17);
    printf("%d.", sum / 29);
    sum %= 29;
    printf("%d", sum);

    return 0;
}