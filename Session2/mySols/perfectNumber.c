


#include <stdio.h>

int main(){

  int N;
  scanf("%d", &N);

  int sum_of_divisors = 0;

  int i = 0;
  while(i < N){

    if(N%i == 0){
      sum_of_divisors = sum_of_divisors + i;
    }
    i = i + 1;    
  }

  if (sum_of_divisors == N){
    printf("1");
  }

  else{
    printf("0");
  }
  
}
