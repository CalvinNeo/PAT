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
//#define ULL unsigned long long
//#define LD long double
//typedef pair<int, int> pii;
//
//LL l, r;
//LL ans = 0;
//int T;
//int n, m;
//
//char coo[44][44];
//bool vis[44][44];
//
//int dirx[] = { 0, 1};
//int diry[] = { 1, 0 };
//
//void bfs(int sx, int sy) {
//	memset(vis, 0, sizeof vis);
//	vis[sx][sy] = true;
//	for (int i = 0; i < sizeof(dirx); i++)
//	{
//		int nx = sx + dirx[i];
//		int ny = sy + diry[i];
//		if (!vis[nx][ny]) {
//			if (coo[nx][ny] == 'C') {
//
//			}
//			else {
//
//			}
//		}
//	}
//}
//
//void nop() {
//
//}
//
//bool around(int & x, int &  y) {
//	if (x > 0 && x < m) {
//		if (coo[x - 1][y] == 'C') {
//			x--;
//			return true;
//		}
//	}
//	if (y > 0 && y < n) {
//		if (coo[x][y - 1] == 'C') {
//			y--;
//			return true;
//		}
//	}
//	if (y + 1 < n) {
//		if (coo[x][y + 1] == 'C') {
//			y++;
//			return true;
//		}
//	}
//	if (x + 1 < m) {
//		if (coo[x + 1][y] == 'C') {
//			x++;
//			return true;
//		}
//	}
//	return false;
//}
//string cache;
//
//int main() {
//	while (scanf("%d%d", &m, &n) != 0) {
//		int ax1 = 999999, ax2 = 999999, ay1 = 999999, ay2 = 999999, ad = 999999;
//		if (n == 0) {
//			return 0;
//		}
//		for (int i = 0; i < m; i++)
//		{
//			cin >> cache;
//			strcpy(coo[i], cache.c_str());
//		}
//		for (int x1 = 0; x1 < m; x1++)
//		{
//			for (int y1 = 0; y1 < n; y1++)
//			{
//				if (coo[x1][y1] == 'H') {
//					for (int x2 = 0; x2 < m; x2++)
//					{
//						for (int y2 = 0; y2 < n; y2++)
//						{
//							if (coo[x2][y2] == 'C') {
//								int dis = abs(x1 - x2) + abs(y1 - y2);
//								if (dis < ad) {
//									ax1 = x1, ax2 = x2, ay1 = y1, ay2 = y2, ad = dis;
//								}
//								else if (dis == ad && x1 < ax1) {
//									ax1 = x1, ax2 = x2, ay1 = y1, ay2 = y2, ad = dis;
//								}
//								else if (dis == ad && x1 == ax1 && y1 < ay1) {
//									ax1 = x1, ax2 = x2, ay1 = y1, ay2 = y2, ad = dis;
//								}
//								else if (dis == ad && x1 == ax1 && y1 == ay1 && x2 < ax2) {
//									ax1 = x1, ax2 = x2, ay1 = y1, ay2 = y2, ad = dis;
//								}
//								else if (dis == ad && x1 == ax1 && y1 == ay1 && x2 == ax2 && y2 < ay2) {
//									ax1 = x1, ax2 = x2, ay1 = y1, ay2 = y2, ad = dis;
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	ANS:
//		printf("%d %d %d %d\n", ax1, ay1, ax2, ay2);
//		nop();
//	}
//	return 0;
//}