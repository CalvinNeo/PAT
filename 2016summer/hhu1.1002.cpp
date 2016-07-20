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
//#include <numeric>
//
//#define USE_TREE
//
//#define INF 0x3f3f3f3f
//#define MAXN 3000005
//using namespace std;
//#define LL long long
//int phi[MAXN], mindiv[MAXN];
//#ifdef USE_TREE
//LL tree[4 * MAXN];
//#endif
//
//void phigen() {
//	phi[1] = 1;
//	for (int i = 1; i < MAXN; i++)
//	{
//		mindiv[i] = i;
//	}
//	for (int i = 2; i * i < MAXN; i++)
//	{
//		if (mindiv[i] == i) {
//			// prime
//			for (int j = i * i; j < MAXN; j+=i)
//			{
//				mindiv[j] = i;
//			}
//		}
//	}
//	for (int i = 2; i < MAXN; i++)
//	{
//		int mul = i % (mindiv[i] * mindiv[i]);
//		if (mul == 0) {
//			phi[i] = phi[i / mindiv[i]] * (mindiv[i] );
//		}
//		else {
//			phi[i] = phi[i / mindiv[i]] * (mindiv[i] - 1);
//		}
//	}
//}
//
//#ifdef USE_TREE
//int getsum(int root, int fr, int to, int l, int r) {
//	// 计算a[fr..to]之间所有线段的和
//	// 子树root的值是[l, r]区间上的和
//	if (fr <= l && to >= r)
//	{
//		// 包含
//		return tree[root];
//	}
//	else if (fr > r || to < l) {
//		// 不相交
//		return 0;
//	}
//	else {
//		int mid = (l + r) >> 1;
//		return getsum(root << 1, fr, to, l, mid) + getsum((root << 1) + 1, fr, to, mid + 1, r);
//	}
//}
//
//int build(int * a, int fr, int to, int root) {
//	//cout << fr << " " << to << " " << root << endl;
//	if (fr == to) {
//		tree[root] = a[fr];
//		return tree[root];
//	}
//	else {
//		int mid = (fr + to) >> 1;
//		// important 注意<<的优先级
//		int suml = build(a, fr, mid, (root << 1) + 0);
//		int sumr = build(a, mid + 1, to, (root << 1) + 1);
//		tree[root] = suml + sumr;
//	}
//}
//#endif
//
//int test[100];
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	phigen();
//#ifdef USE_TREE
//	//for (int i = 0; i < 100; i++)
//	//{
//	//	test[i] = i;
//	//}
//	memset(tree, 0, sizeof(tree));
//	build(phi, 1, MAXN, 1);
//#endif
//	int st, ed;
//	while (cin >> st) {
//		cin >> ed;
//#ifdef USE_TREE
//		cout << getsum(1, st, ed, 1, MAXN) << endl;
//#else
//		LL s = 0;
//		for (int i = st; i <= ed; i++)
//		{
//			s += phi[i];
//		}
//		cout << s << endl;
//#endif
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
