#include <cstdio>

int main()
{
    int st, ed;
    scanf("%d %d", &st, &ed);
    float c = ed - st;
    c /= 100.0;
    int ans = int(c + 0.5);
    int h, m, s;
    h = ans / 3600;
    ans %= 3600;
    m = ans / 60;
    ans %= 60;
    s = ans;
    printf("%02d:%02d:%02d", h, m, s);

    return 0;
}