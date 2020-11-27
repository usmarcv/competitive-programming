#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){_
	
	char s[28], l;

	for(int i = 'A', j = 1; i <= 'Z'; i++, j++){
					s[i] = j;
	}

	scanf("%c", &l);

	printf("%d\n", s[l]);

	return 0;

}

