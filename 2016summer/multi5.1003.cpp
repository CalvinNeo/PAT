//#include <iostream>
//#include<stdio.h>
//#include<string>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//
//int a[1000005];
//
//int main() {
//	int n;
//	while (~scanf("%d", &n)) {
//		memset(a, 0, sizeof(a));
//		for (int i = 0; i<n; i++)
//			scanf("%d", &a[i]);
//
//		long long int sum = 0, cnt = 0;
//
//		for (int i = n - 1; i >= 0; i--) {
//			sum += a[i];
//			if (sum >= 0) {
//				sum = 0;
//				cnt++;
//			}
//		}
//		printf("%d\n", cnt);
//	}
//
//	return 0;
//}