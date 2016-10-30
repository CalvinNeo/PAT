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
#include <set>


#define INF 0x3f3f3f3f
#define MAXN 10010
using namespace std;
#define LL long long

#define SC1(X) scanf("%d", &X)
#define SC2(X, Y) scanf("%d %d", &X, &Y)

int a[100100];

//fail at
//100
//25 25
//6 9 155 6 28 8 19 6 3 6 30 32 18 20 13 75 41 33 26 30 64 17 43 29 33
//Case #1: 34

int main() {
#ifdef __ACM
	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
	//freopen("ccpc2016hangzhou.1001.test.dat", "r", stdin);
	//freopen("ccpc2016hangzhou.1001.me.out", "w+", stdout);
#endif
	int T, cas = 0;
	SC1(T);
	while (T--) {
		cas++;
		int n, k;
		SC2(n, k);
		LL s = 0;
		memset(a, 0, sizeof a);
		for (int i = 1; i <= n; i++)
		{
			SC1(a[i]);
			s += 1ll * a[i];
		}
		// 操作次数
		int xx = 0;
		if (s % k == 0) {
			int av = s / k; // 平均
			for (int i = 1; i <= n; i++) {
				if (a[i] < av) {
					int rs = av - a[i]; // 还需要多少人
					for (int j = i + 1; j <= n; j++) {
						xx++; // 合并需要一次操作
						rs -= a[j];
						if (rs < 0) {
							// 人超
							xx ++; // 切掉多的，作为新的a[i]
							// xx ++; // 
							i = j + 1;
							a[i] += -rs; // 多的加到后面
							break;
						}
						else if (rs == 0) {
							// 人数正好
							i = j + 1;
							break;
						}
					}
				}
				else if (a[i] > av) {
					// 人数超了
					// 先切掉够平均数的
					while (a[i] > av) {
						xx++;
						a[i] -= av;
					}
					// 如果多余加到后面
					if (a[i] < av) {
						xx++;
						a[i + 1] += a[i];
					}
				}
			}
			// 如果最后还有没切完的
			if (av != 0) {
				xx += (a[n + 1] / av > 1 ? a[n + 1] / av - 1 : 0);
			}
			printf("Case #%d: %d\n", cas, xx);
		}
		else {
			printf("Case #%d: -1\n", cas);
		}
	}
#ifdef __ACM
	//int iwannastop;
	//scanf("%d", &iwannastop);
	//system("pause");
#endif
}


