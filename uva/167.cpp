#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;


// -----------------------------------


#define MAX 9

int ans;
int board[MAX][MAX];
int x[16], y[16], used[MAX];

// -----------------------------------

void initData(){
	
	ans = 0;
	memset(board, 0, sizeof(int));
	memset(x, 0, sizeof(int));
	memset(y, 0, sizeof(int));
	memset(used, 0, sizeof(int));

}


void readData(){
	
	for(int i = 1; i <= 8; i++){
		for(int j = 1; j <= 8; j++){
				cin >> board[i][j];
	
		}
	}

}


void dfs(int idx, int sum){

	if(idx > 8){
		if(sum > ans){
			ans = sum;
		}
		return;
	}


	for(int i = 1; i <= 8; i++){
			if(!x[i] && !y[idx + i - 1] && !used[i + 8 - idx]){
				x[i] = y[idx + i - 1] = used[i + 8 - idx] = 1;
				sum += board[idx][i];
				dfs(idx + 1, sum);
				sum -= board[idx][i];
				x[i] = y[idx + i - 1] = used[i + 8 - idx] = 0;
			}
	}

}


void solution(){

	dfs(1, 0);
  printf("%5d\n", ans);

}


int main(){_
	
	int k;
	cin >> k;
	
	while(k--){
		
		initData();
		readData();
		solution();

	}


	return 0;

}

