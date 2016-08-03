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
//#define INF 0x3f3f3f3f
//#define MAXN 1000006
//using namespace std;
//#define LL long long
//
//int a[MAXN];
//int tmin[MAXN * 4];
//int tmax[MAXN * 4];
//
//int getmin(int * tree, int root, int fr, int to, int l, int r) {
//	// 计算a[fr..to]之间所有线段的和
//	// 子树root的值是[l, r]区间上的和
//	if (fr <= l && to >= r)
//	{
//		// 包含
//		//printf("min from %d to %d is %d \n", l, r, tree[root]);
//		return tree[root];
//	}
//	else if (fr > r || to < l) {
//		// 不相交
//		// IMPORTANT
//		//printf("min from %d to %d is INF \n", l, r);
//		return INF;
//	}
//	else {
//		int mid = (l + r) >> 1;
//		int min1 = getmin(tree, root * 2 + 0, fr, to, l, mid);
//		int min2 = getmin(tree, root * 2 + 1, fr, to, mid + 1, r);
//		//printf("min from %d to %d is min(%d, %d)=%d \n", l, r, min1, min2, min(min1, min2));
//		return min( min1, min2);
//	}
//}
//int getmax(int * tree, int root, int fr, int to, int l, int r) {
//	// 计算a[fr..to]之间所有线段的和
//	// 子树root的值是[l, r]区间上的和
//	if (fr <= l && to >= r)
//	{
//		// 包含
//		return tree[root];
//	}
//	else if (fr > r || to < l) {
//		// 不相交
//		return -INF;
//	}
//	else {
//		int mid = (l + r) >> 1;
//		return max(getmax(tree, root * 2 + 0, fr, to, l, mid), getmax(tree, root * 2 + 1, fr, to, mid + 1, r));
//	}
//}
//
//int build_min(int * tree, int * a, int fr, int to, int root) {
//	if (fr == to) {
//		tree[root] = a[fr];
//		return tree[root];
//	}
//	else {
//		int mid = (fr + to) >> 1;
//		// important 注意<<的优先级
//		int suml = build_min(tree, a, fr, mid, root * 2 + 0);
//		int sumr = build_min(tree, a, mid + 1, to, root * 2 + 1);
//		//printf("from %d to %d is %d at %d\n", fr, to, min(suml, sumr), root);
//		tree[root] = min(suml, sumr);
//		// 不能丢掉啊
//		return tree[root];
//	}
//}
//int build_max(int * tree, int * a, int fr, int to, int root) {
//	if (fr == to) {
//		tree[root] = a[fr];
//		return tree[root];
//	}
//	else {
//		int mid = (fr + to) >> 1;
//		// important 注意<<的优先级
//		int suml = build_max(tree, a, fr, mid, (root << 1) + 0);
//		int sumr = build_max(tree, a, mid + 1, to, (root << 1) + 1);
//		tree[root] = max(suml, sumr);
//		return tree[root];
//	}
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int n, k;
//	while (scanf("%d %d", &n, &k)!=EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &a[i]);
//		}
//		memset(tmin, 0, sizeof(tmin));
//		memset(tmax, 0, sizeof(tmax));
//		build_max(tmax, a, 0, n - 1, 1);
//		build_min(tmin, a, 0, n - 1, 1);
//		//for (int i = 0; i < n - k; i++)
//		//{
//		//	//printf("%d %d is %d\n----------------------------\n",i, i + k - 1, getmin(tmin, 1, i, i + k - 1, 0, n - 1));
//		//	break;
//		//}
//		printf("%d", getmin(tmin, 1, 0, k - 1, 0, n - 1));
//		for (int i = 1; i <= n - k; i++)
//		{
//			printf(" %d", getmin(tmin, 1, i, i + k - 1, 0, n - 1));
//		}
//		printf("\n%d", getmax(tmax, 1, 0, k - 1, 0, n - 1));
//		for (int i = 1; i <= n - k; i++)
//		{
//			printf(" %d", getmax(tmax, 1, i, i + k - 1, 0, n - 1));
//		}
//		printf("\n");
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
//
