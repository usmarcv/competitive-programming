#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;


struct cmp {
  bool operator()(const int& l, const int& r) {
      return l > r;
  }
};

int main(){_

	int n;

	while(cin >> n && n != 0){
		
	priority_queue<int, vector<int>, cmp> pq;	
	
		for(int i = 0; i < n; ++i){
				int num;
				cin >> num;
				pq.push(num);
		}
	
		int ans = 0;
		while(pq.size() > 1){
					int sum = 0;
					sum += pq.top();
					pq.pop();
		
					sum += pq.top();
					pq.pop();
					ans += sum;
					pq.push(sum);
		}
		
		cout << ans << endl;
	
	}

  return 0;
}


