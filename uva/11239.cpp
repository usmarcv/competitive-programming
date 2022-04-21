#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
typedef unsigned long ul;

using namespace std;

bool cmp (const pair <string, int> &a, const pair <string, int> &b){
    
		if(a.second == b.second)
        return (a.first < b.first);
		else 
				return (a.second > b.second);
}

int main(){_

    map <string, set <string> > userid; 
    vector <pair <string, int> > project;
	
		string n;
    string name;

    while(getline(cin, n)){
        
				if(n[0] == '0'){
				
						break;
				
				}else if(n[0] == '1'){
            
						for(map <string, set <string> >::iterator it = userid.begin(); it != userid.end(); it++)
            
							if(it->second.size() == 1){
              
								for(ul i = 0; i < project.size(); i++)
                    if(project[i].first ==  *it->second.begin()) project[i].second++;
                }

            sort(project.begin(), project.end(), cmp);
            
            for(ul i = 0; i < project.size(); i++)
                cout << project[i].first << " " << project[i].second << endl;

            userid.clear();
            project.clear();
        
				}   

        else if(isupper(n[0])){
            name = n;
            project.push_back(make_pair(name, 0));
        }         
        else{ 
						userid[n].insert(name);
				}
    }

    return 0;
}



