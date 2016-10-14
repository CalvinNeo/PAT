///*
//* HDU 5889 Barricade
//* 求堵住从1到n的最短路的最小花费
//*
//* bfs + 最小割
//* 首先用Dij或者bfs求出dis数组，接着从终点出发，倒着bfs找出所有最短路径重新建图
//* 然后就是一个裸的最小割了，就等于最大流
//*/
//
//#include <stdio.h>
//#include <string.h>
//#include <iostream>
//#include <queue>
//#include <map>
//#include <vector>
//using namespace std;
//
//struct NetFlow
//{
//	const static int MAXN = 5000 + 10;
//	const static int MAXE = 500000;
//	const static long long INF = 1e18;
//	struct Edge
//	{
//		int from, to, next, cap, flow;
//		Edge() {}
//		Edge(int u, int v, int c, int f, int nxt) :from(u), to(v), cap(c), flow(f), next(nxt) {}
//	}edge[MAXE];
//	int head[MAXN], tol, N;
//	int cur[MAXN], pre[MAXN], dis[MAXN], gap[MAXN];
//	void init(int _n)
//	{
//		N = _n, tol = 0; memset(head, -1, sizeof(head));
//	}
//	void link(int u, int v, int cap)//s->t,cap
//	{
//		edge[tol] = Edge(u, v, cap, 0, head[u]); head[u] = tol++;
//		edge[tol] = Edge(v, u, 0, 0, head[v]); head[v] = tol++;
//	}
//	long long ISAP(int S, int T)
//	{//S -> T
//		long long maxflow = 0, aug = INF;
//		int flag = false, u, v;
//		for (int i = 0; i<N; ++i) cur[i] = head[i], gap[i] = dis[i] = 0;
//		for (gap[S] = N, u = pre[S] = S; dis[S]<N; flag = false)
//		{
//			for (int &it = cur[u]; it != -1; it = edge[it].next)
//			{
//				if (edge[it].cap>edge[it].flow&&dis[u] == dis[v = edge[it].to] + 1)
//				{
//					aug = min(aug, (long long)(edge[it].cap - edge[it].flow));
//					pre[v] = u, u = v; flag = true;
//					if (u == T)
//					{
//						for (maxflow += aug; u != S;)
//						{
//							edge[cur[u = pre[u]]].flow += aug;
//							edge[cur[u] ^ 1].flow -= aug;
//						}
//						aug = INF;
//					}
//					break;
//				}
//			}
//			if (flag) continue;
//			int mx = N;
//			for (int it = head[u]; it != -1; it = edge[it].next)
//			{
//				if (edge[it].cap>edge[it].flow&&dis[edge[it].to]<mx)
//				{
//					mx = dis[edge[it].to]; cur[u] = it;
//				}
//			}
//			if ((--gap[dis[u]]) == 0) break;
//			++gap[dis[u] = mx + 1]; u = pre[u];
//		}
//		return maxflow;
//	}
//}NF;
//const int MAXN = 5000 + 10;
//const int MAXE = 200000;
//const int INF = 1e9;
//struct node {
//	int v, c;
//	node(int _v = 0, int _c = 0) :v(_v), c(_c) {}
//	bool operator <(const node &rhs) const {
//		return c>rhs.c;
//	}
//};
//struct Ed
//{
//	int u, v, w;
//}e;
//vector<Ed>p;
//struct Edge {
//	int to, cost;
//	int w;
//	int next;
//};
//Edge edge[MAXE];
//int head[MAXN], tot;
//bool vis[MAXN];
//int dis[MAXN];
//
//void Dijkstra(int n, int start)
//{
//	memset(vis, false, sizeof(vis));
//	for (int i = 1; i <= n; i++) dis[i] = INF;
//	priority_queue<node>q;
//	while (!q.empty()) q.pop();
//	dis[start] = 0;
//	q.push(node(start, 0));
//	node next;
//	while (!q.empty()) {
//		next = q.top();
//		q.pop();
//		int u = next.v;
//		if (vis[u]) continue;
//		vis[u] = true;
//		for (int i = head[u]; i != -1; i = edge[i].next) {
//			int v = edge[i].to;
//			int cost = edge[i].cost;
//			if (!vis[v] && dis[v]>dis[u] + cost) {
//				dis[v] = dis[u] + cost;
//				q.push(node(v, dis[v]));
//			}
//		}
//	}
//}
//
//void init()
//{
//	tot = 0;
//	memset(head, -1, sizeof(head));
//}
//
//void addedge(int u, int v, int w, int ww)
//{
//	edge[tot].to = v;
//	edge[tot].cost = w;
//	edge[tot].w = ww;
//	edge[tot].next = head[u];
//	head[u] = tot++;
//}
//void bfs(int T)
//{
//	memset(vis, 0, sizeof(vis));
//	queue<int>Q;
//	Q.push(T);
//	vis[T] = true;
//	while (!Q.empty())
//	{
//		int u = Q.front();
//		Q.pop();
//		for (int i = head[u]; i != -1; i = edge[i].next)
//		{
//			int ds = edge[i].cost;
//			int v = edge[i].to;
//			if (ds + dis[v] == dis[u])
//			{
//				e.u = v, e.v = u, e.w = edge[i].w;
//				p.push_back(e);
//				if (!vis[v])
//				{
//					vis[v] = 1;
//					Q.push(v);
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	int T;
//	int n, m, u, v, w;
//	//freopen("in.txt","r",stdin);
//	scanf("%d", &T);
//	while (T--)
//	{
//		init();
//		p.clear();
//		scanf("%d%d", &n, &m);
//		while (m--)
//		{
//			scanf("%d%d%d", &u, &v, &w);
//			addedge(u, v, 1, w);
//			addedge(v, u, 1, w);
//		}
//		Dijkstra(n, 1);
//		bfs(n);
//		int sz = p.size();
//		NF.init(n + 1);
//		for (int i = 0; i<sz; i++)
//		{
//			u = p[i].u;
//			v = p[i].v;
//			w = p[i].w;
//			NF.link(u, v, w);
//		}
//		long long ans = NF.ISAP(1, n);
//		printf("%lld\n", ans);
//	}
//	return 0;
//}


