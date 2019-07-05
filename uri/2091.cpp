#include <bits/stdc++.h>
#define ll long long
#define endl '\n' 
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
  ll num, ans;
  
  while(cin >> n && n){
      ans = 0LL;
    	while(n--){
          cin >> num;
          ans ^= num;
      }
 cout << ans << endl;   
 }

	return 0;
}

