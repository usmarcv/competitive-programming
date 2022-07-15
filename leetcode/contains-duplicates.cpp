#include <bits/stdc++.h>
using namespace std;


#define endl '\n'
#define INF 0x3f3f3f3f
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;


// -- Graph structure --
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
// ----------------------

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set<int> s;
        for(int i = 0; i < nums.size(); i++){
            s.insert(nums[i]);
            
        }
        if(s.size() != nums.size()) return true;
        else return false;
        
    }
};

int main(){_
	
	Solution s;

	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	
	cout << s.containsDuplicate(v) << endl;

	return 0;

}