///*
//By:OhYee
//Github:OhYee
//Blog:http://www.oyohyee.com/
//Email:oyohyee@oyohyee.com
//かしこいかわいい？
//エリーチカ！
//要写出来Хорошо的代码哦~
//*/
//#include <cstdio>
//#include <algorithm>
//#include <cmath>
//#include <cstring>
//#include <iomanip>
//#include <iostream>
//#include <map>
//#include <set>
//#include <list>
//#include <queue>
//#include <stack>
//#include <string>
//#include <vector>
//#include <bitset>
//#include <functional>
//using namespace std;
//typedef long long LL;
//const int INF = 0x7FFFFFFF / 2;
//const double eps = 1e-10;
//const int maxn = 1005;
//const int maxm = 10005 * 2;
//struct Edge {
//	int u, v, w;
//	Edge() :u(0), v(0), w(0) {}
//	Edge(int a, int b, int c) :u(a), v(b), w(c) {}
//};
//int pos;
//Edge edge[maxm], road[maxm];
//list<int> L[maxn];
//int n, m;
//queue<int> Q;
//int dist[maxn];
//bool vis[maxn];
//void init() {
//	pos = 0;
//	for (int i = 1; i <= n; i++)
//		L[i].clear();
//}
////图中增加 u→v 权重为 w 的边
//inline void add(int u, int v, int w) {
//	edge[pos] = Edge(u, v, w);
//	L[u].push_back(pos);
//	pos++;
//}
////Dinic
//bool bfs(int s, int t) {
//	memset(dist, 0, sizeof(dist));
//	while (!Q.empty())
//		Q.pop();
//	Q.push(s);
//	dist[s] = 1;
//	while (!Q.empty()) {
//		int u = Q.front();
//		Q.pop();
//		for (list<int>::iterator it = L[u].begin(); it != L[u].end(); it++) {
//			int v = edge[*it].v;
//			if (!dist[v] && edge[*it].w) {
//				dist[v] = dist[u] + 1;
//				if (v == t)
//					return true;
//				Q.push(v);
//			}
//		}
//	}
//	return false;
//}
//int dfs(int u, int t, int flow) {
//	if (u == t)
//		return flow;
//	int remain = flow;
//	for (list<int>::iterator it = L[u].begin(); it != L[u].end() && remain; it++) {
//		int v = edge[*it].v;
//		if (dist[v] == dist[u] + 1 && edge[*it].w) {
//			int k = dfs(v, t, min(remain, edge[*it].w));
//			if (!k)
//				dist[v] = 0;
//			edge[*it].w -= k;
//			edge[(*it) ^ 1].w += k;
//			remain -= k;
//		}
//	}
//	return flow - remain;
//}
//int Dinic(int u, int v) {
//	int ans = 0;
//	while (bfs(u, v))
//		ans += dfs(u, v, INF);
//	return ans;
//}
//void Do() {
//	//读入并建图
//	init();
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> road[i].u >> road[i].v >> road[i].w;
//		add(road[i].u, road[i].v, 1);
//		add(road[i].v, road[i].u, 1);
//	}
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
//int main() {
//	cin.tie(0);
//	cin.sync_with_stdio(false);
//	int T;
//	cin >> T;
//	while (T--)
//		Do();
//	return 0;
//}


