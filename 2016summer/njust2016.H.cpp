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
//#include "stdio.h"
//#include <set>
//#include <map>
//#include <numeric>
//
//#define INF 10005
//using namespace std;
//#define LL long long
//
//int h[INF], w[INF];
//
//LL max(LL x, int y) {
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n == 0)
//		{
//			puts("1");
//			continue;
//		}
//		int i;
//		LL max_h = -1;
//		for (i = 1; i <= n; i++)
//		{
//			cin >> h[i] >> w[i];
//			max_h = max(max_h, h[i]);
//		}
//		max_h++;
//		LL ans = 0;
//		for (i = 1; i <= n; i++)
//			ans += (max_h - h[i])*w[i];
//		cout << ans << "\n";
//	}
//	return 0;
//}