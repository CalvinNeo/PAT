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

int main() {
#ifdef __ACM
	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
	//freopen("1.txt", "r", stdin);
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
		int xx = 0;
		if (s % k == 0) {
			int av = s / k;
			for (int i = 1; i <= n; i++) {
				if (a[i] < av) {
					xx++;
					a[i + 1] = a[i];
					//int rs = av - a[i];
					//for (int j = i + 1; j <= n; j++) {
					//	xx++;
					//	rs -= a[j];
					//	if (rs < 0) {
					//		i = j;
					//		a[j] = -rs;
					//		break;
					//	}
					//	else if (rs == 0) {
					//		i = j + 1;
					//		break;
					//	}
					//}
				}
				else if (a[i] > av) {
					while (a[i] > av) {
						xx++;
						a[i] -= av;
					}
					if (a[i] < av) {
						xx++;
						a[i + 1] += a[i];
					}
				}
			}
			xx += a[n + 1] / av;
			printf("Case #%d: %d\n", cas, xx);
		}
		else {
			printf("Case #%d: -1\n", cas);
		}
	}
#ifdef __ACM
	int iwannastop;
	scanf("%d", &iwannastop);
	system("pause");
#endif
}


