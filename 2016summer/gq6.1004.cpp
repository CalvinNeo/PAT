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
#include <numeric>
#include <cctype>
#include <cmath>

#define INF 0x3f3f3f3f
#define MAXN 210
using namespace std;
#define LL long long
#define LD long double
int T, cas = 0;
int R, C, B;

pair<int, int> coco[MAXN];
vector<int> badx, bady;
vector<int> mx, my;
int m[MAXN * 2][MAXN * 2];
queue<pair<int, int>> Q;

int main() {
#ifdef __ACM
	//ifstream fin("1.txt");    streambuf *cinbackup;      cinbackup = cin.rdbuf(fin.rdbuf());
#endif
	scanf("%d", &T);
	while (T--) {
		cas++;
		printf("Case #%d:\n", cas);
		badx.clear(); bady.clear(); memset(coco, 0, sizeof coco); memset(m, 0, sizeof m);
		while (!Q.empty()) {
			Q.pop();
		}
		mx.clear(); my.clear();
		scanf("%d%d", &R, &C);
		scanf("%d", &B);
		for (int i = 0; i < B; i++)
		{
			scanf("%d%d", &coco[i].first, &coco[i].second);
			badx.push_back(coco[i].first);
			bady.push_back(coco[i].second);
		}
		sort(badx.begin(), badx.end()); sort(bady.begin(), bady.end());
		for (int i = 0; i < B; i++)
		{
			int x = coco[i].first, y = coco[i].second;
			int ix = lower_bound(badx.begin(), badx.end(), x) - badx.begin();
			int iy = lower_bound(bady.begin(), bady.end(), y) - bady.begin();
			m[ix][iy] = 1;
		}
		Q.push(make_pair(1, 1));
	}
#ifdef __ACM
	system("pause");
#endif
}