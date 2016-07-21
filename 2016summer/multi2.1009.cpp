//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int a[110];
//
//int gcd(int a, int b)
//{
//	if (!b) return a;
//	return gcd(b, a%b);
//}
//
//int main()
//{
//	int T, n, m, x, y, i;
//	scanf("%d", &T);
//	while (T--)
//	{
//		scanf("%d%d", &n, &m);
//		for (i = 1; i <= n + 1; i++) a[i] = -1;
//		for (i = 1; i <= m; i++)
//		{
//			scanf("%d%d", &x, &y);
//			a[x] = y;
//		}
//		int k = 0;
//		int sum = 0;
//		for (i = n; i>2; i--)
//		{
//			if (a[i]>-1) k = a[i];
//			a[i] = k;
//			sum += a[i];
//		}
//		if (a[1] == -1) a[1] = 100;
//		sum += a[1];
//		if (a[2] == -1) a[2] = a[1];
//		sum += a[2];
//		int tt = a[1] + a[2];
//		int g = gcd(tt, sum);
//		printf("%d/%d\n", tt / g, sum / g);
//	}
//	return 0;
//}