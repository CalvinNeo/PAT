//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//const int N = 100010;
//char s[N], ans[N], t[5010];
//
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		int n, m, i, j;
//		scanf("%d%d", &n, &m);
//		scanf("%s", s);
//		scanf("%s", t);
//		for (i = 0; i<n; i++) ans[i] = '0';
//		for (i = 0; i<n - m + 1; i++)
//		{
//			for (j = 0; j<m;)
//				if (t[j] == s[i + j]) j++;
//				else if (s[i + j] == t[j + 1] && s[i + j + 1] == t[j]) j += 2;
//				else break;
//				if (j >= m) ans[i] = '1';
//		}
//		ans[n] = 0;
//		puts(ans);
//	}
//	return 0;
//}