#include <cstdio>

int main()
{
    char set[5] = {'S', 'H', 'C', 'D', 'J'};
    int n;
    int num[56], tmp[56];
    for (int i = 1; i <= 54; i++)
        num[i] = i;
    int array[56] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= 54; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= 54; j++)
        {
            tmp[array[j]] = num[j];
        }
        for (int j = 1; j <= 54; j++)
            num[j] = tmp[j];
    }

    if (num[1] % 13 == 0)
    {
        printf("%c", set[num[1] / 13 - 1]);
        printf("13");
    }
    else
    {
        printf("%c", set[num[1] / 13]);
        printf("%d", num[1] % 13);
    }
    for (int i = 2; i <= 54; i++)
    {
        if (num[i] % 13 == 0)
        {
            printf(" %c", set[num[i] / 13 - 1]);
            printf("13");
        }
        else
        {
            printf(" %c", set[num[i] / 13]);
            printf("%d", num[i] % 13);
        }
    }

    return 0;
}