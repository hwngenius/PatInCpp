#include <cstdio>

int main()
{
    int set[112];
    int N;
    int sum = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &set[i]);
    }
    int t = 0;
    for (int i = 0; i < N; i++)
    {
        if (set[i] > t)
        {
            sum += (set[i] - t) * 6;
        }
        else
        {
            sum += (t - set[i]) * 4;
        }
        t = set[i];
        sum += 5;
        // printf("%d\t", sum);
    }
    printf("%d", sum);

    return 0;
}