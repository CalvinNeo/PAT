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
//#define INF 0x3f3f3f3f
//#define BUYAOMOHA 505
//using namespace std;
//#define LL long long
//
//void addonesecond() {
//	int a = 0;
//	for (int i = 0; i < BUYAOMOHA; i++)
//	{
//		a++;
//	}
//}
//
//
//struct Trie {
//	string s;
//	vector<Trie> v;
//};
//
//string str;
//
//bool cmp(const Trie &a, const Trie &b) {
//	if (a.v.size() && b.v.size() == 0)
//		return true;
//	if (a.v.size() == 0 && b.v.size())
//		return false;
//	return a.s.compare(b.s)<0;
//}
//
//void print(Trie &t, int offset) {
//	for (int i = 0; i<offset; i++)
//		putchar(' ');
//	cout << t.s << endl;
//	sort(t.v.begin(), t.v.end(), cmp);
//	for (int i = 0; i<t.v.size(); i++) {
//		print(t.v[i], offset + 4);
//	}
//}
//
//void insert(Trie &t, string s) {
//	int pos = 0;
//	int p = s.find("/", pos);
//	if (p != string::npos) {
//		string w = s.substr(pos, p - pos);
//		int i = 0;
//		for (; i<t.v.size(); i++) {
//			if (w.compare(t.v[i].s) == 0 && t.v[i].v.size()) {
//				break;
//			}
//		}
//		if (i<t.v.size()) {
//			insert(t.v[i], s.substr(p + 1));
//		}
//		else {
//			Trie n;
//			n.s = w;
//			t.v.push_back(n);
//			insert(*(t.v).rbegin(), s.substr(p + 1));
//		}
//	}
//	else {
//		int i = 0;
//		for (; i<t.v.size(); i++) {
//			if (s.compare(t.v[i].s) == 0 && t.v[i].v.size() == 0) {
//				break;
//			}
//		}
//		if (i >= t.v.size()) {
//			Trie n;
//			n.s = s;
//			t.v.push_back(n);
//		}
//	}
//}
//
//void free(Trie t) {
//	for (int i = 0; i<t.v.size(); i++) {
//		free(t.v[i]);
//	}
//	t.v.clear();
//	t.s.clear();
//}
//
//
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	int flag = 1;
//	int cas = 0;
//	while (flag) {
//		flag = 0;
//		Trie cnt;
//		while (getline(cin, str)) {
//			flag = 1;
//			if (str.compare("0") == 0)
//				break;
//			insert(cnt, str);
//		}
//		if (flag) {
//			printf("Case %d:\n", ++cas);
//			sort(cnt.v.begin(), cnt.v.end(), cmp);
//			for (int i = 0; i<cnt.v.size(); i++) {
//				print(cnt.v[i], 0);
//			}
//			free(cnt);
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
