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
#include <numeric>

#define INF 0x3f3f3f3f
#define MAXN 105
using namespace std;
#define LL long long

LL searchto;
LL a[105];
struct pq {
	LL min1;
	LL min2;
	int len;
	pq() {
		min1 = INF;
		min2 = INF + 1;
		len = 0;
		// ensure min1 < min2
	}
	LL pop() {
		if (min1 < INF) {
			LL x = min1;
			min1 = min2;
			return x;
		}
		else{
			// impossible
			//cout << a[6747222] << endl;
		}
	}
	void push(LL x) {
		//if (x < min1) {
		//	min2 = min1;
		//	min1 = x;
		//	searchto = min2;
		//}
		//else if (x < min2) {
		//	min2 = x;
		//	searchto = min2;
		//}
		if (x < min1) {
			if (x < min2) {
				if (min1 > min2) min1 = x;
				else min2 = x;
			}
			else min1 = x;
			len++;
			len = min(len, 2);
		}
		else if (x < min2) { 
			min2 = x;
			len++;
			len = min(len, 2);
		}
		if (min1 > min2) swap(min1, min2);
	}
	bool empty() {
		return min1 >= INF;
	}
	void clear() {
		min1 = INF;
		min2 = INF + 1;
		len = 0;
	}
};
pq Q;

inline LL iscomp(LL n, LL st = 2) {
	if (n == 1) { return -1; }
	if (n == 2) { return 0; }
	for (LL i = st; i * i <= n && i  <= searchto; i++)
	{
		if (n % i == 0) {
			return i;
		}
	}
	return 0;
}


int main() {
#ifdef __ACM
	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
#endif
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		scanf("%d", &n);
		Q.clear();
		for (int i = 1; i <= n; i++)
		{
			LL x;
			scanf("%I64d", &x);

			searchto = INF;
			LL r = iscomp(x);
			if (r == 0) {
				// 质数直接进去
				Q.push(x);
			}
			else if (r == -1) {
				// n == 1
			}
			else {
				// 合数
				/*
				In: 3 1 1 4
				Out 4
				*/
				bool flag = false;
				LL y = 0;
				for (LL j = 2; j * j  <= x/r ; j++) {
					if ((x / r) % j == 0) {
						flag = true;
						y = j;
						break;
					}
				}
				if (flag) {
					//两个因子
					Q.push(r);
					Q.push(y);
				}
				else {
					//只有一个因子
					Q.push(r);
					if (x / r != 1) {
						Q.push(x / r);
					}
				}
			}
		}

		LL ans = 1;

		if (Q.empty()) {
			printf("-1\n");
		}
		else {
			ans *= Q.pop();
			if (!Q.empty() && ans != 1) {
				ans *= Q.pop();
				printf("%I64d\n", ans);
			}
			else {
				printf("-1\n");
			}
		}
	}
#ifdef __ACM
	system("pause");
#endif
}

