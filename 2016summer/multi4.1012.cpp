//
//
//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <algorithm>
//#include <string.h>
//using namespace std;
//
//const int maxn = 100005;
//int n;
//int aa[maxn], ans[maxn], c[maxn];    //Ê÷×´Êý×é
//
//int lowbit(int x)
//{
//	return x&(-x);
//}
//
//void update(int t, int value)
//{
//	int i;
//	for (i = t; i <= n; i += lowbit(i))
//	{
//		c[i] += value;
//	}
//}
//
//int getsum(int x)
//{
//	int i;
//	int temp = 0;
//	for (i = x; i >= 1; i -= lowbit(i))
//	{
//		temp += c[i];
//	}
//	return temp;
//}
//
//int main()
//{
//	int i, j, T, t;
//	scanf("%d", &T);
//	for (t = 1; t <= T; t++) {
//		scanf("%d", &n);
//		for (i = 1; i <= n; i++)
//			scanf("%d", &aa[i]);
//		for (i = 1; i <= n; i++)
//		{
//			update(aa[i], 1);
//			ans[aa[i]] += i - getsum(aa[i]);
//		}
//		for (i = 1; i <= n; i++) c[i] = 0;
//		for (i = n; i; i--)
//		{
//			ans[aa[i]] += getsum(aa[i]);
//			update(aa[i], 1);
//		}
//		for (i = 1; i <= n; i++) c[i] = 0;
//		printf("Case #%d: ", t);
//		for (i = 1; i <= n; i++) {
//			printf("%d%c", ans[i], i == n ? '\n' : ' ');
//			ans[i] = 0;
//		}
//	}
//	return 0;
//}
