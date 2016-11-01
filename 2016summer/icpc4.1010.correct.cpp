//#include <cstdio>
//#include <cstring>
//#include <cmath>
//#include <queue>
//#include <algorithm>
//
//#define INF 0x3f3f3f3f
//#define MAXN 110
//using namespace std;
//#define LL long long
//
//int N, M, C, E;
//
//struct Character {
//	int HP;
//	int AT;
//	int MV;
//	int AD1;
//	int AD2;
//	int STx;
//	int STy;
//	int GR;
//};
//
//
//struct Node {
//	int x, y, mv;
//	Node(int dx, int dy, int dmv) :x(dx), y(dy), mv(dmv) {
//
//	}
//	bool operator< (const Node& A) const
//	{
//		return mv < A.mv;
//	}
//};
//
//priority_queue<Node> pq;
//int dir[4][2] = { { 1,0 },{ 0,1 },{ 0,-1 },{ -1,0 } };
//bool vis[MAXN][MAXN];
//int G[MAXN][MAXN];
//int OC[MAXN][MAXN]; // -1没有被占领
//Character Cha[MAXN];
//char cmd[200];
//int cha = 0;
//int maxn;
//
//
//bool zeromv(int x, int y, int i) {
//	if (x - 1 >= 1 && OC[x - 1][y] != Cha[i].GR && OC[x - 1][y] != -1) {
//		return true;
//	}
//	if (x + 1 <= N && OC[x + 1][y] != Cha[i].GR && OC[x + 1][y] != -1) {
//		return true;
//	}
//	if (y - 1 >= 1 && OC[x][y - 1] != Cha[i].GR && OC[x][y - 1] != -1) {
//		return true;
//	}
//	if (y + 1 <= M && OC[x][y + 1] != Cha[i].GR && OC[x][y + 1] != -1) {
//		return true;
//	}
//	return false;
//}
//
//bool bfs(int x, int y) {
//	// character to (x, y)
//	if (Cha[cha].STx == x && Cha[cha].STy == y) {
//		if (true || Cha[cha].MV >= 0) {
//			maxn = Cha[cha].MV;
//			return true;
//		}
//		return false;
//	}
//	if (OC[x][y] != -1) return false;
//	memset(vis, 0, sizeof vis);
//	while (!pq.empty()) {
//		pq.pop();
//	}
//	pq.push(Node(Cha[cha].STx, Cha[cha].STy, Cha[cha].MV));
//	// IMPORTANT
//	vis[Cha[cha].STx][Cha[cha].STy] = 1;
//	while (!pq.empty())
//	{
//		Node nd = pq.top(); pq.pop();
//		if (nd.x == x && nd.y == y)
//		{
//			if (nd.mv >= 0) {
//				// IMPORTANT not set MV
//				// Cha[cha].MV = nd.mv;
//				OC[Cha[cha].STx][Cha[cha].STy] = -1;
//				Cha[cha].STx = x; Cha[cha].STy = y;
//				OC[x][y] = Cha[cha].GR;
//				// IMPORTANT no Cha[cha].MV
//				maxn = nd.mv;
//				return true;
//			}
//			else {
//				return false;
//			}
//		}
//		else {
//			// not reached destination
//			for (int i = 0; i < 4; i++) {
//				int dx = nd.x + dir[i][0];
//				int dy = nd.y + dir[i][1];
//				int dmv;
//				if ((!vis[dx][dy]) && OC[dx][dy] == -1 && (nd.mv - G[dx][dy] >= 0)
//					&& dx >= 1 && dx <= N && dy >= 1 && dy <= M) {
//					if (zeromv(dx, dy, cha)) {
//						dmv = 0;
//					}
//					else {
//						dmv = nd.mv - G[dx][dy];
//					}
//					pq.push(Node(dx, dy, dmv));
//					vis[dx][dy] = 1;
//				}
//			}
//		}
//	}
//	return false;
//}
//
//
//int manhat(int x1, int y1, int x2, int y2) {
//	return abs(x1 - x2) + abs(y1 - y2);
//}
//
//int main() {
//#ifdef __ACM
//	//ifstream fin("1.txt");	streambuf *cinbackup;  	cinbackup = cin.rdbuf(fin.rdbuf());
//#endif
//	while (scanf("%d%d%d%d", &N, &M, &C, &E) != EOF) {
//		memset(G, 0, sizeof G);
//		memset(OC, -1, sizeof OC);
//		for (int i = 1; i <= N; i++)
//		{
//			for (int j = 1; j <= M; j++)
//			{
//				scanf("%d", &G[i][j]);
//				OC[i][j] = -1;
//			}
//		}
//		for (int i = 1; i <= C; i++)
//		{
//			scanf("%d %d %d %d %d %d %d %d", &Cha[i].HP, &Cha[i].AT, &Cha[i].MV, &Cha[i].AD1
//				, &Cha[i].AD2, &Cha[i].STx, &Cha[i].STy, &Cha[i].GR);
//			OC[Cha[i].STx][Cha[i].STy] = Cha[i].GR;
//		}
//		scanf("\n");
//		for (int i = 0; i < E; i++)
//		{
//			fgets(cmd, 199, stdin);
//			if (cmd[0] == 'A' && cmd[1] == 'c') {
//				sscanf(cmd, "Action of character %d", &cha);
//			}
//			else if (cmd[0] == 'M') {
//				int x, y;
//				sscanf(cmd, "Move to (%d,%d)", &x, &y);
//				// 剩下来的最大体力
//				bool ans = bfs(x, y);
//				if (!ans) {
//					printf("INVALID\n");
//				}
//				else {
//					printf("%d\n",maxn);
//				}
//			}
//			else if (cmd[0] == 'A') {
//				int id;
//				sscanf(cmd, "Attack %d", &id);
//				int dis = manhat(Cha[id].STx, Cha[id].STy, Cha[cha].STx, Cha[cha].STy);
//				if (dis >= Cha[cha].AD1 && dis <= Cha[cha].AD2 && Cha[id].HP > Cha[cha].AT) {
//					Cha[id].HP -= Cha[cha].AT;
//					printf("%d\n", Cha[id].HP);
//				}
//				else {
//					printf("INVALID\n");
//				}
//			}
//			else if (cmd[0] == 'D') {
//				int id;
//				sscanf(cmd, "Drive out %d", &id);
//				int dis = manhat(Cha[id].STx, Cha[id].STy, Cha[cha].STx, Cha[cha].STy);
//				if (dis >= Cha[cha].AD1 && dis <= Cha[cha].AD2 && Cha[id].HP <= Cha[cha].AT) {
//					Cha[id].HP -= Cha[cha].AT;
//					printf("%d\n", Cha[id].HP);
//					OC[Cha[id].STx][Cha[id].STy] = -1;
//				}
//				else {
//					printf("INVALID\n");
//				}
//			}
//		}
//	}
//#ifdef __ACM
//	system("pause");
//#endif
//}
//
