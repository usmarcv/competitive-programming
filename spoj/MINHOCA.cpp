#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
const int N = 112;
const int M = 112;
 
int celulas[N][M];
 
int main(){_
 
	int n, m;
 
	cin >> n >> m;
	
	for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
					cin >> celulas[i][j];
			}
	}
 
	int maior = 0;
	for(int i = 0; i < n; i++){
		int ans = 0;
		for(int j = 0; j < m; j++){
				ans += celulas[i][j];
		}
		if(ans > maior){
			maior = ans;
		}	
	}
 
	for(int j = 0; j < m; j++){
		int ans = 0;
		for(int i = 0; i < n; i++){
				ans += celulas[i][j];
		}
		if(ans > maior)
			maior = ans;
	}
		
	cout << maior << endl;
 
	return 0;
 
}
