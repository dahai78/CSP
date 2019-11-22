#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
 
int t, n, m;
int f[20000];
int a[200][20000];
int main()
{
 
   freopen("souvenir.in", "r", stdin);
   freopen("souvenir.out", "w", stdout);
 
   cin >> t >> n >> m;
    
   for (int i = 1; i <= t; ++i)
       for (int j = 1; j <= n; ++j)
           cin >> a[i][j];
    
   for (int i = 2; i <= t; ++i) {
        
       memset(f, 0, sizeof(f));
       for (int j = 1; j <= n; ++j) {
           for (int k = a[i - 1][j]; k <= m; k++) {
               f[k] = max(f[k], f[k - a[i - 1][j]] + a[i][j] - a[i - 1][j]);
            }
        }
       m += f[m];
    }
   cout << m << endl;
   fclose(stdin);
   fclose(stdout);
   return 0;
}
