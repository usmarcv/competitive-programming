#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define MOD 1000000007
#define INF 0x3f3f3f3f
using namespace std;

int main(){_

	int g, p;
	int chegada[112][112];
	int sistema[112];
	int pontos[112];
	
	while((cin >> g >> p) && (g || p)){
		
		memset(chegada, 0, sizeof(chegada));

		for(int i = 0; i < g; i++){
				for(int j = 0; j < p; j++){
						cin >> chegada[i][j];
				}
		}
		
		int s;
		cin >> s;
	
		while(s--){
		
			memset(sistema, 0, sizeof(sistema));
 		  memset(pontos, 0, sizeof(pontos));

			int k;
			cin >> k;
			
			for(int i = 0; i < k; i++){
					cin >>  sistema[i];
			}
	
			for(int i = 0; i < g; i++){
					for(int j = 0; j < p; j++){
							pontos[j] += sistema[chegada[i][j] - 1];
					}
			}
			
			//sort(pontos.begin(), pontos.end());
			int maior = 0;
			for(int i = 0; i < p; i++){
					if(pontos[i] > maior)
						 maior = pontos[i];
			}
	
			bool flag = true;
			for(int i = 0; i < p; i++){
					if(pontos[i] ==  maior){
						if(flag){
							cout << (i + 1);
							flag = false;
						}else{
							cout << " "<< (i + 1);
						}
					}
			}
			
			cout << endl;

		}

	}

	return 0;

}

