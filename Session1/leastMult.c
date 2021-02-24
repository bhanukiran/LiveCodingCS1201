
// credits: Suyash and Tanvi

#include <stdio.h>

int isDivisibleByAll(int N, long ans){

    for(int i = 1; i < N; i++){
        if(ans%i != 0){
            return 0;
        }
    }
    return 1;
}
//----------
int main(){
    int N;
    printf("n = "); // this is important.
    scanf("%d", &N);

    unsigned long ans = N;
    while(1 == 1){
        if(isDivisibleByAll(N, ans)){
            printf("asnwer = %lu\n", ans);
            break;
        }
        else{
            ans = ans + N;
        }
    }
    
}