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
//inline int fastread() {
//	char c;
//	int ret = 0;
//	int sgn = 1;
//	do { c = getchar(); } while ((c < '0' || c > '9') && c != '-');
//	if (c == '-') sgn = -1; else ret = c - '0';
//	while ((c = getchar()) >= '0' && c <= '9') ret = ret * 10 + (c - '0');
//	return sgn * ret;
//}
//
//#define INF 0x3f3f3f3f
//#define MAXN 100006
//using namespace std;
//#define LL long long
//
//vector<int> m[MAXN];
//int vis[MAXN];
//int cnt;
//int nedge;
//
//void dfs(int s) {
//	vis[s] = 1;
//	for (int i = 0; i < m[s].size(); i++)
//	{
//		if (!vis[m[s][i]]) {
//			cnt++;
//			vis[m[s][i]] = 1;
//			dfs(m[s][i]);
//		}
//	}
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int i, j;
//	int st;
//	while (scanf("%d%d", &i, &j) != EOF) {
//		st = i;
//		for (int i = 0; i < MAXN; i++)
//		{
//			m[i].clear();
//		}
//		cnt = 0;
//		nedge = 0;
//		while (i != 0 && j != 0) {
//			m[i].push_back(j);
//			m[j].push_back(i);
//			scanf("%d%d", &i, &j);
//			nedge++;
//		}
//		memset(vis, 0, sizeof(vis));
//		dfs(st);
//		//printf("--- %d %d\n", nedge, cnt);
//		if (cnt == nedge) {
//			printf("Yes\n");
//		}
//		else {
//			printf("No\n");
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
//


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
#define MAXN 100006
using namespace std;
#define LL long long

int a[MAXN];

void builddj() {
	for (int i = 0; i < N; i++)
	{

	}
}
int father(int x) {

}
void join() {

}

int main() {
#ifdef __ACM
	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
#endif
	int i, j;
	int st;
	while (scanf("%d%d", &i, &j) != EOF) {
		if (cnt == nedge) {
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}
	}
#ifdef __ACM
	system("pause");
#endif
}


