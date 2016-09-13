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
//#define INF 0x3f3f3f3f
//#define MAXN 100060
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//
//int T, cas = 0;
//
//inline int check(LL x, LL n) {
//	LL current = (1 + x) * x / 2;
//	LL next = (1 + x) * (2 + x) / 2;
//	if(x )
//	if (current <= n && next > n)
//	{
//		return 0;
//	}
//	else if(next <= n){
//		// x is too small
//		return 1;
//	}
//	else if (current > n) {
//		// x is too big
//		return -1;
//	}
//}
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	SC1(T);
//	while (T--) {
//		cas++;
//		LL n;
//		scanf("%lld", &n);
//		LL l = 1, r = (LL)(sqrtl((n +1) * 2) + 1);
//		while (l < r) {
//			LL mid = (l + r) / 2;
//			int k = check(mid, n);
//			if (k == 0) {
//				l = mid;
//				break;
//			}
//			else if (k == 1) {
//				l = mid + 1;
//			}
//			else if (k == -1) {
//				r = mid;
//			}
//		}
//		l = l * (l + 1) / 2;
//		printf("Case #%d: %lld\n", cas, l);
//	}
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
