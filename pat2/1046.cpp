#include <cstdio>
void swap(int *a, int *b)
{
    int t;
    if (*a > *b)
    {
        t = *a;
        *a = *b;
        *b = t;
    }
}

int main()
{
    int array[100010] = {0};
    int N, sum = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    // printf("%d\n", sum);
    int M, a, b;
    scanf("%d", &M);
    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &a, &b);
        int ans1 = 0, ans2 = 0;
        if (a <= b)
        {
            for (int j = a - 1; j < b - 1; j++)
            {
                ans1 += array[j];
            }
        }
        else
        {
            for (int j = b - 1; j < a - 1; j++)
                ans1 += array[j];
        }
        // printf("ans1=%d\n", ans1);
        ans2 = sum - ans1;
        if (ans1 > ans2)
            printf("%d\n", ans2);
        else
            printf("%d\n", ans1);
    }

    return 0;
}