#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare (const void *a, const void *b){
   return *(int*)b - *(int*)a;
}

int main(){
	
	int num;
	int v[112345];

	memset(v, 1, sizeof(v));

	scanf("%d",&num);
	for(int i = 0 ; i < num; i++){
			scanf("%d",&v[i]);
	}

	qsort(v, num, sizeof(int), compare);

	printf("%d\n",v[0]+1);

	return 0;

}
