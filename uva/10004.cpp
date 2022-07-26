#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define INF 1000000000

typedef long long ll;

using namespace std;

// ----------------------------------

//Struct bipartite graph
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define NOTCOLOR -1
#define BLACK 0

// ----------------------------------

int main(){_

	int N;
	
	while(cin >> N and N){
		
		vector<vii> adjList(N);
		vi color(N, NOTCOLOR);
		bool isBipartite = true;

		int l;
		cin >> l;
		while(l--){
			
			int u, v;
			cin >> u >> v;
			adjList[u].push_back(make_pair(v,0));
			adjList[v].push_back(make_pair(u,0));

		}		
		
		queue<int> q;
    q.push(0);
    color[0] = BLACK;
 
    while(!q.empty() && isBipartite){
 
      int k = q.front(); q.pop();
 
      int tam = (int)adjList[k].size();
      for(int i = 0; i < tam; i++){
 
          ii v = adjList[k][i];
 					
          if(color[v.first] == NOTCOLOR){
 
              color[v.first] = 1 - color[k];
              q.push(v.first);
 
          }else if(color[v.first] == color[k]){
                   isBipartite = false;
                   break;
          }
 
      }
 
     }


		if(isBipartite){
				cout << "BICOLORABLE." << endl;
		}else{
				cout << "NOT BICOLORABLE." << endl;
		}

	}

	return 0;

}

