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
//#define MAXN 1010
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//
//int dp[MAXN][MAXN];
//int value[MAXN];
//int volume[MAXN];
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	int T;
//	SC1(T);
//	while (T--) {
//		int N, V;
//		SC2(N, V);
//		memset(dp, 0, sizeof(dp));
//		// when dp must start from 1 because there is dp[i - 1]
//		for (int i = 1; i <= N; i++)
//		{
//			SC1(value[i]);
//		}
//		for (int i = 1; i <= N; i++)
//		{
//			SC1(volume[i]);
//		}
//		for (int i = 1; i <= N; i++)
//		{
//			for (int j = 0; j <= V; j++)
//			{
//				if (j - volume[i] >= 0)
//					dp[i][j] = max(dp[i - 1][j]
//						, dp[i - 1][j - volume[i]] + value[i]);
//				else
//					dp[i][j] = dp[i - 1][j];
//			}
//		}
//		printf("%d\n", dp[N][V]);
//	}
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
//
//
