#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool compare(const pair<string, int> &a, const pair<string, int> &b){
	return (a.second < b.second);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	vector <pair<string,int>> v;

	int n, data;
	string peca;
	
	v.clear();
	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> peca >> data;
			v.push_back(make_pair(peca, data));
		}
		sort(v.begin(), v.end(), compare);
		for(int i = 0; i < n-1; i++){
			cout << v[i].first << ' ';	
		}
		cout << v[n-1].first << endl;
		v.clear();
	}

	return 0;
}

