#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_
	
	int a, b, c;

	cin >> a >> b >> c;
  if(a - b == 0) cout << "S" << endl;
  else if(b - c == 0) cout << "S" << endl;
  else if(a - c == 0) cout << "S" << endl;
  else if((a+b)-c == 0) cout << "S" << endl;
  else if((b+c)-a == 0) cout << "S" << endl; 
  else if((a+c)-b == 0) cout << "S" << endl;
  else cout << "N" << endl;

	return 0;

}

