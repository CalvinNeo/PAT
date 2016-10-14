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
//#include <numeric>
//#include <cctype>
//#include <cmath>
//
//#define INF 0x3f3f3f3f
//#define MAX_RESULT 999999
//#define MAXN 40
//using namespace std;
//#define LL long long
//#define LD long double
//typedef pair<int, int> pii;
//
//int T, cas = 0;
//int N, M;
//int cost[MAXN][MAXN];
//bool del[MAXN];
//int dis[MAXN];
//bool vis[MAXN];
//
//int dij(int disable) {
//	memset(del, 0, sizeof del);
//	memset(vis, 0, sizeof vis);
//	del[disable] = true;
//	for (int i = 1; i <= N; i++)
//	{
//		dis[i] = INF;
//	}
//	dis[1] = 0;
//	vis[disable] = true;
//	for (int i = 1; i <= N - 1; i++)
//	{
//		int mark = -1, mindis = INF;
//		for (int j = 1; j <= N; j++)
//		{
//			if (!del[j] && !vis[j] && dis[j] < mindis) {
//				mindis = dis[j];
//				mark = j;
//			}
//		}
//		if (mark == -1) {
//			return dis[N];
//		}
//		vis[mark] = 1;
//		for (int j = 1; j <= N; j++)
//		{
//			if (!vis[j] && !del[j]) {
//				dis[j] = min(dis[j], dis[mark] + cost[mark][j]);
//			}
//		}
//	}
//	return dis[N];
//}
//
//int main() {
//	while (scanf("%d", &N) != EOF) {
//		if (N == 0)
//			return 0;
//		scanf("%d", &M);
//		for (int i = 0; i <= N; i++)
//		{
//			for (int j = 0; j <= N; j++)
//			{
//				cost[i][j] = INF;
//			}
//		}
//		for (int i = 0; i < M; i++)
//		{
//			int a, b, c;
//			scanf("%d%d%d", &a, &b, &c);
//			cost[a][b] = c;
//			cost[b][a] = c;
//		}
//		int m = 0;
//		for (int i = 2; i < N; i++)
//		{
//			int re = dij(i);
//			//printf("---%d\n", re);
//			m = max(m, re);
//		}
//		if (m == INF) {
//			puts("Inf");
//		}
//		else {
//			printf("%d\n", m);
//		}
//	}
//}
//
///*
//4 5
//1 2 3
//1 3 7
//1 4 50
//2 3 4
//3 4 2
//3 2
//1 2 30
//2 3 10
//0 0
//*/