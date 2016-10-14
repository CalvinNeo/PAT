//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//
//int a[20];
//
//bool alright(int a, int b, int c)
//{
//	return b + c > a;
//}
//
//double area(double a, double b, double c)
//{
//	double p = (a + b + c) / 2;
//	return sqrt(p * (p - a) * (p - b) * (p - c));
//}
//
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF, n) {
//		for (int i = 1; i <= n; i++)
//			scanf("%d", &a[i]);
//		sort(a + 1, a + 1 + n);
//		double ans = 0;
//		for (int i = n; i != 0;) {
//			if (i <= 2) break;
//			if (alright(a[i], a[i - 1], a[i - 2])) {
//				ans += area(a[i], a[i - 1], a[i - 2]);
//				i -= 3;
//			}
//			else {
//				i--;
//			}
//		}
//		printf("%.2f\n", ans);
//	}
//	return 0;
//}