//#include <iostream> 
//#include <fstream>
//#include <vector>
//#include <queue>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#include <stack>
//#include <functional>
//#include <set>
//#include "stdlib.h" 
//#include "time.h"
//#include <set>
//#include <map>
//#include <queue>
//#include <numeric>
//
//inline int fastread() {
//	char c;
//	int ret = 0;
//	int sgn = 1;
//	do { c = getchar(); } while ((c < '0' || c > '9') && c != '-');
//	if (c == '-') sgn = -1; else ret = c - '0';
//	while ((c = getchar()) >= '0' && c <= '9') ret = ret * 10 + (c - '0');
//	return sgn * ret;
//}
//
//#define INF 0x3f3f3f3f
//#define MAXN 100006
//#define MAXHASH 100
//using namespace std;
//#define LL long long
//
//int a[MAXN];
////#define SIMPLE
//#ifdef SIMPLE
//set<int> st;
//vector<int> ans1;
//vector<int> ans2;
//void build_tree(int * tree, int root, int max_n) {
//	if (2 * root + 1 <= max_n) {
//		build_tree(tree, 2 * root + 1, max_n);
//	}
//	if (2 * root + 2 <= max_n) {
//		build_tree(tree, 2 * root + 2, max_n);
//	}
//	tree[root] = 1;
//}
//int getsum(int * tree, int root) {
//	int ans = 0;
//	if (tree[2 * root + 1] == 1) {
//		ans += getsum(tree, 2 * root + 1);
//	}
//	if (tree[2 * root + 2] == 1) {
//		ans += getsum(tree, 2 * root + 2);
//	}
//	return ans + 1;
//}
//int test_n(int n) {
//	memset(a, 0, sizeof(a));
//	st.clear();
//	build_tree(a, 0, n - 1);
//	for (int i = 0; i <= n - 1; i++)
//	{
//		//printf("node %d sum %d\n", i, getsum(a, i));
//		st.insert(getsum(a, i));
//	}
//	return st.size();
//}
//#endif // SIMPLE
//
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	LL N; 
//#ifdef SIMPLE
//	for (N = 2; N < MAXHASH; N++)
//#else
//	while (cin >> N)
//#endif
//	{
//		LL ans;
//		LL l = log2(N); // 2^l <= N < 2^(l + 1)
//		// 当前二叉树共有l + 1层
//		// 注意是右移 l - 1不是 l
//		LL full = (LL)((LL)1 << l) - 1; //前full个node构成l深度的满二叉树
//		LL full_bottom = (LL)((LL)1 << l); //最下面一层的最大容量
//		LL half_bottom = (LL)((LL)1 << l - 1); // 最下面一层(l + 1)的一半
//		LL rest = N - full; 
//		//if (rest > half_bottom)
//		//	rest = full_bottom - rest;
//		LL cnt = l + 1; // 二叉树的总共层数
//		if (rest== full_bottom) {
//			// 满二叉树
//			ans = l + 1;
//		}
//		else {
//			// 计算不满二叉树部分的情况数
//			if (rest >= half_bottom)
//			{
//				// 根节点左儿子是满二叉树
//				ans = l;
//			}
//			else {
//				// 根节点右儿子是满二叉树
//				ans = l - 1;
//			}
//			// 如果该节点在一个满二叉树中, 那么相当于整个树被向下压了一层
//			while (!(rest & 1) && cnt--) {
//				// rest变为父节点
//				rest >>= 1;
//			}
//			ans = ans + cnt - 1;
//		}
//
//#ifdef SIMPLE
//		ans1.push_back(ans);
//#else
//		cout << ans << endl;
//#endif
//	}
//#ifdef SIMPLE
//	for (int i = 2; i < MAXHASH; i++)
//	{
//		ans2.push_back(test_n(i));
//		//printf("i = %lld: %lld\n", N, ans);
//		//printf("i = %d: %d\n", i, test_n(i - 1));
//	}
//	for (int i = 2; i < MAXHASH; i++)
//	{
//		if (ans1[i - 2] == ans2[i - 2])
//			printf("  ");
//		else
//			printf("->");
//		printf("%d %d %d\n", i, ans1[i - 2], ans2[i - 2]);
//
//	}
//#endif // SIMPLE
//#ifdef __ACM
//	system("pause");
//#endif
//}
