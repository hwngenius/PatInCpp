#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int INF = 100000000;
const int maxn = 512;
bool vis[maxn] = {false};
int w[maxn], weight[maxn], d[maxn], num[maxn];
int N, M, st, ed;
int G[maxn][maxn];

void dijiesila(int s)
{
    fill(d, d + maxn, INF);
    memset(num, 0, sizeof(num));
    memset(w, 0, sizeof(w));
    w[s] = weight[s];
    d[s] = 0;
    num[s] = 1;
    for (int i = 0; i < N; i++)
    {
        int u = -1, MIN = INF;
        for (int j = 0; j < N; j++)
        {
            if (vis[j] == false && d[j] < MIN)
            {
                u = j;
                MIN = d[j];
            }
        }
        if (u == -1)
            return;
        vis[u] = true;
        for (int v = 0; v < N; v++)
        {
            if (vis[v] == false && G[u][v] != INF)
            {
                if (d[u] + G[u][v] < d[v])
                {
                    d[v] = d[u] + G[u][v];
                    w[v] = weight[v] + w[u];
                    num[v] = num[u];
                }
                else if (d[u] + G[u][v] == d[v])
                {
                    if (w[v] < w[u] + weight[v])
                    {
                        w[v] = w[u] + weight[v];
                    }
                    num[v] += num[u];
                }
            }
        }
    }
}

int main()
{
    scanf("%d %d %d %d", &N, &M, &st, &ed);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &weight[i]);
    }
    fill(G[0], G[0] + maxn * maxn, INF);
    int a, b;
    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &a, &b);
        scanf("%d", &G[a][b]);
        G[b][a] = G[a][b];
    }
    dijiesila(st);
    printf("%d %d", num[ed], w[ed]);

    return 0;
}