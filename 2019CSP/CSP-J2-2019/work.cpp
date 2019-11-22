#include <bits/stdc++.h>
using namespace std;
struct Edge
{
    int u, v, next;
} e[400000];
int n, m, u, v, tot, query, f[200000], d[200000][2];  // »íÈ»¿ªÀÊ 
bool used[200000];
queue<int> q;
void add(int u, int v)
{
     tot++;
     e[tot].u = u;
     e[tot].v = v;
     e[tot].next = f[u];
     f[u] = tot;
}
int main()
{
 //freopen("work.in", "r", stdin);
    // freopen("work.out", "w", stdout);
    cin >> n >> m >> query;
    for (int i = 1; i <= m; ++i)
     {
          cin >> u >> v;
          add(u, v);
          add(v, u);
     }
    memset(d, 0x3f, sizeof(d));
    memset(used, false, sizeof(used));
    d[1][0] = 0;
    used[1] = true;
    q.push(1);
   while (!q.empty())
     {
          int u = q.front();
          q.pop();
          for (int i = f[u]; i > 0; i = e[i].next)
          {
              int v = e[i].v;
              if (d[u][0] + 1 < d[v][1])
               {
                    d[v][1] = d[u][0] + 1;
                    if (!used[v])
                    {
                        used[v] = true;
                        q.push(v);
                    }
               }
              if (d[u][1] + 1 < d[v][0])
               {
                    d[v][0] = d[u][1] + 1;
                    if (!used[v])
                    {
                        used[v] = true;
                        q.push(v);
                    }
               }
          }
          used[u] = false;
     }
    for (int i = 1; i <= query; ++i)
     {
          int a, l;
          cin >> a >> l;
          if ((d[a][0] <= l && l % 2 == 0) || (d[a][1] <= l && l % 2 == 1))
              printf("Yes\n");
          else
              printf("No\n");
     }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
