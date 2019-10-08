#include <cstdio>

struct person
{
    char name[8];
    int year, month, day;
} old, young, input, oldest, youngest;

bool younger(person a, person b)
{
    if (a.year != b.year)
        return a.year > b.year;
    else if (a.month != b.month)
        return a.month > b.month;
    else
        return a.day >= b.day;
}

int main()
{
    int N;
    old.year = 1814;
    old.month = 9;
    old.day = 6;
    young.year = 2014;
    young.month = 9;
    young.day = 6;
    int sum = 0;
    oldest = old;
    youngest = young;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%s %d/%d/%d", input.name, &input.year, &input.month, &input.day);
        if (younger(input, oldest) && younger(youngest, input))
        {
            sum++;
            if (younger(input, old))
            {
                old = input;
            }
            if (younger(young, input))
            {
                young = input;
            }
        }
    }
    printf("%d %s %s", sum, young.name, old.name);

    return 0;
}

// 19 / 20