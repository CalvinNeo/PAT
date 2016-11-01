//#include <cstdio>
//#include <cstring>
//#include <cmath>
//#include <queue>
//#include <algorithm>
//using namespace std;
//typedef long long LL;
//#define INF 0x3f3f3f3f
//#define eps 1e-8
//
//struct Character
//{
//	int x, y, hp, at, mv, ad1, ad2, gr;
//};
//
//struct Node
//{
//	int x, y, mv;
//	Node(int xx, int yy, int mvv)
//	{
//		x = xx; y = yy; mv = mvv;
//	}
//	bool operator < (const Node& A) const
//	{
//		return mv < A.mv;
//	}
//};
//
//const int gox[4] = { 0, 0, 1, -1 };
//const int goy[4] = { 1, -1, 0, 0 };
//
//int n, m, c, e, cur, xx, yy, mv, ans;
//Character a[110];
//char s[100];
//// G，和占领者
//int mp[110][110], f[110][110];
//bool vis[110][110];
//priority_queue<Node> q;
//
//int Move(int cur, int x, int y)
//{
//	if (a[cur].x == x && a[cur].y == y) return a[cur].mv;
//	if (f[x][y] != -1) return -1;
//	memset(vis, 0, sizeof(vis));
//	while (!q.empty()) q.pop();
//	q.push(Node(a[cur].x, a[cur].y, a[cur].mv));
//	vis[a[cur].x][a[cur].y] = 1;
//	while (!q.empty())
//	{
//		Node A = q.top(); q.pop();
//		if (A.x == x && A.y == y)
//		{
//			f[a[cur].x][a[cur].y] = -1;
//			f[x][y] = a[cur].gr;
//			a[cur].x = x; a[cur].y = y;
//			return A.mv;
//		}
//		for (int i = 0; i < 4; i++)
//		{
//			xx = A.x + gox[i];
//			yy = A.y + goy[i];
//			mv = A.mv - mp[xx][yy];
//			if (xx <= 0 || xx > n || yy <= 0 || yy > m || mv < 0 || vis[xx][yy] || f[xx][yy] != -1) continue;
//			for (int j = 0; j < 4; j++)
//				if (f[xx + gox[j]][yy + goy[j]] != -1 && (f[xx + gox[j]][yy + goy[j]] ^ a[cur].gr))
//					mv = 0;
//			q.push(Node(xx, yy, mv));
//			vis[xx][yy] = 1;
//		}
//	}
//	return -1;
//}
//
//int Attack(int cur, int ID)
//{
//	int d = abs(a[cur].x - a[ID].x) + abs(a[cur].y - a[ID].y);
//	if (d >= a[cur].ad1 && d <= a[cur].ad2 && a[ID].hp > a[cur].at)
//	{
//		a[ID].hp -= a[cur].at;
//		return a[ID].hp;
//	}
//	return -1;
//}
//
//int Drive_out(int cur, int ID)
//{
//	int d = abs(a[cur].x - a[ID].x) + abs(a[cur].y - a[ID].y);
//	if (d >= a[cur].ad1 && d <= a[cur].ad2 && a[ID].hp <= a[cur].at)
//	{
//		a[ID].hp -= a[cur].at;
//		// 无人占领
//		f[a[ID].x][a[ID].y] = -1;
//		return a[ID].hp;
//	}
//	return 1;
//}
//
//int main()
//{
//	while (scanf("%d%d%d%d", &n, &m, &c, &e) != EOF)
//	{
//		memset(f, -1, sizeof(f));
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= m; j++)
//				scanf("%d", &mp[i][j]);
//		for (int i = 1; i <= c; i++)
//		{
//			scanf("%d%d%d%d", &a[i].hp, &a[i].at, &a[i].mv, &a[i].ad1);
//			scanf("%d%d%d%d", &a[i].ad2, &a[i].x, &a[i].y, &a[i].gr);
//			f[a[i].x][a[i].y] = a[i].gr;
//		}
//		scanf("\n");
//		while (e--)
//		{
//			gets(s);
//			if (s[0] == 'A' && s[1] == 'c')
//				sscanf(s, "Action of character %d", &cur);
//			else if (s[0] == 'M')
//			{
//				sscanf(s, "Move to (%d,%d)", &xx, &yy);
//				ans = Move(cur, xx, yy);
//				if (ans < 0) printf("INVALID\n");
//				else printf("%d\n", ans);
//			}
//			else if (s[0] == 'A')
//			{
//				sscanf(s, "Attack %d", &xx);
//				ans = Attack(cur, xx);
//				if (ans < 0) printf("INVALID\n");
//				else printf("%d\n", ans);
//			}
//			else if (s[0] == 'D')
//			{
//				sscanf(s, "Drive out %d", &xx);
//				ans = Drive_out(cur, xx);
//				if (ans > 0) printf("INVALID\n");
//				else printf("%d\n", ans);
//			}
//		}
//	}
//	return 0;
//}