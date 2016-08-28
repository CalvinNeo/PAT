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
//#define MAXN 110
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//
//int e[MAXN][MAXN];
//int dis[MAXN];
//bool vis[MAXN];
//int n, m;
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	while (SC2(n, m) != EOF) {
//		int cost = 0;
//		int count = 0;
//		if (n == 0) {
//			return 0;
//		}
//		for (int i = 0; i <= m; i++)
//		{
//			for (int j = 0; j <= m; j++)
//			{
//				e[i][j] = INF;
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			int a, b, c;
//			scanf("%d %d %d", &a, &b, &c);
//			e[a][b] = c;
//			e[b][a] = c;
//		}
//		memset(vis, 0, sizeof vis);
//		fill(dis, dis + m + 1, INF);
//		dis[1] = 0;
//		int add;
//		for (int a = 1; a <= m; a++) {
//			int mindis = INF, minindex = -1;
//			for (int b = 1; b <= m; b++)
//			{
//				if (!vis[b] && dis[b] < mindis) {
//					mindis = dis[b];
//					minindex = b;
//				}				
//			}
//			if (minindex != -1)
//			{
//				vis[minindex] = true;
//				cost += dis[minindex];
//				count++;
//			}
//			else {
//				break;
//			}
//			for (int i = 1; i <= m; i++)
//			{
//				if (!vis[i]) {
//					dis[i] = min(dis[i], /*dis[minindex] +*/ e[minindex][i]);
//				}
//			}
//		}
//		if (count < m) {
//			printf("?\n");
//		}
//		else {
//			printf("%d\n", cost);
//		}
//	}
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
//
//
