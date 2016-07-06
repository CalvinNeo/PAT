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
//string spell[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	string s;
//	cin >> s;
//	int x = accumulate(s.begin(), s.end(), 0) - s.size() * '0';
//	char chs[100];
//	memset(chs, 0, sizeof(chs));
//	// important
//	// there is no itoa function in linux
//	sprintf(chs, "%d", x);
//	char * k = chs;
//	cout << spell[*k - '0'];
//	while (*(++k) != '\0') {
//		cout << " " << spell[*k - '0'];
//	}
//	cout << endl;
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
