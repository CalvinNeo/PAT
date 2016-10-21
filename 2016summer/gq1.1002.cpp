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
//#include <cctype>
//
//#define INF 0x3f3f3f3f
//#define MAXN 1010
//using namespace std;
//#define LL long long
//#define LD long double
//int T;
//string code;
//char buf[MAXN];
//const double eps = 1e-9;
//
//struct Var {
//	string val;
//	char type;
//	Var() {
//
//	}
//	Var(string val, char type) :val(val), type(type) {
//	}
//};
////// deprecated
////union Cont {
////	Var var;
////	char op;
////};
////struct Item_U {
////	char type;
////	Cont cont;
////	Item_U() {
////		cont.op = 0;
////	}
////	Item_U(char type) {
////		type = type;
////		cont.op = 0;
////	}
////};
//struct Item {
//	char type;
//	Var var;
//	char op;
//	Item(char type) : type(type){
//		
//	}
//};
//
//vector<Item> toks;
//vector<Item> ops;
//map<string, Var> slots;
//vector<Var> frame;
//int prio[255];
//
//inline bool ischar(char c) {
//	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
//}
//inline bool isnum(char c) {
//	return ( (c >= '0' && c <= '9') || c == '.' );
//}
//
//string Cut(const string & s, int & i) {	
//	char ch = s[i];
//	int start = i;
//	if (ischar(ch)) {
//		for (; i < s.size() && (ischar(s[i]) || isnum(s[i])); i++)
//		{
//			// dummy
//		}
//		return s.substr(start, i - start );
//	}
//	else if (isnum(ch)) {
//		for (; i < s.size() && (isnum(s[i]) || s[i] == '.'); i++)
//		{
//			// dummy
//		}
//		return s.substr(start, i - start );
//	}
//	else if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=' || ch == '(' || ch == ')'){
//		i++;
//		return string(1, ch);
//	}
//	else if (ch == ' ') {
//		for (; i < s.size() && s[i] == ' '; i++)
//		{
//			// dummy
//		}
//		return "";
//	}
//	else {
//		i++;
//		return string(1, ch);
//	}
//}
//
//Item genvar(char vartype, string cur) {
//	Item item = Item('v');
//	item.var = Var(cur, vartype);
//	return item;
//}
//
//Item genop(char op) {
//	Item item = Item('o');
//	item.op = op;
//	return item;
//}
//
//
//void parse_line(const string & s) {
//	int i = 0;
//	bool ary2 = false;
//	toks.clear();
//	ops.clear();
//	while (i < s.size()) {
//		string cur = Cut(s, i);
//		if (cur == "") {
//
//		}
//		else if (cur == ",") {
//
//		}
//		else if (cur == ";") {
//
//		}
//		else if (cur == "double" || cur == "int") {
//			Item it = genop(cur[0]);
//			toks.push_back(it);
//			ary2 = false;
//		}
//		else if (cur == "+" || cur == "-" || cur == "*" || cur == "/" || cur == "=" || cur == "(" || cur == ")"  || cur == "print") {
//			Item it = genop(cur[0]);
//			if (cur == "-" && ary2 == false) {
//				it = genop('!');
//				// IMPORTANT
//				cur = '!';
//			}
//			else if (cur == "+" && ary2 == false) {
//				it = genop('@');
//				// IMPORTANT
//				cur = '@';
//			}
//			// print = p, integer = i, double = d
//			if (cur == ")") {
//				while (!ops.empty())
//				{
//					Item old = ops[ops.size() - 1];
//					if (old.op != '(') {
//						ops.pop_back();
//						toks.push_back(old);
//					}
//					else {
//						ops.pop_back();
//						break;
//					}
//				}
//				//toks.push_back(it);
//			}
//			else if(cur == "(") {
//				ops.push_back(it);
//			}
//			else if (ops.size() == 0 || ops[ops.size() - 1].op == '(' /* IMPORTANT POP ALL ( OR WILL CAUSE ERROR WHEN 2 * (1 + 1) + 3 */ || prio[cur[0]] >= prio[ops[ops.size() - 1].op] ) {
//				ops.push_back(it);
//			}
//			else {
//				while (!ops.empty())
//				{
//					Item old = ops[ops.size() - 1];
//					if (old.op == '(') {
//						// do not pop
//						break;
//					}
//					else if (prio[cur[0]] <= prio[old.op] ) {
//						ops.pop_back();
//						toks.push_back(old);
//					}
//					//else if (cur[0] == '=' && old.op == '=') {
//					//	// not happen
//					//	ops.pop_back();
//					//	toks.push_back(old);
//					//}
//					else {
//						break;
//					}
//				}
//				ops.push_back(it);
//			}
//			// IMPORTANT
//			if (cur == ")") {
//			}
//			else {
//				ary2 = false;
//			}
//		}
//		else if (isnum(cur[0])) {
//			bool isdouble = false;
//			ary2 = true;
//			for (int j = 0; j < cur.size(); j++)
//			{
//				if (cur[j] == '.') {
//					isdouble = true;
//				}
//			}
//			if (isdouble) {
//				Item it = genvar('d', cur);
//				toks.push_back(it);
//			}
//			else {
//				Item it = genvar('i', cur);
//				toks.push_back(it);
//			}
//		}
//		else if(ischar(cur[0])) {
//			ary2 = true;
//			Item it = genvar('v', cur);
//			toks.push_back(it);
//		}
//		else {
//
//		}
//	}
//	while (!ops.empty()) {
//		Item old = ops[ops.size() - 1];
//		ops.pop_back();
//		toks.push_back(old);
//	}
//}
//
//LL parse_int(string si) {
//	if (si == "")
//		return 0;
//	LL i;
//	sscanf(si.c_str(), "%lld", &i);
//	return i;
//}
//
//LD parse_double(string si) {
//	if (si == "")
//		return 0;
//	LD i;
//	sscanf(si.c_str(), "%LF", &i);
//	return i;
//}
//
//string str_int(LL si) {
//	memset(buf, 0, sizeof buf);
//	sprintf(buf, "%lld", si);
//	return string(buf);
//}
//
//string str_double(LD si) {
//	memset(buf, 0, sizeof buf);
//	// no you can not truncate because it will lose accuracy
//	sprintf(buf, "%.30f", si);
//	return string(buf);
//	//return std::to_string((long double)si);
//}
//
//string trim_double(string strd) {
//	if (strd == "")
//		return "0.000000";
//	LD x = parse_double(strd);
//	memset(buf, 0, sizeof buf);
//	sprintf(buf, "%.6f", x);
//	return string(buf);
//}
//
//bool eval_line() {
//	frame.clear();
//	for (int i = 0; i < toks.size(); i++)
//	{
//		Item it = toks[i];
//		if (it.type == 'v') {
//			if (it.var.type == 'v') {
//				frame.push_back(Var(it.var.val, 'v'));
//			}
//			else if (it.var.type == 'd') {
//				frame.push_back(Var(it.var.val, 'd'));
//			}
//			else if (it.var.type == 'i') {
//				frame.push_back(Var(it.var.val, 'i'));
//			}
//		}
//		else if (it.type == 'o') { // operator
//			if (it.op == 'p') { // print
//				for (int j = 0; j < frame.size(); j++)
//				{
//					Var jt = frame[j]; 
//					if (jt.type == 'v') {
//						jt = slots[jt.val];
//					}
//					if (jt.type == 'd') {
//						printf("%s\n", trim_double(jt.val).c_str());
//					}
//					else {
//						printf("%s\n", (jt.val == "" ? "0" : jt.val.c_str()) );
//					}
//				}
//			}
//			else if (it.op == 'd') { // define double
//				for (int j = i + 1; j < toks.size(); j++)
//				{
//					Var jt = toks[j].var;
//					slots[jt.val] = Var("0.0", 'd');
//				}
//			}
//			else if (it.op == 'i') { // define integer
//				for (int j = i + 1; j < toks.size(); j++)
//				{
//					Var jt = toks[j].var;
//					slots[jt.val] = Var("0", 'i');
//				}
//			}
//			else if (it.op == '(') {
//
//			}
//			else if (it.op == ')') {
//
//			}
//			else if (it.op == '+') {
//				Var op2 = frame[frame.size() - 1];
//				frame.pop_back();
//				Var op1 = frame[frame.size() - 1];
//				frame.pop_back();
//				if (op1.type == 'v') {
//					op1 = slots[op1.val];
//					if (op1.val == "") { op1.val = "0"; op1.type = 'i'; };
//				}
//				if (op2.type == 'v') {
//					op2 = slots[op2.val];
//					if (op2.val == "") { op2.val = "0"; op2.type = 'i'; };
//				}
//				if (op1.type == 'i' && op2.type == 'i') {
//					LL ans = parse_int(op1.val) + parse_int(op2.val);
//					Var newop = Var(str_int(ans), 'i');
//					frame.push_back(newop);
//				}
//				else{
//					LD ans = 0;
//					if (op1.type == 'i') {
//						ans += parse_int(op1.val);
//					}
//					else {
//						ans += parse_double(op1.val);
//					}
//					if (op2.type == 'i') {
//						ans += parse_int(op2.val);
//					}
//					else {
//						ans += parse_double(op2.val);
//					}
//					Var newop = Var(str_double(ans), 'd');
//					frame.push_back(newop);
//				}
//			}
//			else if (it.op == '-') {
//				Var op2 = frame[frame.size() - 1];
//				frame.pop_back();
//				Var op1 = frame[frame.size() - 1];
//				frame.pop_back();
//				if (op1.type == 'v') {
//					op1 = slots[op1.val];
//					if (op1.val == "") { op1.val = "0"; op1.type = 'i'; };
//				}
//				if (op2.type == 'v') {
//					op2 = slots[op2.val];
//					if (op2.val == "") { op2.val = "0"; op2.type = 'i'; };
//				}
//				if (op1.type == 'i' && op2.type == 'i') {
//					LL ans = parse_int(op1.val) - parse_int(op2.val);
//					Var newop = Var(str_int(ans), 'i');
//					frame.push_back(newop);
//				}
//				else {
//					LD ans = 0;
//					if (op1.type == 'i') {
//						ans -= parse_int(op1.val);
//					}
//					else {
//						ans -= parse_double(op1.val);
//					}
//					if (op2.type == 'i') {
//						ans -= parse_int(op2.val);
//					}
//					else {
//						ans -= parse_double(op2.val);
//					}
//					Var newop = Var(str_double(ans), 'd');
//					frame.push_back(newop);
//				}
//			}
//			else if (it.op == '!') {
//				Var op1 = frame[frame.size() - 1];
//				frame.pop_back();
//				if (op1.type == 'v') {
//					op1 = slots[op1.val];
//					if (op1.val == "") { op1.val = "0"; op1.type = 'i'; };
//				}
//				if (op1.type == 'i' ) {
//					LL ans  = -parse_int(op1.val);
//					Var newop = Var(str_int(ans), 'i');
//					frame.push_back(newop);
//				}
//				else {
//					LD ans = -parse_double(op1.val);
//					Var newop = Var(str_double(ans), 'd');
//					frame.push_back(newop);
//				}
//			}
//			else if (it.op == '@') {
//				Var op1 = frame[frame.size() - 1];
//				frame.pop_back();
//				if (op1.type == 'v') {
//					op1 = slots[op1.val];
//					if (op1.val == "") { op1.val = "0"; op1.type = 'i'; };
//				}
//				frame.push_back(op1);
//			}
//			else if (it.op == '*') {
//				Var op2 = frame[frame.size() - 1];
//				frame.pop_back();
//				Var op1 = frame[frame.size() - 1];
//				frame.pop_back();
//				if (op1.type == 'v') {
//					op1 = slots[op1.val];
//					if (op1.val == "") { op1.val = "0"; op1.type = 'i'; };
//				}
//				if (op2.type == 'v') {
//					op2 = slots[op2.val];
//					if (op2.val == "") { op2.val = "0"; op2.type = 'i'; };
//				}
//				if (op1.type == 'i' && op2.type == 'i') {
//					LL ans = parse_int(op1.val) * parse_int(op2.val);
//					Var newop = Var(str_int(ans), 'i');
//					frame.push_back(newop);
//				}
//				else {
//					// IMPORTANT
//					LD ans = 1.0;
//					if (op1.type == 'i') {
//						ans *= parse_int(op1.val);
//					}
//					else {
//						ans *= parse_double(op1.val);
//					}
//					if (op2.type == 'i') {
//						ans *= parse_int(op2.val);
//					}
//					else {
//						ans *= parse_double(op2.val);
//					}
//					Var newop = Var(str_double(ans), 'd');
//					frame.push_back(newop);
//				}
//			}
//			else if (it.op == '/') {
//				Var op2 = frame[frame.size() - 1];
//				frame.pop_back();
//				Var op1 = frame[frame.size() - 1];
//				frame.pop_back();
//				if (op1.type == 'v') {
//					op1 = slots[op1.val];
//					if (op1.val == "") { op1.val = "0"; op1.type = 'i'; };
//				}
//				if (op2.type == 'v') {
//					op2 = slots[op2.val];
//					if (op2.val == "") { op2.val = "0"; op2.type = 'i'; };
//				}
//				if (op1.type == 'i' && op2.type == 'i') {
//					if (parse_int(op2.val) == 0) {
//						printf("divided by ZERO\n");
//						return false;
//					}
//					else {
//						LL ans = parse_int(op1.val) / parse_int(op2.val);
//						Var newop = Var(str_int(ans), 'i');
//						frame.push_back(newop);
//					}
//				}
//				else {
//					LD vop1, vop2;
//					if (op1.type == 'i') {
//						vop1 = parse_int(op1.val);
//					}
//					else {
//						vop1 = parse_double(op1.val);
//					}
//					if (op2.type == 'i') {
//						vop2 = parse_int(op2.val);
//						if (vop2 == 0) {
//							printf("divided by ZERO\n");
//							return false;
//						}
//					}
//					else {
//						vop2 = parse_double(op2.val);
//						if (abs(vop2) < eps) {
//							printf("divided by ZERO\n");
//							return false;
//						}
//					}
//
//					Var newop = Var(str_double(vop1 / vop2), 'd');
//					frame.push_back(newop);
//				}
//			}
//			else if (it.op == '=') {
//				Var op2 = frame[frame.size() - 1];
//				frame.pop_back();
//				Var op1 = frame[frame.size() - 1];
//				frame.pop_back();
//				Var uop1 = slots[op1.val];
//				if (uop1.type == 'i') {
//					if (op2.val == "") { op2.val = "0"; op2.type = 'i'; };
//					if (op2.type == 'i') {
//						slots[op1.val] = Var( op2.val, 'i');
//					}
//					else if(op2.type == 'd'){
//						slots[op1.val] = Var( str_int((LL)parse_double(op2.val)), 'i');
//					}
//					else {
//						op2 = slots[op2.val];
//						if (op2.val == "") { op2.val = "0"; op2.type = 'i'; };
//						slots[op1.val] = op2;
//					}
//				}
//				else if(uop1.type == 'd'){
//					if (op2.val == "") { op2.val = "0"; op2.type = 'i'; };
//					if (op2.type == 'i') {
//						LL ansint = (LL)parse_double(op2.val);
//						slots[op1.val] = Var(str_double(ansint), 'd');
//					}
//					else if (op2.type == 'd') {
//						slots[op1.val] = Var(op2.val, 'd');
//					}
//					else {
//						op2 = slots[op2.val];
//						if (op2.val == "") { op2.val = "0"; op2.type = 'i'; };
//						slots[op1.val] = op2;
//					}
//				}
//				else {
//					if (op2.type == 'd') {
//						slots[op1.val] = op2;
//					}
//					else if (op2.type == 'i') {
//						slots[op1.val] = op2;
//					}
//					else {
//						op2 = slots[op2.val];
//						if (op2.val == "") { op2.val = "0"; op2.type = 'i'; };
//						slots[op1.val] = op2;
//					}
//				}
//				// IMPORTANT not op1, not op2
//				// ×¢ÒâÓÒ½áºÏ
//				frame.push_back(slots[op1.val]);
//			}
//		}
//	}
//	return true;
//}
//
//#define print(XX) cout << XX << endl;
//
//void test() {
//	cout << endl;
//	// a = 3.1346 * (a + b + 3 * (5 + b) + 7 * 6) + -9 * -3 / 2;
//	// 3 * (5 + b)
//	// a + b + 3 * (5 + b) + 7 * 6
//	// a = 3 * (1 + 1) + 6;
//	// (1 * 2 + 3) + -4 * -5;
//	// b = a = 2.5 where b is double a is int
//int a, b, c, d, e, f = 0, g = 0;
//double da, db, x, y, z;
//a = 1;
//b = 2;
//e = f + (g = a + b);
//print(e);
//print(f);
//print(g);
//a = -1 + 2;
//print(a);
//b = -(-1);
//print(b);
//a = (-1)+ (+ - 2);
//print(a);
//a = b = c = d = x = y = 0;
//x = 5.0;
//y = 0.01;
//x = x / y;
//print(x);
//x = 5.0;
//y = 2.0;
//x = x / y;
//print(a);
//x = 5 / 2;
//print(a);
//y = 5;
//x = y / 2.0;
//print(x);
//print(a);
//a = 2;
//y = 2.5;
//y = a = 2.5;
//print(y);
//y = a = 3.1346 * (a + y + 3 * (5 + y) + 7 * 6) + -9 * -3 / 2;
//print(y);
//a = 9;
//y = a = 1 + 1.5;
//print(y);
//print(2 + (1 + 2) * 5);
//c = y = a = 2 + 2.5;
//print(a);
//print(y);
//print(c);
//c = b = a = 2 + 2.5;
//print(a);
//print(b);
//print(c);
//a = 9;
//a = a * .55555555;
//print(a);
////print(dum1);
////dum2 = dum2 + 1;
////print(dum2)
////dum3 = dum3 + dum2
////print(dum3);
////dum4 = dum4 * 1.0;
////print(dum4)
//cout << endl << endl << endl << endl;
//a = 5;
//b = c;
//x = 5;
//y = a;
//print(b)
//print(y)
//a = 5.5;
//x = y = (1 + a)*6.44;
//a + 4;
//a = a / 2;
//print(a);
//y = (c + 6)*-(1 + (+1));
//print(y);
//d = a / (2 / 5);
//print(d);
//b = 5.5;
//a = b / 2.0;
//print(a);
//x = 5.0;
//y = 0.0;
//x = x / y;
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	//test();
//	// freopen("1111.txt", "w", stdout);
//	printf("-----------------------------------------\n");
//	cin >> T;
//	slots.clear();
//	memset(prio, 0, sizeof prio);
//	prio[')'] = -1;
//	prio['='] = 4;
//	prio['p'] = 5;
//	prio['i'] = 5;
//	prio['d'] = 5;
//	prio['('] = 1;
//	prio['+'] = 30;
//	prio['-'] = 30;
//	prio['*'] = 40;
//	prio['/'] = 40;
//	prio['!'] = 99;
//	prio['@'] = 99;
//	for (int l = 0; l <= T; l++)
//	{
//		getline(cin, code);
//		parse_line(code);
//		bool ans = eval_line();
//		if (!ans) {
//			break;
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
