#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define __ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

short n;

int main(){ __

  while(cin >> n){

    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
          if(i + j == n - 1) cout << "2";
          else if (i == j) cout << "1";
          else cout << "3";
      }
      cout << endl;
    }
  }  
	  
	return 0;
}

