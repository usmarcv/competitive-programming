#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

typedef pair <int, int> ii;

/* 
struct cmp {
  bool operator()(const int& l, const int& r) {
      return l > r;
  }
};*/

bool cmp (int l, int r){
	return l > r;
}

int main(){_
     
    int t, i, n, m, num;
     
    cin >> t;
     
    while (t--){
        
				cin >> n >> m;
         
        vector <int> v;
				queue <ii> q;
         
        for (i = 0; i < n; ++i){
            	cin >> num;
           	  q.push(ii(num, i));
           	  v.push_back(num);
        }
         
        sort(v.begin(), v.end(), cmp);
         
        i = 0;
        int ans = 0;
         
        while (!q.empty())
				{
            int u = q.front().first;
            int w = q.front().second;
            q.pop();
             
            if (u == v[i]) {
               	
								++ans;

                if (w == m){
									break;
                }
								i++;
            }
            else {
                q.push(ii(u,w));
            }
        }

        cout<< ans <<endl;
    }
     
    return 0;
}
