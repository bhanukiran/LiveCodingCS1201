


#include<stdio.h>
int sumDiv(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}
int main()
{
    int N,sum1=0,sum2=0,sumTotal=0;
    scanf("%d",&N);
    for(int i=220;i<=N;i++){
        sum1=sumDiv(i);
        sum2=sumDiv(sum1);
        if(sum2==i && sum1!=i){
            sumTotal+=(sum1+sum2);
            i=sum1;
        }
    }
    printf("%d",sumTotal);
}
