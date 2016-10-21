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
//#include <list>
//
//#define INF 0x3f3f3f3f
//#define MAXN 1010
//#define MAXM 10010
//typedef std::pair<int, int> pii;
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
//
//int N, M;
//int ma[MAXN][MAXN];
//bool vis[MAXN];
//int dis[MAXN];
//int maxf = 0;
//
//#define USE_FORD
//
//#ifdef USE_FORD
//int m[MAXN][MAXN];
//int pre[MAXN];
//
//bool ford_bfs() {
//	memset(pre, 0, sizeof pre);
//	memset(vis, 0, sizeof vis);
//	queue<int> q;
//	q.push(N);
//	vis[N] = true;
//	pre[N] = 0;
//	while (!q.empty())
//	{
//		int first = q.front();
//		q.pop();
//		if (first == 1) {
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
//void ford() {
//	memset(pre, 0, sizeof pre);
//	memset(vis, 0, sizeof vis);
//	while (ford_bfs()) {
//		int minc = INF;
//		for (int i = 1; i != N; i = pre[i])
//		{
//			minc = min(m[pre[i]][i], minc);
//		}
//		for (int i = 1; i != N; i = pre[i])
//		{
//			m[pre[i]][i] -= minc;
//			m[i][pre[i]] += minc;
//		}
//		maxf += minc;
//	}
//}
//
//void ford_add(int i, int j) {
//	if (ma[i][j]) {
//		m[i][j] = ma[i][j];
//		//m[j][i] = ma[i][j];
//	}
//}
//
//void build_ford() {
//	memset(vis, 0, sizeof vis);
//	for (int i = 1; i <= N; i++)
//	{
//		dis[i] = INF;
//	}
//	queue<pii> q;
//	q.push(make_pair(N, 1));
//	vis[N] = true;
//	dis[N] = 0;
//	while (!q.empty())
//	{
//		pii x = q.front();
//		q.pop();
//		if (dis[x.first] > dis[1]) {
//			continue;
//		}
//		for (int i = 1; i <= N; i++)
//		{
//			if (ma[x.first][i])
//			{
//				// there is a path from x.first to i
//				if (i != 1 && dis[x.first] + 1 > dis[i]) {
//					continue;
//				}
//				dis[i] = min(dis[x.first], x.second + 1);
//				// add edge
//				m[x.first][i] = ma[x.first][i];
//				// continue bfs
//				if (!vis[i] && m[x.first][i]) {
//					q.push(make_pair(i, x.second + 1));
//					vis[i] = true;
//				}
//			}
//		}
//	}
//}
//#else
//
//
//list<int> L[MAXN];
//Edge edge[MAXN];
//int pos;
//bool dinic_bfs(int s, int t) {
//	memset(dis, 0, sizeof(dis));
//	queue<int> q;
//	while (!q.empty())
//		q.pop();
//	q.push(s);
//	dis[s] = 1;
//	while (!q.empty()) {
//		int u = q.front();
//		q.pop();
//		for (list<int>::iterator it = L[u].begin(); it != L[u].end(); it++) {
//			int v = edge[*it].v;
//			if (!dis[v] && edge[*it].w) {
//				dis[v] = dis[u] + 1;
//				if (v == t)
//					return true;
//				q.push(v);
//			}
//		}
//	}
//	return false;
//}
//
//int dinic_dfs(int u, int t, int flow) {
//	if (u == t)
//		return flow;
//	int remain = flow;
//	for (list<int>::iterator it = L[u].begin(); it != L[u].end() && remain; it++) {
//		int v = edge[*it].v;
//		if (dis[v] == dis[u] + 1 && edge[*it].w) {
//			int k = dinic_dfs(v, t, min(remain, edge[*it].w));
//			if (!k)
//				dis[v] = 0;
//			edge[*it].w -= k;
//			edge[(*it) ^ 1].w += k;
//			remain -= k;
//		}
//	}
//	return flow - remain;
//}
//
//int Dinic(int u, int v) {
//	int ans = 0;
//	while (dinic_bfs(u, v))
//		ans += dinic_dfs(u, v, INF);
//	return ans;
//}
//
//inline void dinic_add(int u, int v, int w) {
//	edge[pos] = Edge(u, v, w);
//	L[u].push_back(pos);
//	pos++;
//}
//
//void build_dinic() {
//	memset(vis, 0, sizeof vis);
//	for (int i = 1; i <= N; i++)
//	{
//		dis[i] = INF;
//	}
//	queue<pii> q;
//	q.push(make_pair(1, 1));
//	vis[1] = true;
//	while (!q.empty())
//	{
//		pii x = q.front();
//		q.pop();
//		for (int i = 1; i <= N; i++)
//		{
//			if (i == N) {
//				dis[x.first] = min(dis[x.first], x.second + 1);
//			}
//			if (!vis[i] && ma[x.first][i]) {
//				q.push(make_pair(i, x.second + 1));
//				vis[i] = true;
//			}
//		}
//	}
//	int mind = INF;
//	for (int i = 2; i < N; i++)
//	{
//		mind = min(mind, dis[i]);
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		if (i == 1 || i == N || dis[i] == mind) {
//			for (int j = 1; j <= N; j++)
//			{
//				if (ma[i][j]) {
//					int mx, mi;
//					if (dis[i] > dis[j]) {
//						mx = i;
//						mi = j;
//					}
//					else {
//						mi = i;
//						mx = j;
//					}
//					if (dis[mx] - dis[mi] == 1) {
//						dinic_add(mi, mx, ma[i][j]);
//						dinic_add(mx, mi, 0);
//					}
//				}
//			}
//		}
//	}
//}
//
//#endif
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
//#ifdef USE_FORD
//		memset(m, 0, sizeof m);
//#else
//		pos = 0;
//#endif // USE_FORD
//		memset(ma, 0, sizeof ma);
//		for (int i = 0; i < M; i++)
//		{
//			scanf("%d %d %d", &s, &e, &c);
//			ma[s][e] = c;
//			ma[e][s] = c;
//		}
//#ifdef USE_FORD
//		build_ford();
//		ford();
//#else
//		build_dinic();
//		maxf = Dinic(1, N);
//#endif
//		printf("%d\n", maxf);
//	}
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
//
