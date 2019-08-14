#include <stdio.h>

int main() {

    short t, n, k;

    scanf("%hd",&t);

    while(t--){
        scanf("%hd %hd",&n,&k);
        
        printf("%hd\n", (n%k) + (n/k));
    }

    return 0;
}

