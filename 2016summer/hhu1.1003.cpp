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
//
//#define INF 0x3f3f3f3f
//#define MAXN 505
//using namespace std;
//#define LL long long
//
//LL exgcd(LL a, LL b, LL & x, LL & y ) {
//	LL d;
//	if (b == 0) {
//		x = 1; y = 0;
//		return a;
//	}
//	else {
//		LL ans = exgcd(b, a % b, y, x);
//		y -= x * (a / b);
//		return ans;
//	}
//}
//LL gcd(LL a, LL b) {
//	return b == 0 ? a : gcd(b, a % b);
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	LL x, y, m, n, L;
//	while (cin >> x) {
//		cin >> y >> m >> n >> L;
//		LL k, p, d;
//
//		d = exgcd((m - n), L, k, p);
//		// solve equalation (m - n)k + Ly == d if d | (y - x) where d = gcd((m - n), L)
//		// print Impossible if d ~| (y - x)
//		if ((y - x) % d != 0) {
//			cout << "Impossible" << endl;
//		}
//		else {
//			LL mul = (y - x) / d;
//			LL div = L / d;
//			// Important Not BELOW
//			//k *= L;
//			k = mul * k;
//			k = (k % L + L) % L;
//			cout << k << endl;
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
