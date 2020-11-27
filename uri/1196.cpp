#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_

	char key[48] = {"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
	
	char s;
	

	while(scanf("%c", &s) != EOF){
		for(int i = 0; i < 48; i++){
				if(s == key[i]){
					printf("%c", key[i - 1]);
					break;
				}else if(s == ' '){
				 printf(" ");
				 break;
				}else if(s == '\n'){
					printf("\n");
					break;
				}
		}
	
	}


	return 0;

}

