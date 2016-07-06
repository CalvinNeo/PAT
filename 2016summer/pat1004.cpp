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
//#define MAXN 500
//#define INF 0x3f3f3f3f
//using namespace std;
//#define LL long long
//
//vector<int> tree[103];
//int deepson[103];
//struct Layer {
//	int id;
//	int layer;
//	Layer() :id(0), layer(0){
//
//	}
//	Layer(int id, int layer) : id(id), layer(layer) {
//
//	}
//};
//
//template<class T>
//struct Q {
//	static const int max_size = 105;
//	// max_size - 1 items
//	T pool[max_size];
//	int fptr, bptr;
//	Q() {
//		fptr = 0;
//		bptr = 0;
//	}
//	T front() {
//		return pool[fptr];
//	}
//	void pop() {
//		if ((fptr % max_size) == (bptr % max_size)) {
//			// 空队列
//			//printf("empty q\n");
//		}
//		else {
//			fptr++;
//		}
//	}
//	void push(const T & x) {
//		if ((fptr % max_size) == ((bptr + 1) % max_size)) {
//			// 满队列
//			//printf("full q\n");
//		}
//		else
//		{
//			pool[bptr % max_size] = x;
//			bptr++;
//		}
//	}
//	bool empty() {
//		return fptr == bptr;
//	}
//	void peek() {
//		for (int i = 0; i < max_size; i++)
//		{
//			printf("%d ", *reinterpret_cast<int*>(pool+i));
//		}
//		printf("\n");
//	}
//};
//
//void testq() {
//	Q<int> q;
//	for (int i = 0; i < 107; i++)
//	{
//		q.push(i);
//	}
//	
//	for (int i = 0; i < 107; i++)
//	{
//		printf("%d ", q.front());
//		q.pop();
//	}
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int N, M;
//	scanf("%d%d", &N, &M);
//	for (int i = 0; i < M; i++)
//	{
//		int id, k;
//		scanf("%d%d", &id, &k);
//		for (int j = 0; j < k; j++)
//		{
//			int son;
//			scanf("%d", &son);
//			tree[id].push_back(son);
//		}
//	}
//	memset(deepson, 0, sizeof(deepson));
//	// bfs
//	Q<Layer> to;
//	int max_deep = 0;
//	to.push(Layer(1, 0));
//	while (!to.empty()) {
//		Layer cur = to.front();
//		to.pop();
//		if (tree[cur.id].size() == 0) {
//			deepson[cur.layer]++;
//		}
//		for (int i = 0; i < tree[cur.id].size(); i++)
//		{
//			to.push(Layer(tree[cur.id][i], cur.layer + 1));
//			max_deep = max(max_deep, cur.layer + 1);
//		}
//	}
//	for (int i = 0; i < max_deep; i++)
//	{
//		printf("%d ", deepson[i]);
//	}
//	printf("%d\n", deepson[max_deep]);
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
