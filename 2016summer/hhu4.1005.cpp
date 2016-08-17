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

inline int fastread() {
	
	char c;
	int ret = 0;
	int sgn = 1;
	do { c = getchar(); } while ((c < '0' || c > '9') && c != '-');
	if (c == '-') sgn = -1; else ret = c - '0';
	while ((c = getchar()) >= '0' && c <= '9') ret = ret * 10 + (c - '0');
	return sgn * ret;
}


#define INF 0x3f3f3f3f
#define MAXN 510
using namespace std;
#define LL long long

#define SC1(X) scanf("%d", &X)
#define SC2(X, Y) scanf("%d %d", &X, &Y)

int a[MAXN];
int b[MAXN];
int dp[MAXN][MAXN];

int main() {
#ifdef __ACM
	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
	//freopen("1.txt", "r", stdin);
#endif
	int T;
	SC1(T);
	while (T--) {
		int Ma, Mb;
		SC1(Ma);
		for (int i = 1; i <= Ma; i++)
		{
			SC1(a[i]);
		}
		SC1(Mb);
		for (int i = 1; i <= Mb; i++)
		{
			SC1(b[i]);
		}
		for (int i = 1; i <= Ma; i++)
		{
			for (int j = 1; j <= Mb; j++)
			{
				if (a[i] == b[j]) {
					dp[i][j] = dp[i][j - 1] + 1;
				}
				else {
					dp[i][j] = dp[i - 1][j - 1];
				}
			}
		}
		printf("%d\n", dp[Ma][Mb]);
	}
#ifdef __ACM
	int iwannastop;
	scanf("%d", &iwannastop);
	system("pause");
#endif
}


