#include <iostream> 
#include <fstream>
#include <vector>
#include <queue>
#include <cstring>
#include <string>
#include <algorithm>
#include <stack>
#include <functional>
#include "stdlib.h" 
#include "time.h"
#include <set>
#include <map>
#include <queue>
#include <string.h>
#include <numeric>

#define INF 0x3f3f3f3f
#define MAXN 256
using namespace std;
#define LL long long

#define SC1(X) scanf("%d", &X)
#define SC2(X, Y) scanf("%d %d", &X, &Y)


int main() {
#ifdef __ACM
	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
	//freopen("1.txt", "r", stdin);
#endif
	//while (true)
	//{
		string s;
		cin >> s;
		bool exist[256];
		int max_len = 1;
		exist[s[0]] = true;
		int cur_len = 1;
		if (s == "") return 0;
		memset(exist, 0, sizeof exist);
		for (int i = 1; i < s.size(); i++)
		{
			if (!exist[s[i]]) {
				exist[s[i]] = true;
				cur_len++;
			}
			else {
				if (cur_len > max_len) {
					max_len = cur_len;
				}
				memset(exist, 0, sizeof exist);
				exist[s[i]] = true;
				cur_len = 1;
			}
		}
		printf("%d\n", max_len);
	//}
#ifdef __ACM
	int iwannastop;
	scanf("%d", &iwannastop);
	system("pause");
#endif
}
