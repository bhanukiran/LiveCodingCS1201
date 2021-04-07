#include<stdio.h>
#define MAX 1000
int main()
{
    int Req_Sum = 0, Count = 0 ;
    // N represents the number of boxes
    unsigned int N, Number_of_Boxes = 0;
    scanf("%u", &N);
    //We scan it using unsigned int since the number of boxes cannot be negative 
    int array[MAX];
    //We define an array which takes in value from the input 

    for ( int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
      for ( int i = 0 ; i < N -1; i ++)
      {
        if (array[i] > array[i + 1])
        {
            Count = Count + (array[i] - array[i + 1]) ;
            array[i + 1] = array[i];
        }
       
      }

    for(int i = 0; i < N; i++){
        printf("%d ", array[i]);
    }
    printf("\n---\n");

    Req_Sum = Req_Sum + Count;
    printf("%d", Req_Sum);
}