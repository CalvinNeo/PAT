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
//#define INF 0x3f3f3f3f
//#define MAXN 105
//using namespace std;
//#define LL long long
//
//LL searchto;
//LL a[105];
//struct pq {
//	LL min1;
//	LL min2;
//	int len;
//	pq() {
//		min1 = INF;
//		min2 = INF + 1;
//		len = 0;
//		// ensure min1 < min2
//	}
//	LL pop() {
//		if (min1 < INF) {
//			LL x = min1;
//			min1 = min2;
//			return x;
//		}
//		else {
//			// impossible
//			//cout << a[6747222] << endl;
//		}
//	}
//	void push(LL x) {
//		//if (x < min1) {
//		//	min2 = min1;
//		//	min1 = x;
//		//	searchto = min2;
//		//}
//		//else if (x < min2) {
//		//	min2 = x;
//		//	searchto = min2;
//		//}
//		if (x < min1) {
//			if (x < min2) {
//				if (min1 > min2) min1 = x;
//				else min2 = x;
//			}
//			else min1 = x;
//			len++;
//			len = min(len, 2);
//		}
//		else if (x < min2) {
//			min2 = x;
//			len++;
//			len = min(len, 2);
//		}
//		if (min1 > min2) swap(min1, min2);
//	}
//	bool empty() {
//		return min1 >= INF;
//	}
//	void clear() {
//		min1 = INF;
//		min2 = INF + 1;
//		len = 0;
//	}
//};
//pq Q;
//
//inline LL iscomp(LL n, LL st = 2) {
//	if (n == 1) { return -1; }
//	if (n == 2) { return 0; }
//	for (LL i = st; i * i <= n && i <= searchto; i++)
//	{
//		if (n % i == 0) {
//			return i;
//		}
//	}
//	return 0;
//}
//
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int T;
//	scanf("%d", &T);
//	while (T--) {
//		LL G, L;
//		scanf("%lld %lld", &G, &L);
//
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
