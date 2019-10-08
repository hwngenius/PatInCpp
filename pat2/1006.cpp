#include <cstdio>
#include <cstring>
// using namespace std;

struct item
{
    char id[20];
    int hh, mm, ss;
};

bool great(item a, item b)
{
    if (a.hh == b.hh)
        return a.hh > b.hh;
    if (a.mm == b.mm)
        return a.mm > b.mm;
    else
        return a.ss > b.ss;
}

int main()
{
    item a, b, tmp;
    a.hh = 24;
    a.mm = 60;
    a.ss = 60;
    b.hh = b.mm = b.ss = 0;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d:%d:%d", tmp.id, &tmp.hh, &tmp.mm, &tmp.ss);
        if (great(a, tmp))
            a = tmp;
        scanf("%d:%d:%d", &tmp.hh, &tmp.mm, &tmp.ss);
        if (great(tmp, b))
            b = tmp;
    }
    printf("%s %s", a.id, b.id);
    return 0;
}

// 21/25