////
////by coolxxx
////#include<bits/stdc++.h>
//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<iomanip>
//#include<map>
//#include<stack>
//#include<queue>
//#include<set>
//#include<bitset>
//#include<memory.h>
//#include<time.h>
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////#include<stdbool.h>
//#include<math.h>
//#define min(a,b) ((a)<(b)?(a):(b))
//#define max(a,b) ((a)>(b)?(a):(b))
//#define abs(a) ((a)>0?(a):(-(a)))
//#define lowbit(a) (a&(-a))
//#define sqr(a) ((a)*(a))
//#define swap(a,b) ((a)^=(b),(b)^=(a),(a)^=(b))
//#define mem(a,b) memset(a,b,sizeof(a))
//#define eps (1e-10)
//#define J 10000
//#define mod 1000000007
//#define MAX 0x7f7f7f7f
//#define PI 3.14159265358979323
//#pragma comment(linker,"/STACK:1024000000,1024000000")
//#define N 1004
//#define M 10004
//using namespace std;
//typedef long long LL;
//double anss;
//LL aans;
//int cas, cass;
//int n, m, lll, ans;
//int nn, S, T;
//int d[N], vd[N], last[N], last1[N];
//bool u[N];
//struct xxx
//{
//	int next, to, q;
//}a[M << 1], b[M << 1];
//void add(int x, int y, int z)
//{
//	a[++lll].next = last[x];
//	a[lll].to = y;
//	a[lll].q = z;
//	last[x] = lll;
//}
//void link(int x, int y, int z)
//{
//	b[++cas].next = last1[x];
//	b[cas].to = y;
//	b[cas].q = z;
//	last1[x] = cas;
//}
//int sap(int u, int f)
//{
//	int i, v, tt, asp = 0, mix = nn - 1;
//	if (u == T)return f;
//	for (i = last[u]; i; i = a[i].next)
//	{
//		v = a[i].to;
//		if (a[i].q>0)
//		{
//			if (d[u] == d[v] + 1)
//			{
//				tt = sap(v, min(f - asp, a[i].q));
//				asp += tt;
//				a[i].q -= tt;
//				a[i ^ 1].q += tt;
//				if (asp == f || d[S] == nn)
//					return asp;
//			}
//			mix = min(mix, d[v]);
//		}
//	}
//	if (asp != 0)return asp;
//	if (!--vd[d[u]])d[S] = nn;
//	else vd[d[u] = mix + 1]++;
//	return asp;
//}
//void bfs()
//{
//	int now, to, i;
//	queue<int>q;
//	mem(d, MAX);
//	u[n] = 1; q.push(n); d[n] = 0;
//	while (!q.empty())
//	{
//		now = q.front(); q.pop();
//		if (d[now] >= d[S])continue;
//		for (i = last1[now]; i; i = b[i].next)
//		{
//			to = b[i].to;
//			if (d[now] + 1>d[to])continue;
//			d[to] = d[now] + 1;
//			add(now, to, 0), add(to, now, b[i].q);
//			if (!u[to])
//			{
//				u[to] = 1;
//				if (to != S)q.push(to);
//			}
//		}
//	}
//	mem(d, 0);
//}
//int main()
//{
//#ifndef ONLINE_JUDGEW
//	freopen("1.txt", "r", stdin);
//	//    freopen("2.txt","w",stdout);
//#endif
//	int i, j, k;
//	int x, y, z, f;
//	//    init();
//	for (scanf("%d", &cass); cass; cass--)
//		//    for(scanf("%d",&cas),cass=1;cass<=cas;cass++)
//		//    while(~scanf("%s",s))
//		//    while(~scanf("%d",&n))
//	{
//		lll = cas = 1; ans = 0;
//		mem(u, 0); mem(vd, 0); mem(last, 0); mem(last1, 0);
//		scanf("%d%d", &n, &m);
//		for (i = 1; i <= m; i++)
//		{
//			scanf("%d%d%d", &x, &y, &z);
//			link(x, y, z), link(y, x, z);
//		}
//		nn = n;
//		S = 1, T = n;
//		vd[0] = nn;
//		bfs();
//		while (d[S]<nn)
//		{
//			f = sap(S, MAX);
//			ans += f;
//		}
//		printf("%d\n", ans);
//	}
//	return 0;
//}
///*
////
//
////
//*/