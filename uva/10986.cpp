#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;


//Struct dijkstra graph
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define INF 0x3f3f3f3f
#define MAX 20010

vii adjList[MAX];
int d[MAX];
//---------------------


void dijkstra(int s){
	
	priority_queue<ii, vector<ii>, greater<ii>> q;

	memset(d, INF, sizeof d);	
	q.push(ii(0, s));
	d[s] = 0;

	while(!q.empty()){
		
		int u = q.top().second; // node
		int cost = q.top().first; 
		q.pop();

		if(d[u] < cost) continue;

		for(int i = 0; i < (int)adjList[u].size(); i++){
				
				int v = adjList[u][i].first;
				int w = adjList[u][i].second;

				if(d[v] > d[u] + w){
						d[v] = d[u] + w;
						q.push(ii(d[v], v));
				}
		}
	

	}


}


int main(){_
	
	int T, n, m, s, t, cases = 0;
	
	cin >> T;
	while(T--){
	
		cin >> n >> m >> s >> t;
		
		memset(adjList, 0, sizeof adjList);

		for(int i = 0; i < m; i++){
				int u, v, w;
				cin >> u >> v >> w;
				adjList[u].push_back(ii(v,w));
				adjList[v].push_back(ii(u,w));
		}
	
		dijkstra(s);
	
		if(d[t] == INF) 
			printf("Case #%d: unreachable\n", ++cases);
		else
		  printf("Case #%d: %d\n", ++cases, d[t]);
	
	}

	return 0;

}

