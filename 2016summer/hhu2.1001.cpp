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
//#define MAXN 105
//using namespace std;
//#define LL long long
//
//struct Node {
//	struct Node * left = NULL, * right = NULL;
//	char v;
//};
//// 错误的
//
////string preo(string x) {
////	string rt = "";
////	stack<int> vec;
////	vec.push(0);
////	while (vec.size() != 0) {
////		int i = vec.top();
////		vec.pop();
////		rt += x[i];
////		if (2 * i + 1 < x.size()) {
////			vec.push(2 * i + 1);
////		}
////		if (2 * i + 2 < x.size()) {
////			vec.push(2 * i + 2);
////		}
////	}
////	return rt;
////}
////
////string mido(string x) {
////	string rt = "";
////	stack<int> vec;
////	vec.push(0);
////	while (vec.size() != 0) {
////		int i = vec.top();
////		vec.pop();
////		if (2 * i + 1 < x.size()) {
////			rt += x[2 * i + 1];
////		}
////		vec.push(i);
////		if (2 * i + 2 < x.size()) {
////			vec.push(2 * i + 2);
////		}
////	}
////	return rt;
////}
//
//string preo(string x) {
//	string rt = "";
//	stack<int> vec;
//	vec.push(0);
//	while (vec.size() != 0) {
//		int i = vec.top();
//		vec.pop();
//		rt += x[i];
//		if (2 * i + 1 < x.size()) {
//			vec.push(2 * i + 1);
//		}
//		if (2 * i + 2 < x.size()) {
//			vec.push(2 * i + 2);
//		}
//	}
//	return rt;
//}
//
//string mido(string x) {
//	string rt = "";
//	stack<int> vec;
//	vec.push(0);
//	int vis[15];
//	memset(vis, 0, sizeof(vis));
//	while (vec.size() != 0) {
//		int i = vec.top();
//		//printf("从栈中取出元素i x[%d] = %c\n", i, x[i]);
//		vec.pop();
//		int j = i;
//		//while (true)
//		//{
//		//	j = 2 * j + 1;
//		//	if (j < x.size()) {
//		//		if (2 * j + 1 < x.size()) {
//		//			//printf("i的左儿子x[%d] = %c有左儿子x[%d] = %c\n", j, x[j], 2 * j + 1, x[2 * j + 1]);
//		//			vec.push(2 * j + 1);
//		//			printf("push x[%d] = %c\n", 2 * j + 1, x[2 * j + 1]);
//		//			// 顺序
//		//			if (2 * j + 2 < x.size()) {
//		//				vec.push(2 * j + 2);
//		//			}
//		//			vec.push(j);
//		//			printf("push x[%d] = %c\n", j, x[j]);
//		//		}
//		//		else {
//		//			rt += x[j];
//		//			cout << "rt " << rt << endl;
//		//		}
//		//	}
//		//	else {
//		//		break;
//		//	}
//		//}
//		//vec.push(i);
//		//if (2 * i + 2 < x.size()) {
//		//	vec.push(2 * i + 2);
//		//}
//
//		 //每次从栈中弹出来的节点必定是移已经遍历过左节点的，所以这一点要区分
//		while (j < x.size()) {
//			if (2 * j + 1 < x.size() && !vis[2 * j + 1]) {
//				if (2 * j + 2 < x.size()) {
//					vec.push(2 * j + 2);
//					//printf("push %d\n", 2 * j + 2);
//				}
//				vec.push(j);
//				//printf("push %d\n", j);
//				j = j * 2 + 1;
//			}
//			else {
//				//printf("add %c\n", x[j]);
//				vis[j] = 1;
//				rt += x[j];
//				break;
//			}
//		}
//
//
//	}
//	return rt;
//}
//
//string xpre, xmid, ymid, ypre;
//
//Node t1[21];
//Node t2[21];
//
//void clear(Node * t, int n) {
//	for (int i = 0; i < n; i++)
//	{
//		t[i].left = NULL;
//		t[i].right = NULL;
//	}
//}
//
//void buildtree(string x, Node * tree) {
//	Node * cur = tree;
//	cur->v = x[0];
//	for (int i = 1; i < x.size(); i++)
//	{
//		char ch = x[i];
//		Node * root = tree;
//		while (root != NULL)
//		{
//			if (ch > root->v) {
//				if (root->right == NULL) {
//					cur++;
//					cur->left = NULL;
//					cur->right = NULL;
//					cur->v = ch;
//					root->right = cur;
//					break;
//				}
//				else {
//					root = root->right;
//				}
//			}
//			else {
//				if (root->left == NULL) {
//					cur++;
//					cur->left = NULL;
//					cur->right = NULL;
//					cur->v = ch;
//					root->left = cur;
//					break;
//				}else {
//					root = root->left;
//				}
//			}
//		}
//	}
//}
//
//string preorder(Node * tree) {
//	string rt;
//	stack <Node *> vec;
//	// important
//	vec.push(tree);
//	while (!vec.empty()) {
//		Node * t = vec.top();
//		vec.pop();
//		if (t->left != NULL) {
//			vec.push(t->left);
//		}
//		if (t->right != NULL) {
//			vec.push(t->right);
//		}
//		rt += t->v;
//	}
//	return rt;
//}
//
//string midorder(Node * tree) {
//	string rt;
//	stack<Node *> vec;
//	Node * root = NULL;
//	//对于任一节点P，
//	//	1）若P的左孩子不为空，则将P入栈并将P的左孩子置为当前节点，然后再对当前节点进行相同的处理；
//	//	2）若P的左孩子为空，则输出P节点，而后将P的右孩子置为当前节点，看其是否为空；
//	//	3）若不为空，则重复1）和2）的操作；
//	//	4）若为空，则执行出栈操作，输出栈顶节点，并将出栈的节点的右孩子置为当前节点，看起是否为空，重复3）和4）的操作；
//	//	5）直到当前节点P为NULL并且栈为空，则遍历结束。
//	root = tree;
//	while (!vec.empty() || root!=NULL) {
//		if (root != NULL) {
//			vec.push(root);
//			root = root->left;
//		}
//		else {
//			root = vec.top();
//			rt += root->v;
//			vec.pop();
//			root = root -> right;
//		}
//		//if (root == NULL) {
//		//	root = vec.top();
//		//	vec.pop();
//		//}
//		//while (root->left != NULL) {
//		//	vec.push(root);
//		//}
//		//rt += root->v;
//		//root = root->right;
//		//while (root==NULL && !vec.empty())
//		//{
//		//	root = vec.top();
//		//	vec.pop();
//		//}
//	}
//	return rt;
//}
//
//void midorder_r(Node * root, string & rt) {
//	stack<Node *> s;
//	while (root != NULL || !s.empty()) {
//		if (root != NULL) {
//			s.push(root);
//			root = root->left;
//		}
//		else {
//			root = s.top();
//			rt += root->v; 
//			s.pop();
//			root = root->right;
//		}
//	}
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int T;
//	scanf("%d", &T);
//	string x, y;
//	while (T--) {
//		cin >> x;
//		clear(t1, 21);
//		buildtree(x, t1);
//		xpre = preorder(t1);
//		xmid = "";
//		midorder_r(t1, xmid);
//		while (cin >> y) {
//			if (y == "0") {
//				break;
//			}
//			else {
//				clear(t2, 21);
//				buildtree(y, t2); 
//				ypre = preorder(t2);
//				ymid = "";
//				midorder_r(t2, ymid);
//				if (xpre.size() == ypre.size()) {
//					bool yes = true;
//					for (int i = 0; i < xpre.size(); i++)
//					{
//						if (xpre[i] != ypre[i]) {
//							yes = false;
//						}
//					}
//					for (int i = 0; i < xpre.size(); i++)
//					{
//						if (xmid[i] != ymid[i]) {
//							yes = false;
//						}
//					}
//					if (yes) {
//						cout << "YES" << endl;
//					}
//					else {
//						cout << "NO" << endl;
//					}
//				}
//				else {
//					cout << "NO" << endl;
//				}
//			}
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}



