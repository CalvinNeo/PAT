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
//#include <set>
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
//#define MAXN 10010
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//char s[MAXN];
//int st[MAXN];
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	int T, cas = 0;
//	SC1(T);
//	while (T--) {
//		cas++;
//		memset(s, 0, sizeof(s));
//		memset(st, 0, sizeof(st));
//		scanf("%s", s);
//		int len = strlen(s);
//		int Max = 1;
//		st[s[0]] = 1;
//		for (int i = 1; i < len; i++)
//		{
//			if (st[s[i]] != 1) {
//				st[s[i]] = 1;
//				Max++;
//			}
//		}
//		printf("Case #%d: %d\n", cas, Max);
//	}
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
//
//
