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
//#include <cmath>
//
//inline int fastread() {
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
//#define MAXN 30010
//#define MOD 1000000007
//using namespace std;
//#define LL long long
//
//int pay[MAXN];
//LL ti[MAXN];
//int is_used[MAXN];
//
//struct Shop {
//	int index;
//	int profit;
//	int time;
//};
//Shop shop[210];
//
//LL max(LL x, LL y) {
//	return x > y ? x : y;
//}
//
//bool cmps(const Shop & s1, const Shop & s2) {
//	return s1.time < s2.time;
//}
//
//vector<int> factory[210];
//vector<int> neg;
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	int T, cas = 0;
//	LL N, M, L;
//	scanf("%d", &T);
//	while (T--) {
//		bool flag = false;
//		cas++;
//		memset(pay, 0, sizeof(pay));
//		memset(ti, 0, sizeof(ti));
//		memset(shop, 0, sizeof(shop));
//		memset(is_used, 0, sizeof(is_used));
//		for (int i = 0; i < 210; i++)
//		{
//			factory[i].clear();
//		}
//		scanf("%lld%lld%lld", &N, &M, &L);
//		for (int i = 1; i <= N; i++)
//		{
//			scanf("%d%lld", &pay[i], &ti[i]);
//		}
//		for (int i = 1; i <= M; i++)
//		{
//			int k;
//			shop[i].index = i;
//			scanf("%d%d", &shop[i].profit, &k);
//			for (int j = 1; j <= k; j++)
//			{
//				int plantid;
//				scanf("%d", &plantid);
//				shop[i].time = max( shop[i].time, ti[plantid] );
//				factory[i].push_back(plantid);
//			}
//		}
//		sort(shop + 1, shop + M + 1, cmps);
//		LL c = 0, t = 0, p = 0;
//		for (int i = 1; i <= M + 1; i++)
//		{
//			int id = shop[i].index;
//			LL curc = 0;
//			for (int j = 0; j < factory[id].size(); j++)
//			{
//				if (is_used[factory[id][j]] == 0) {
//					curc += pay[factory[id][j]];
//					is_used[factory[id][j]] = 1;
//				}
//			}
//			if (shop[i].profit - curc <= 0) {
//				neg.push_back(id);
//			}
//			else {
//				for (int j = 0; j < factory[id].size(); j++)
//				{
//					is_used[factory[id][j]] = 1;
//				}
//			}
//			c += curc;
//			t += shop[i].time;
//			p += shop[i].profit;
//			if (p - c >= L) {
//				printf("Case #%d: %lld %lld\n", cas, t, p - c);
//				flag = true;
//				break;
//			}
//		}
//		if (!flag) {
//			printf("Case #%d: impossible\n", cas, t, p - c);
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
//
