//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <memory>
//#include "stdio.h"
//
//using namespace std;
//
//typedef long long LL;
//typedef unsigned long long ULL;
//
//class Test
//{
//public:
//	Test(string s)
//	{
//		str = s;
//		cout << "Test create\n";
//	}
//	~Test()
//	{
//		cout << "Test delete:" << str << endl;
//	}
//	string& getStr()
//	{
//		return str;
//	}
//	void setStr(string s)
//	{
//		str = s;
//	}
//	void print()
//	{
//		cout << str << endl;
//	}
//private:
//	string str;
//};
//
//unique_ptr<Test> fun()
//{
//	return unique_ptr<Test>(new Test("789"));
//}
//
//struct Link {
//	int data;
//	struct Link * next = 0;
//	Link(int data) : data(data), next(0) {}
//};
//
//int main()
//{
//	//unique_ptr<Test> ptest(new Test("123"));
//	//unique_ptr<Test> ptest2(new Test("456"));
//	//ptest->print();
//	//ptest2 = std::move(ptest);//不能直接ptest2 = ptest
//	//if (ptest == NULL)cout << "ptest = NULL\n";
//	//Test* p = ptest2.release();
//	//cout << "ptest2.release" << endl;
//	//p->print();
//	//cout << "ptest.reset(p);" << endl;
//	//ptest.reset(p);
//	//ptest->print();
//	//ptest2 = fun(); //这里可以用=，因为使用了移动构造函数
//	//ptest2->print();
//	Link * head = new Link(0);
//	Link * start = head;
//	for (int i = 1; i < 9; i++)
//	{
//		head->next = new Link(i);
//		head = head->next;
//	}
//	head = start;
//	while (head)
//	{
//		cout << head->data << " ";
//		head = head->next;
//	}
//	cout << endl;
//	head = start;
//	Link * p = 0, *q = 0;
//	while (head) {
//		q = head->next;
//		head->next = p;
//		p = head;
//		head = q;
//	}
//	head = p;
//	while (head)
//	{
//		cout << head->data << " " << head->next << " ";
//		head = head->next;
//	}
//	cout << endl << "end" << endl;
//	system("pause");
//}






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
//#define INF 502
//using namespace std;
//#define LL long long
//
//struct Node {
//	int to;
//	int w;
//	Node(int to, int w) :to(to), w(w) {
//
//	}
//};
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int N; // <= 500
//	int M; // raods
//	int C1, C2;
//	int teams[INF];
//	vector<Node> v[INF];
//	int dis[INF];
//	int cnt[INF];
//	int tot[INF];
//	bool vis[INF];
//
//	scanf("%d %d %d %d", &N, &M, &C1, &C2);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", teams + i);
//	}
//	for (int i = 0; i < M; i++)
//	{
//		int c1, c2, l;
//		scanf("%d %d %d", &c1, &c2, &l);
//		v[c1].push_back(Node(c2, l));
//		v[c2].push_back(Node(c1, l));
//	}
//	// dij
//	memset(dis, -1, sizeof(dis));
//	memset(cnt, 0, sizeof(cnt));
//	memset(tot, 0, sizeof(tot));
//	memset(vis, false, sizeof(vis));
//	// important
//	cnt[C1] = 1;
//	int minindex = 0;
//	for (int i = 0; i < v[C1].size(); i++)
//	{
//		dis[v[C1][i].to] = v[C1][i].w;
//	}
//	for (int loop = 0; loop < N; loop++) {
//		for (int i = 0; i < N; i++)
//		{
//			if (!vis[i] && dis[i] != -1 && dis[i] < dis[minindex]) {
//				minindex = i;
//			}
//		}
//		vis[minindex] = true;
//		for (int i = 0; i < N; i++) {
//			if (!vis[i]) {
//				int newdis = dis[minindex] + v[i][minindex].w;
//				if (newdis < dis[i]) {
//					cnt[i] = cnt[minindex];
//					tot[i] = teams[i];
//					dis[i] = newdis;
//				}
//				else if(newdis == dis[i]){
//					cnt[i] += cnt[minindex];
//					tot[i] += teams[i];
//				}
//			}
//		}
//	}
//	cout << dis[C2] << " " << cnt[C2] << " " << tot[C2] << endl;
//#ifdef __ACM
//	system("pause");
//#endif
//}