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
//#define MAXN 1000006
//using namespace std;
//#define LL long long
//
//LL a[MAXN];
//LL sgt[MAXN];
//LL vis[MAXN]; // 用来寻找最小的非负整数
//
//void sgtable(int n) {
//	memset(sgt, 0, sizeof(sgt));
//	sgt[0] = 0;
//	for (int i = 1; i < n; i++)
//	{
//		memset(vis, 0, sizeof(vis));
//		for (int j = 1; j <= i; j++)
//		{
//			vis[sgt[i - j]] = 1;
//		}
//		for (int j = 1; j < i ; j++) {
//			for (int k = 1; k < i - j; k++)
//			{
//				vis[sgt[j] ^ sgt[i - j - k] ^ sgt[k]] = 1;
//			}
//		}
//		for (int j = 0; j < n; j++)
//		{
//			if (!vis[j]) {
//				sgt[i] = j;
//				break;
//			}
//		}
//		printf("%d %d\n", i, sgt[i]);
//	}
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	int T;
//	int n;
//	//sgtable(20);
//	scanf("%d", &T);
//	while (T--) {
//		scanf("%d", &n);
//		bool p_flag; // the first to lose
//		LL xxx = 0;
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%lld", a + i);
//			LL sg = 0;
//			if (a[i] % 8 == 0) {
//				sg = a[i] - 1;
//			}
//			else if (a[i] % 8 == 7) {
//				sg = a[i] + 1;
//			}
//			else {
//				sg = a[i];
//			}
//			xxx ^= sg;
//		}
//		if (xxx == 0) {
//			p_flag = true;
//		}
//		else {
//			p_flag = false;
//		}
//		if (p_flag) {
//			puts("Second player wins.");
//		}
//		else {
//			puts("First player wins.");
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
//
