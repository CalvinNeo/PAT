//#include <iostream> 
//#include <vector>
//#include <queue>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#include <stack>
//#include <functional>
//#include "stdlib.h" 
//#include "time.h"
//#include <set>
//#include <map>
//#include <numeric>
//#include <cctype>
//#include <cmath>
//
//#define INF 0x003f3f3f
//#define MAX_RESULT 999999
//#define MAXN 55
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//typedef pair<int, int> pii;
//
//
//int n, e;
//
//int m[MAXN][MAXN];
//int dis[MAXN][MAXN];
//
//void floyd() {
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (m[i][j]) {
//				dis[i][j] = 1;
//			}
//			else {
//				dis[i][j] = INF;
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			for (int k = 1; k <= n; k++)
//			{
//				if (dis[i][k] + dis[k][j] < dis[i][j]) {
//					dis[i][j] = dis[i][k] + dis[k][j];
//				}				
//			}
//		}
//	}
//}
//
//bool circle()
//{
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			if (dis[i][j] != INF  && dis[j][i] != INF )
//				return true;
//	return false;
//}
//
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		scanf("%d%d", &n, &e);
//		memset(m, 0, sizeof m);
//		for (int i = 0; i < e; i++)
//		{
//			int u, v;
//			scanf("%d%d", &u, &v);
//			u++; v ++;
//			m[u][v] = 1;
//		}
//		floyd();
//		if (circle())
//			puts("YES");
//		else
//			puts("NO");
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}