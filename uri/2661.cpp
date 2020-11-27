#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

#define ull unsigned long long 

int main(){_

	ull N;
	set <int> s;
	int f = 2;

	cin >> N;
	while(N > 1 && f <= 1000000){
		while(N % f == 0){
						s.insert(f);
						N = N / f;
		}
		f++;
	}
	
	if(N > 1) s.insert(N);
	
	cout << (1 << s.size()) - s.size() - 1 << endl;

	return 0;

}

