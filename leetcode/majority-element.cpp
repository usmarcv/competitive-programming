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

class Solution{
	public:
		int majorityElement(vector<int>& nums){
				sort(nums.begin(), nums.end());
				return nums[nums.size()/2];
		}
};


int main(){_
	
	Solution s;

	vector<int> v;

	v.push_back(3);
	v.push_back(2);
	v.push_back(3);

	cout << s.majorityElement(v) << endl;

	return 0;

}

