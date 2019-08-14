#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;

  while (cin >> n && n) {
    vector <pair<short, short>> v(n);
    for (int i = 0; i < v.size(); ++i) {
  		    cin >> v[i].first;
      		v[i].second = i + 1;
    }
    sort(v.rbegin(), v.rend());
    cout << v[1].second << endl;
	}
	return 0;
}

