////#include <iostream> 
////#include <fstream>
////#include <vector>
////#include <queue>
////#include <cstring>
////#include <string>
////#include <algorithm>
////#include <stack>
////#include <functional>
////#include "stdlib.h" 
////#include "time.h"
////#include <set>
////#include <map>
////#include <queue>
////#include <string.h>
////#include <numeric>
////
////#define INF 0x3f3f3f3f
////#define MAX2 30
////#define MAX3 19
////#define MAX5 13
////#define MAX7 11
////#define MAXN MAX2 * MAX3 * MAX5 * MAX7
////using namespace std;
////#define LL long long
////
////#define SC1(X) scanf("%d", &X)
////#define SC2(X, Y) scanf("%d %d", &X, &Y)
////
////int T, cas = 0;
////
//////LL ans[MAXN][MAXN][MAXN][MAXN];
////LL ans[MAXN];
////
////void make_table() {
////	LL kkk = 0;
////	for (int a = 0; a < MAX2; a++)
////	{
////		for (int b = 0; b < MAX3; b++)
////		{
////			for (int c = 0; c < MAX5; c++)
////			{
////				for (int d = 0; d < MAX7; d++)
////				{
////					kkk = (LL)powl(2, a) * (LL)powl(3, b) * (LL)powl(5, c) * (LL)powl(7, d);
////					ans[a * MAX3 * MAX5 * MAX7 + b * MAX5 * MAX7 + c * MAX7 + d] = kkk;
////					if (kkk > 2e9) {
////						break;
////					}
////					//cout << ans[a * MAXN * MAXN * MAXN + b * MAXN * MAXN + c * MAXN + d] << endl;
////				}
////				if (kkk > 2e9) {
////					break;
////				}
////			}
////			if (kkk > 2e9) {
////				break;
////			}
////		}
////		if (kkk > 2e9) {
////			break;
////		}
////	}
////}
////
////int main() {
////#ifdef __ACM
////	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
////	//freopen("1.txt", "r", stdin);
////#endif
////	memset(ans, 0, sizeof ans);
////	make_table();
////	sort(ans, ans + MAXN);
////	freopen("fuck.txt", "w", stdout);
////	for (int i = 0; i < MAXN; i++)
////	{
////		printf("%lld, ", ans[i]);
////	}
////
////	cout << endl;
////	SC1(T);
////	int n;
////	while (T--) {
////		SC1(n);
////		for (int i = 0; i < MAXN ; i++)
////		{
////			if (ans[i] >= n) {
////				cout << ans[i] << endl;
////				break;
////			}
////		}
////	}
////#ifdef __ACM
////	int iwannastop;
////	scanf("%d", &iwannastop);
////	system("pause");
////#endif
////}
////
////
//
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
//using namespace std;
//
//typedef long long ll;
//const int MAX = 1e9;
//ll a[10000];
//
//int main()
//{
//	int p2 = 1, p3 = 1, p5 = 1, p7 = 1;
//	int T, n = 1, tot = 1;
//	a[1] = 1;
//	while (n<MAX) {
//		ll t2 = a[p2] * 2;
//		ll t3 = a[p3] * 3;
//		ll t5 = a[p5] * 5;
//		ll t7 = a[p7] * 7;
//		int x = min(min(t2, t3), min(t5, t7));
//		a[++tot] = n = x;
//		if (x == t2) p2++;
//		if (x == t3) p3++;
//		if (x == t5) p5++;
//		if (x == t7) p7++;
//	}
//	scanf("%d", &T);
//	while (T--) {
//		scanf("%d", &n);
//		int p = lower_bound(a + 1, a + 1 + tot, n) - a;
//		printf("%lld\n", a[p]);
//	}
//	return 0;
//}
//
