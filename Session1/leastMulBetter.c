
// dedicated to srikar & ??

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

short isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            return 0;   
        }
    }
    return 1;
}

int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);

    int* primesArray = (int*)calloc(n, sizeof(int));
    
    // int primesArray[100];

    int ix = 0;
    for(int j = 2; j <= n; j++){
        if(isPrime(j)){
            primesArray[ix] = j;
            ix = ix + 1;
        }
    }
    
    unsigned long long ans = 1;
    for(int k = 0; k < n; k++){
        if(primesArray[k] != 0){
            ans = ans * pow(primesArray[k], (int)(log(n)/log(primesArray[k])));
        }
    }

    printf("ans = %llu\n", ans);

}