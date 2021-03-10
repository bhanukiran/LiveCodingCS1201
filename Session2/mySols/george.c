



#include<stdio.h>
int sum_D(int X)
{
  int sum=0,i;
  for(i=1; i<X; i++)
    {
      if(X%i==0)
	{
	  sum=sum+i;
	}
    }
  return sum;
}
int main()
{

  /* int n; */
  /* scanf("%d", &n); */

  /* printf("%d\n", sum_D(n)); */
  
  int N;
  long int s=0;
  scanf("%d",&N); //500
  
  for(int n=1; n <= N; n++){
    
      for(int m=1; m <= N; m++){
	  
	if ((sum_D(n) != 1) && (n==sum_D(m)) && (m==sum_D(n)) && (m != n)){
	      printf("m = %d, n = %d\n", m,n);
	      s = s + m;
	    }
	}
    }
  printf("%ld", s);

}
