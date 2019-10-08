#include <cstdio>

struct student
{
    char name[12], ID[12];
    char gender;
    int grade;
} FemaleHigh, MaleLow, input;

int main()
{
    bool Mflag = false, Fflag = false;
    int N;
    int hightest = 0, lowest = 100;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%s %c %s %d", input.name, &input.gender, input.ID, &input.grade);
        if (input.gender == 'M')
        {
            Mflag = true;
            if (input.grade <= lowest)
            {
                lowest = input.grade;
                MaleLow = input;
            }
        }
        else
        {
            Fflag = true;
            if (input.grade >= hightest)
            {
                hightest = input.grade;
                FemaleHigh = input;
            }
        }
    }
    if (Fflag)
        printf("%s %s\n", FemaleHigh.name, FemaleHigh.ID);
    else
        printf("Absent\n");
    if (Mflag)
        printf("%s %s\n", MaleLow.name, MaleLow.ID);
    else
        printf("Absent\n");
    if (Mflag && Fflag)
        printf("%d\n", FemaleHigh.grade - MaleLow.grade);
    else
        printf("NA\n");
    return 0;
}