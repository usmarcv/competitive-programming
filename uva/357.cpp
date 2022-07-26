#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

#define MAX 30001
unsigned long long ways[MAX];
int coins[5] = {1, 5, 10, 25, 50};

int main(){_
	
	memset(ways, 0, sizeof ways);

	ways[0] = 1;
	
	for(int i = 0; i < 5; ++i){
			for(int j = coins[i]; j < MAX; ++j){
					ways[j] += ways[j - coins[i]];
			}
	}

	int cents;
	while(cin >> cents){
		if(ways[cents] == 1){
				printf("There is only 1 way to produce %d cents change.\n", cents);
		}else{
				printf("There are %lld ways to produce %d cents change.\n", ways[cents], cents);
		}

	}

  return 0;
}


