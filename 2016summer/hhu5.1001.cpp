//#include <iostream> 
//#include <fstream>
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
//#include <queue>
//#include <string.h>
//#include <numeric>
//
//inline int fastread() {
//	
//	char c;
//	int ret = 0;
//	int sgn = 1;
//	do { c = getchar(); } while ((c < '0' || c > '9') && c != '-');
//	if (c == '-') sgn = -1; else ret = c - '0';
//	while ((c = getchar()) >= '0' && c <= '9') ret = ret * 10 + (c - '0');
//	return sgn * ret;
//}
//
//
//#define INF 0x3f3f3f3f
//#define MAXN 1010
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//
//int e[MAXN][MAXN];
//int dis[MAXN];
//bool vis[MAXN];
//int n;
//
//void dij() {
//	fill(dis, dis + MAXN, INF);
//	memset(vis, 0, sizeof vis);
//	dis[0] = 0;
//	vis[0] = false;
//	int mindis = 0;
//	for (int t = 0; t <= n; t++)
//	{
//		int mindis = INF, minindex = 0;
//		for (int i = 0; i <= n; i++)
//		{
//			if (dis[i] < mindis && !vis[i]) {
//				mindis = dis[i];
//				minindex = i;
//			}
//		}
//		vis[minindex] = true;
//		for (int i = 0; i <= n; i++)
//		{
//			if (!vis[i]) { // i
//				dis[i] = min(dis[minindex] + e[minindex][i], dis[i]);
//			}
//		}
//	}
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	int T, S, D;
//	while (scanf("%d %d %d", &T, &S, &D) != EOF) {
//		n = 0;
//		for (int i = 0; i < MAXN; i++)
//		{
//			for (int j = 0; j < MAXN; j++)
//			{
//				e[i][j] = INF;
//			}
//		}
//		for (int i = 0; i < T; i++)
//		{
//			int a, b, t;
//			scanf("%d %d %d", &a, &b, &t);
//// ÖØ±ßÒª¿¼ÂÇ°¡
//			e[a][b] = min(t, e[a][b]);
//			e[b][a] = e[a][b];
//			n = max(n, a);
//			n = max(n, b);
//		}
//		for (int i = 0; i < S; i++)
//		{
//			int s; scanf("%d", &s);
//			e[0][s] = 0;
//			e[s][0] = 0;
//		}
//		dij();
//		int mind = INF;
//		for (int i = 0; i < D; i++)
//		{
//			int d; scanf("%d", &d);
//			mind = min(mind, dis[d]);
//		}
//		printf("%d\n", mind);
//	}
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
//
//
