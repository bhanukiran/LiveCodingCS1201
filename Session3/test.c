#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    
    for(int j = N-1; j >= 0; j--){
        printf("%d ", A[j]);
    }
    
    return 0;
}