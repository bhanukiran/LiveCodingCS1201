


#include <stdio.h>

int sumOfDivisors(int n){
  int i = 1;
  int ans = 0;

  while(i < n){
    if(n%i == 0){
      ans = ans + 1;
    }
    i = i + 1;
  }
  
  return ans;
}

//--------

int main(){

  int N;
  scanf("%d", &N);

  int n = 0;
  int Res = 0;
  while(n < N){

    if(sumOfDivisors(n) != 1){

      if(n != sumOfDivisors(n)){
	if(sumOfDivisors(sumOfDivisors(n)) == n){
	  Res += n;
	}
      }
    }
  }
  printf("%d\n", Res);
}
