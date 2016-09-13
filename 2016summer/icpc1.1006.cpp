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
//#define MAXN 100005
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//
//
//int a[MAXN ];
//int b[MAXN ];
//
//int T, cas = 0;
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	while (~scanf("%d", &T))
//	{
//		while (T--)
//		{
//			int n;
//			SC1(n);
//			LL cnt = 0;
//			bool flag = true;
//			for (int i = 0; i<n; i++)
//			{
//				SC1(a[i]);
//				if (a[i] > 2 * (n - 1)) {
//					flag = false;
//				}
//				if (a[i] == 0) {
//					cnt++;
//				}
//			}
//			for (int i = 0; i < n; i++)
//			{
//				b[i] = n - 1;
//			}
//			LL ans = 0;
//			for (int i = 0; i < n; i++)
//			{
//				ans += b[i];
//				ans -= a[i];
//			}
//			if (ans == 0 && flag && cnt <= 1)
//				puts("T");
//			else 
//				puts("F");
//		}
//	}
//	return 0;
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
//
//
