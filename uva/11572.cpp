#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main(){_

  int t, n;
	int snowflake;

//	vector <int> snowflakes;
	
	int snowflakes[1112345];

	cin >> t;
	
	while(t--){
		
		cin >> n;	
		
		map <int, bool> retira;
		int prim = 0, atual = 0, cont = 0, ans = 0;
		
	  while(n--){
			
				cin >> snowflake;
				snowflakes[atual++] = snowflake;	
				
				if(retira.find(snowflake) != retira.end()){
						if(cont > ans){
								ans = cont;
						}

						while(true){
									if(snowflakes[prim] == snowflake){
											break;
									}
									retira.erase(snowflakes[prim]);
									cont--;
									prim++;
						}
						
						prim++;

				}else{
						cont++;
						retira[snowflake] = true;
				}

			if(cont > ans){
				ans = cont;
			}
		}			
					
		cout << ans << endl;
	
	}


	return 0;
}


