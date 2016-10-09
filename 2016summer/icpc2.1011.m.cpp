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
//struct Edge {
//	int u, v, w;
//	Edge() :u(0), v(0), w(0) {}
//	Edge(int a, int b, int c) :u(a), v(b), w(c) {}
//};
//
//int N, M;
//// origin
//int ma[MAXN][MAXN];
//int dis[MAXN];
//// flow
//int m[MAXN][MAXN];
//int maxf = 0;
//
//// common
//bool vis[MAXN];
//int pre[MAXN];
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
//				vis[i] = true; // 注意位置
//			}
//		}
//	}
//	return false;
//}
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
//struct Edge {
//	int u, v, w;
//	Edge() :u(0), v(0), w(0) {}
//	Edge(int a, int b, int c) :u(a), v(b), w(c) {}
//};
//
//void Do() {
//	queue
//	//BFS计算所有点到源点的距离
//	while (!Q.empty())
//		Q.pop();
//	for (int i = 1; i <= n; i++)
//		dist[i] = INF;
//	memset(vis, false, sizeof(vis));
//	Q.push(1);
//	dist[1] = 0;
//	vis[1] = true;
//	while (!Q.empty()) {
//		int u = Q.front();
//		Q.pop();
//		for (list<int>::iterator it = L[u].begin(); it != L[u].end(); it++) {
//			int v = edge[*it].v;
//			if (!vis[v]) {
//				vis[v] = true;
//				dist[v] = dist[u] + 1;
//				Q.push(v);
//			}
//		}
//	}
//	//重新建图,新图中只有最短路和死路
//	init();
//	for (int i = 0; i < m; i++) {
//		int mx, mi;
//		if (dist[road[i].u] > dist[road[i].v]) {
//			mx = road[i].u;
//			mi = road[i].v;
//		}
//		else {
//			mi = road[i].u;
//			mx = road[i].v;
//		}
//		//较远点比较近点恰好远1个单位
//		if (dist[mx] - dist[mi] == 1) {
//			add(mi, mx, road[i].w);
//			add(mx, mi, 0);
//		}
//	}
//	//Dinic模板求最大流(最小割)
//	cout << Dinic(1, n) << endl;
//}
//
////void build() {
////	memset(vis, 0, sizeof vis);
////	queue<int> q;
////	q.push(1);
////	vis[1] = true;
////	while (!q.empty()) {
////		int fr = q.front();
////		q.pop();
////		for (int to = 1; to <= N; to++)
////		{
////			if (to == N && ma[fr][to] != 0) {
////				m[fr][to] = ma[fr][to];
////				m[to][fr] = ma[to][fr];
////			}
////			else {
////				if (!vis[to] && ma[fr][to] != 0) {
////					q.push(to);
////				}
////			}
////		}
////	}
////}
//
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
