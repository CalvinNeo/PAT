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
//#include <sstream>
//
//#define INF 0x3f3f3f3f
//#define MAXN 1010
//#define MAXM 10010
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//
//int T, cas = 0;
//
//int N, M;
//int m[MAXN][MAXN];
//int ma[MAXN][MAXN];
//bool vis[MAXN];
//int pre[MAXN];
//int maxf = 0;
//
//bool bfs() {
//	memset(pre, 0, sizeof pre);
//	memset(vis, 0, sizeof vis);
//	queue<int> q;
//	q.push(1);
//	vis[1] = true;
//	pre[1] = 0;
//	while (!q.empty())
//	{
//		int first = q.front();
//		q.pop();
//		if (first == N) {
//			return true;
//		}
//		for (int i = 1; i <= N; i++)
//		{
//			if (!vis[i] && m[first][i]) {
//				q.push(i);
//				pre[i] = first;
//				vis[i] = true; // ×¢ÒâÎ»ÖÃ
//			}
//		}
//	}
//	return false;
//}
//
//
//void bfs2() {
//	memset(pre, 0, sizeof pre);
//	memset(vis, 0, sizeof vis);
//	queue<int> q;
//	q.push(1);
//	vis[1] = true;
//	pre[1] = 0;
//	bool flag = false;
//	while (!q.empty())
//	{
//		int first = q.front();
//		q.pop();
//		for (int i = 1; i <= N; i++)
//		{
//			if (!vis[i] && ma[first][i] ) {
//				pre[i] = first;
//				if (i == N ) {
//					for (int i = N; i != 1; i = pre[i])
//					{
//						m[i][pre[i]] = ma[i][pre[i]];
//						m[pre[i]][i] = ma[pre[i]][i];
//					}
//					flag = true;
//				}
//				else if(!flag){
//					vis[i] = true;
//					q.push(i);
//				}
//			}
//		}
//	}
//}
//
//
//void ford() {
//	memset(pre, 0, sizeof pre);
//	memset(vis, 0, sizeof vis);
//	while (bfs()) {
//		int minc = INF;
//		for (int i = N; i != 1; i = pre[i])
//		{
//			minc = min(m[pre[i]][i], minc);
//		}
//		for (int i = N; i != 1; i = pre[i])
//		{
//			m[pre[i]][i] -= minc;
//			m[i][pre[i]] += minc;
//		}
//		maxf += minc;
//	}
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	SC1(T);
//	while (T--)
//	{
//		SC2(N, M);
//		int s, e, c;
//		maxf = 0;
//		memset(m, 0, sizeof m);
//		memset(ma, 0, sizeof ma);
//		for (int i = 0; i < M; i++)
//		{
//			scanf("%d %d %d", &s, &e, &c);
//			ma[s][e] = c;
//			ma[e][s] = c;
//		}
//		bfs2();
//		ford();
//		printf("%d\n", maxf);
//	}
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
//
