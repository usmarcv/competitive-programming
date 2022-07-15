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
    bool isAnagram(string s, string t) {


        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        bool flag = false;

        int len = max(s.size(), t.size());
        for(int i = 0; i < len; i++){
            if(s[i] == t[i])
                flag = true;
            else{
                flag = false;
                break;
            }
        }

        if(flag) return true;
        else return false;

    }
};

int main(){_

	
	Solution s;

	string a = "anagram";
	string t = "nagaram";

	cout << s.isAnagram(a,t) << endl;

	return 0;

}

