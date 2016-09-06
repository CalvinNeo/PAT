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
//#define MAXN 2010
//using namespace std;
//#define LL long long
//
//#define SC1(X) scanf("%d", &X)
//#define SC2(X, Y) scanf("%d %d", &X, &Y)
//
//int T, cas = 0, n;
//char s[MAXN];
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//	//freopen("1.txt", "r", stdin);
//#endif
//	scanf("%d", &T);
//	while(T--)
//	{
//		cas++;
//		scanf("%s", s); 
//		n = strlen(s);
//		int ans = n;
//		for (int i = 0; i<n; ++i)
//		{
//			for (int j = i + 1; j < n; ++j)
//			{
//				if (s[j] == s[i]) {
//					ans = min(ans, j - i);
//				}
//			}
//		}
//		if (ans == n)ans = -1;
//		printf("Case #%d: %d\n", cas, ans);
//	}
//#ifdef __ACM
//	int iwannastop;
//	scanf("%d", &iwannastop);
//	system("pause");
//#endif
//}
