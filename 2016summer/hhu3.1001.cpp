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
//#include <numeric>
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
//#define INF 0x3f3f3f3f
//#define MAXN 1006
//#define MAXHASH 20000
//using namespace std;
//#define LL long long
//
//int fa[MAXN];
//void initfa(int N) {
//	memset(fa, 0, sizeof(fa));
//	for (int i = 1; i <= N; i++)
//	{
//		fa[i] = i;
//	}
//}
//int getfa(int a) {
//	while (fa[a] != a) {
//		a = fa[a];
//	}
//	return a;
//}
//void joinfa(int a, int b) {
//	int ffa = getfa(a), ffb = getfa(b);
//	if (ffa != ffb) {
//		//fa[a] = ffb;
//		fa[ffa] = ffb;
//	}
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int N, M;
//	while (scanf("%d", &N) != EOF && N != 0) {
//		scanf("%d", &M);
//		initfa(N);
//		while (M--) {
//			int i, j;
//			scanf("%d %d", &i, &j);
//			joinfa(i, j);
//		}
//		int ans = 0;
//		//sort(fa, fa + N);
//		//for (int i = 0; i < N - 1; i++)
//		//{
//		//	if (fa[i + 1] != fa[i]) {
//		//		ans++;
//		//	}
//		//}
//		for (int i = 1; i <= N; i++)
//		{
//			if (fa[i] == i) {
//				ans++;
//			}
//		}
//		printf("%d\n", ans - 1);
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
//
