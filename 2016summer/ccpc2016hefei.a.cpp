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
//const int N = 2020;
//int P[N][N], Q[N][N];
//bool vis[N];
//bool to[N][N];
//int n;
//
//bool dfs(int m[][N], int s) {
//	vis[s] = true;
//	for (int i = 1; i <= n; i++)
//	{
//		if (m[s][i] &&!vis[i]) {
//			vis[i] = true;
//			to[s][i] = true;
//			int ans = dfs(m, i); // 是否满足性质
//			if (ans == false) {
//				return false;
//			}
//			for (int j = 1; j <= n; j++)
//			{
//				if (to[i][j]) {
//					if (m[s][j] && !m[j][s]) {
//
//					}
//					else {
//						return false;
//					}
//				}
//			}
//		}
//	}
//	return true;
//}
//
//
//int checkall() {
//	for (int i = 1; i <= n; i++)
//	{
//		if (!vis[i]) {
//			return i;
//		}
//	}
//	return 0;
//}
//
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		char s[N];
//		scanf("%d", &n);
//		for (int i = 1; i <= n; i++)
//		{
//			scanf("%s", s + 1);
//			for (int j = 1; j <= n; j++)
//			{
//				P[i][j] = Q[i][j] = 0;
//				if (s[j] == 'P'){
//					P[i][j] = 1;
//				}
//				else if(s[j] == 'Q'){
//					Q[i][j] = 1;
//				}
//			}
//		}
//		bool ans = true;
//		bool fuck;
//		int st;
//		memset(vis, 0, sizeof vis);
//		memset(to, 0, sizeof to);
//		while ((st = checkall()) != 0) {
//			// 这边被短路了
//			bool d = dfs(P, st);
//			ans = ans && d;
//		}
//		memset(vis, 0, sizeof vis);
//		memset(to, 0, sizeof to);
//		while ((st = checkall()) != 0) {
//			bool d = dfs(Q, st);
//			ans = ans && d;
//		}
//		if (ans) {
//			puts("T");
//		}
//		else {
//			puts("N");
//		}
//	}
//	return 0;
//#ifdef __ACM
//	system("pause");
//#endif
//}