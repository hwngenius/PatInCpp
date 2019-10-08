#include <cstdio>

int main()
{
    int N;
    char c;
    scanf("%d %c", &N, &c);
    int M = int(N / 2.0 + 0.5);
    for (int i = 0; i <= M - 1; i++)
    {
        for (int j = 0; j <= N - 1; j++)
        {
            if (i == 0 || i == M - 1 || j == 0 || j == N - 1)
            {
                printf("%c", c);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}