#include <iostream> 
#include <fstream>
#include <vector>
#include <queue>
#include <cstring>
#include <string>
#include <algorithm>
#include <stack>
#include "stdlib.h" 
#include "time.h"
#include <set>
#include <map>

#define INF 8193

using namespace std;

int readcache[INF];
int op1[INF];
int op2[INF];
int len1, len2;

void read(int * cache, int * lenA) {
	string t;
	cin >> t;
	for (int i = 0; i < t.size(); i++)
	{
		cache[i] = t[i] - '0';
	}
	*lenA = t.size();
}

void build_btree(int * from, int * tree, int lenA) {
	for (int i = 0; i < INF; i++)
	{
		tree[i] = -1;
	}
	tree[1] = from[0];
	for (int i = 1; i < lenA; i++)
	{
		int ins = from[i];
		int current = 1;
		while (true)
		{
			if (tree[current] == -1)
			{
				tree[current] = ins;
				break;
			}
			else if (ins < tree[current]) {
				current = current * 2;
			}
			else if (ins > tree[current]) {
				current = current * 2 + 1;
			}
			else {
				break;
			}
		}
	}
}

string preo(int * x, int N) {
	string rt = "";
	stack<int> vec;
	vec.push(1);
	while (vec.size() != 0) {
		int root = vec.top();
		vec.pop();
		rt += x[root] + '0';
		// 这边不是2 * root + 0 < N
		if (x[2 * root + 0] != -1) {
			vec.push(2 * root + 0);
		}
		if (x[2 * root + 1] != -1) {
			vec.push(2 * root + 1);
		}
	}
	return rt;
}

string mido(int * x, int N) {
	string rt;
	stack<int> vec;
	int root = 1;
	while (!vec.empty() || x[root] != -1) {
		if (x[root] != -1) {
			vec.push(root);
			root = 2 * root + 0;
		}
		else {
			root = vec.top();
			rt += x[root] + '0';
			vec.pop();
			root = 2 * root + 1;
		}
	}
	return rt;
}

int main() {
	int T;
	while (cin >> T && T) {
		fill(op1, op1 + INF, -1);
		fill(op2, op2 + INF, -1);
		read(readcache, &len1);
		build_btree(readcache, op1, len1);
		for (int i = 0; i < T; i++)
		{
			read(readcache, &len2);
			build_btree(readcache, op2, len2);
			bool able = true;
			string px, py, mx, my;
			px = preo(op1, len1);
			mx = mido(op1, len1);
			py = preo(op2, len2);
			my = mido(op2, len2);
			if (len1 != len2) {
				able = false;
			}
			else {
				for (int i = 0; i < len1; i++)
				{
					if (px[i] != py[i] || mx[i] != my[i]) {
						able = false;
						break;
					}
				}
			}
			if (able)
				cout << "YES";
			else
				cout << "NO";
			cout << endl;
		}
	}

}
