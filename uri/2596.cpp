#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int n, c, ans;

int main(){

  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  
  cin >> c;
  while(c--){
    cin >> n;
    ans = sqrt(n);
    ans = n - ans;
    cout << ans << endl;
  }
  
	return 0;
}
