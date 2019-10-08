#include <cstdio>
int score[100010];

int main()
{
    int maxscore = 0, maxindex = 0;
    int N;
    int school, grade;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &school, &grade);
        score[school] += grade;
        if (score[school] > maxscore)
        {
            maxscore = score[school];
            maxindex = school;
        }
    }
    printf("%d %d", maxindex, maxscore);

    return 0;
}