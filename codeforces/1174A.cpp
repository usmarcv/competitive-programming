#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define __ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
int main(){__
	
	int n, num;
	cin >> n;
	vector <int> vetor;
	set <int> order;
 
	for(int i = 0; i < n*2; ++i){
		cin >> num;
		vetor.push_back(num);
		order.insert(num);
	}
	
	if(order.size() == 1){
		cout << "-1\n";
	}else{
		sort(vetor.begin(), vetor.end());
		for(int i = 0; i < n*2; ++i)
				cout << vetor[i] << " ";
	}	
	return 0;
 
}
