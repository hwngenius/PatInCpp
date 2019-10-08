#include <cstdio>

int main()
{
    int array[116] = {0};
    int N, n;
    scanf("%d %d", &N, &n);
    n %= N;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    bool flag = false;
    for (int i = N - n; i < N; i++)
    {
        if (flag)
            printf(" ");
        printf("%d", array[i]);
        flag = true;
    }
    for (int i = 0; i < N - n; i++)
    {
        if (flag)
            printf(" ");
        printf("%d", array[i]);
        flag = true;
    }
    return 0;
}