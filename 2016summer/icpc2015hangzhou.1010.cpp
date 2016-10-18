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
//#include <cctype>
//#include <cmath>
//
//#define INF 0x3f3f3f3f
//#define MAX_RESULT 999999
//#define MAXN 40
//#define MOD 1000000000
//using namespace std;
//#define LL long long
//#define ULL unsigned long long
//#define LD long double
//typedef pair<int, int> pii;
//
//LL l, r;
//LL ans = 0;
//int T;
//int n, m;
//
//struct manl {
//	int k;
//	int g;
//	manl(int k, int g) : k(k), g(g) {
//		
//	}
//	bool operator<(const manl & m) const {
//		return this->g < m.g;
//	}
//	bool operator==(const manl & m) const {
//		return this->g == m.g;
//	}
//};
//struct manm {
//	int k;
//	int g;
//	manm(int k, int g) : k(k), g(g) {
//
//	}
//	bool operator<(const manm & m) const {
//		return this->g > m.g;
//	}
//	bool operator==(const manm & m) const {
//		return this->g == m.g;
//	}
//};
//
//int main() {
//	while (scanf("%d", &n) != EOF) {
//		if (n == 0)return 0;
//		set<manl> sl;
//		set<manm> sm;
//		sl.clear();
//		sm.clear();
//		sl.insert(manl(1, MOD));
//		sm.insert(manm(1, MOD));
//		for (int i = 0; i < n; i++)
//		{
//			int k, g;
//			scanf("%d%d", &k, &g);
//			manl newmanl = manl(k, g); // 从低到高
//			manm newmanm = manm(k, g); // 从高到低
//			set<manl>::iterator uman = sl.lower_bound(newmanl);
//			set<manm>::iterator lman = sm.lower_bound(newmanm);
//			if (uman == sl.end()) {
//				printf("%d %d\n", newmanl.k, lman->k);
//			}
//			else if (lman == sm.end()) {
//				printf("%d %d\n", newmanl.k, uman->k);
//			}
//			else {
//				if (abs(uman->g - newmanl.g) < abs(lman->g - newmanl.g)) {
//					printf("%d %d\n", newmanl.k, uman->k);
//				}
//				else{
//					printf("%d %d\n", newmanl.k, lman->k);
//				}
//			}
//			sl.insert(newmanl);
//			sm.insert(newmanm);
//		}
//	}
//	return 0;
//}