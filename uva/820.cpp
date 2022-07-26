#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define INF 0x3f3f3f3f
#define MAX 102

int network[MAX][MAX];
int father[MAX];
int N;

bool dijkstra(int s, int destination){
	
	vi dist(MAX);
	priority_queue<ii, vii, greater<ii>> q;
	
	dist.assign(MAX, INF);
	dist[s] = 0;
	q.push(ii(0, s));

	memset(father, -1, sizeof(father));
	father[s] = 0;
	
	while(!q.empty()){

		ii k = q.top(); q.pop();
		int d = k.first;
		int u = k.second;
		
		if(d > dist[u]) continue;

		for(int i = 0; i <= N; ++i){
			if(network[u][i] == 0) continue;
			if(dist[u] + 1 < dist[i]){
				dist[i] = dist[u] + 1;
				father[i] = u;
				q.push(ii(dist[i], i));
			}
		}
	}
	
	return (dist[destination] != INF);

}

int edmonds_karp(int s, int destination){

		int max_flow = 0;
		while(dijkstra(s, destination)){
				int bottleneck = INF;
				for(int i = destination; i != s; i = father[i]){
						int u = father[i];
						bottleneck = min(bottleneck, network[u][i]);
				}
				for(int i = destination; i != s; i = father[i]){
						int u = father[i];
						network[u][i] -= bottleneck;
						network[i][u] -= bottleneck;
				}

				max_flow += bottleneck;
		}

	return max_flow;

}


int main(){_
	
	int s, t, c, count = 0;
	
	while(cin >> N && N){
			
			memset(network, 0, sizeof(network));

			cin >> s >> t >> c;
			while(c--){
				int u, v, bandw;
				
				cin >> u >> v >> bandw;
				network[u][v] += bandw;
				network[v][u] += bandw;		
	
			}
		
		printf("Network %d\n", ++count);
		printf("The bandwidth is %d.\n\n", edmonds_karp(s,t));
	}

  return 0;
}


