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
//#define MAXN 210
//#define MOD 1000000000
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//typedef pair<int, int> pii;
//
//double ans = 0;
//int T;
//int n, m, l, r;
//
//double cnt[210];
//double pre[210];
//
//inline int wrap(int x) {
//	return ((((1 + x) % n) + n - 1) % n) + 1;
//}
//
//int main() {
//	while (scanf("%d%d%d%d", &n, &m, &l, &r) != EOF) {
//		if (n == 0) return 0;
//		memset(pre, 0, sizeof pre);
//		pre[1] = 1.0;
//		for (int i = 0; i < m; i++)
//		{
//			int w, p;
//			scanf("%d", &w);
//			memset(cnt, 0, sizeof cnt);
//
//			for (int j = 1; j <= n; j++)
//			{
//				// 1 cause TLE
//
//				//p = wrap(j + w);
//				//cnt[p] += 0.5 * pre[j];
//				//p = wrap(j - w);
//				//cnt[p] += 0.5 * pre[j];
//
//				// 2 AC
//				p = j + w%n;
//				if (p>n)
//				{
//					p -= n;
//				}
//				cnt[p] += 0.5*pre[j];
//				p = j - w%n;
//				if (p <= 0)
//				{
//					p += n;
//				}
//				cnt[p] += 0.5*pre[j];
//			}
//
//			for (int j = 1; j <= n; j++)
//			{
//				pre[j] = cnt[j];
//			}
//		}
//		ans = 0.0;
//		for (int i = l; i <= r; i++)
//		{
//			ans += pre[i];
//		}
//
//		printf("%.4f\n", ans);
//	}
//	return 0;
//}
//
//
//
//
