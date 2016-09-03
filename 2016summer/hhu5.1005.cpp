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

#define INF 0x3f3f3f3f
#define MAXN 210
using namespace std;
#define LL long long

#define SC1(X) scanf("%d", &X)
#define SC2(X, Y) scanf("%d %d", &X, &Y)

int N, M;
int m[MAXN][MAXN];
bool vis[MAXN];
int pre[MAXN];
int maxf = 0;


bool bfs() {
	memset(pre, 0, sizeof pre);
	memset(vis, 0, sizeof vis);
	queue<int> q;
	q.push(1);
	vis[1] = true;
	pre[1] = 0;
	while (!q.empty())
	{
		int first = q.front();
		q.pop();
		if (first == M) {
			return true;
		}
		for (int i = 1; i <= M; i++)
		{
			if (!vis[i] && m[first][i]) {
				q.push(i);
				pre[i] = first;
				vis[i] = true; // 注意位置
			}
		}
	}
	return false;
}


//// 这个bfs会超时
//bool bfs() {
//	memset(pre, 0, sizeof pre);
//	memset(vis, 0, sizeof vis);
//	queue<int> q;
//	q.push(1);
//	pre[1] = 0;
//	while (!q.empty())
//	{
//		int first = q.front();
//		q.pop();
//		if (!vis[first])
//		{
//			vis[first] = true; // 注意位置
//			for (int i = 1; i <= M; i++)
//			{
//				if (m[first][i]) {
//					q.push(i);
//					pre[i] = first;
//					if (i == M) {
//						return true;
//					}
//				}
//			}
//		}
//	}
//	return false;
//}

//bool bfs()
//{
//	queue<int> q;
//	memset(vis, 0, sizeof(vis));
//	vis[1] = 1;
//	q.push(1);
//	while (!q.empty())
//	{
//		int first = q.front();
//		if (first == M)
//			return true;
//		q.pop();
//		for (int i = 1; i <= M; i++)
//		{
//			if (!vis[i] && m[first][i])
//			{
//				q.push(i);
//				vis[i] = 1;
//				pre[i] = first;
//			}
//		}
//	}
//	return false;
//}
void ford() {
	while (bfs()) {
		int minc = INF;
		for (int i = M; i != 1; i = pre[i])
		{
			minc = min(m[pre[i]][i], minc);
		}
		for (int i = M; i != 1; i = pre[i])
		{
			m[pre[i]][i] -= minc;
			m[i][pre[i]] += minc;
		}
		maxf += minc;
	}
}

int main() {
#ifdef __ACM
	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
	//freopen("1.txt", "r", stdin);
#endif
	while (SC2(N, M) != EOF)
	{
		int s, e, c;
		maxf = 0;
		memset(m, 0, sizeof m);
		for (int i = 0; i < N; i++)
		{
			scanf("%d %d %d", &s, &e, &c);
			m[s][e] += c;
		}
		ford();
		printf("%d\n", maxf);
	}
#ifdef __ACM
	int iwannastop;
	scanf("%d", &iwannastop);
	system("pause");
#endif
}
