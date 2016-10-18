#include <iostream> 
#include <fstream>
#include <vector>
#include <queue>
#include <cstring>
#include <string>
#include <algorithm>
#include <stack>
#include <functional>
#include "stdlib.h" 
#include "time.h"
#include <set>
#include <map>
#include <queue>
#include <string.h>
#include <numeric>
#include <sstream>
#include <list>

#define INF 0x3f3f3f3f
#define MAXN 1010
#define MAXM 10010
typedef std::pair<int, int> pii;
using namespace std;
#define LL long long

#define SC1(X) scanf("%d", &X)
#define SC2(X, Y) scanf("%d %d", &X, &Y)

int T, cas = 0;

struct Edge {
	int u, v, w;
	Edge() :u(0), v(0), w(0) {}
	Edge(int a, int b, int c) :u(a), v(b), w(c) {}
};


int N, M;
int ma[MAXN][MAXN];
bool vis[MAXN];
int dis[MAXN];
int maxf = 0;
int m[MAXN][MAXN];
int pre[MAXN];

bool ford_bfs() {
	memset(pre, 0, sizeof pre);
	memset(vis, 0, sizeof vis);
	queue<int> q;
	q.push(N);
	vis[N] = true;
	pre[N] = 0;
	while (!q.empty())
	{
		int first = q.front();
		q.pop();
		if (first == 1) {
			return true;
		}
		for (int i = 1; i <= N; i++)
		{
			if (!vis[i] && m[first][i]) {
				q.push(i);
				pre[i] = first;
				vis[i] = true; // ×¢ÒâÎ»ÖÃ
			}
		}
	}
	return false;
}

void ford() {
	memset(pre, 0, sizeof pre);
	memset(vis, 0, sizeof vis);
	while (ford_bfs()) {
		int minc = INF;
		for (int i = 1; i != N; i = pre[i])
		{
			minc = min(m[pre[i]][i], minc);
		}
		for (int i = 1; i != N; i = pre[i])
		{
			m[pre[i]][i] -= minc;
			m[i][pre[i]] += minc;
		}
		maxf += minc;
	}
}

void ford_add(int i, int j) {
	if (ma[i][j]) {
		m[i][j] = ma[i][j];
		//m[j][i] = ma[i][j];
	}
}

void build_ford() {
	memset(vis, 0, sizeof vis);
	for (int i = 1; i <= N; i++)
	{
		dis[i] = INF;
	}
	queue<pii> q;
	q.push(make_pair(N, 1));
	vis[N] = true;
	dis[N] = 0;
	while (!q.empty())
	{
		pii x = q.front();
		q.pop();
		if (dis[x.first] > dis[1]) {
			continue;
		}
		for (int i = 1; i <= N; i++)
		{
			if (ma[x.first][i])
			{
				// there is a path from x.first to i
				if (i != 1 && dis[x.first] + 1 > dis[i]) {
					continue;
				}
				dis[i] = min(dis[x.first], x.second + 1);
				// add edge
				m[x.first][i] = ma[x.first][i];
				// continue bfs
				if (!vis[i] && m[x.first][i]) {
					q.push(make_pair(i, x.second + 1));
					vis[i] = true;
				}
			}
		}
	}
}

int main() {
#ifdef __ACM
	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
	//freopen("1.txt", "r", stdin);
#endif
	SC1(T);
	while (T--)
	{
		SC2(N, M);
		int s, e, c;
		maxf = 0;
		memset(m, 0, sizeof m);
		memset(ma, 0, sizeof ma);
		for (int i = 0; i < M; i++)
		{
			scanf("%d %d %d", &s, &e, &c);
			ma[s][e] = c;
			ma[e][s] = c;
		}
		build_ford();
		ford();

		printf("%d\n", maxf);
	}
#ifdef __ACM
	int iwannastop;
	scanf("%d", &iwannastop);
	system("pause");
#endif
}

