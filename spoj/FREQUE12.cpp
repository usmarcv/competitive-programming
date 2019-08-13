#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
#define MAX 1123456
bool presente[MAX];
 
int main(){_
 
	for(int i = 0; i < MAX; i++){
			presente[i] = false;
	}
 
	int n, ans = 0;
	cin >> n;
 
	for(int i = 0; i < n; i++){
			int atual;
			cin >> atual;
			presente[atual] = true;
	}
 
	for(int i = 0 ; i < MAX; i++){
			if(presente[i]){
					ans++;
			}
	}
 
	cout << ans << endl;
 
	return 0;
 
}
