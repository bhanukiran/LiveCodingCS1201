
//given a string (len < 100)
//produce the next in lexicographic order.

/*
1) Find the largest index k such that a[k] < a[k + 1]. If no such index exists, the permutation is the last permutation.
2) Find the largest index l greater than k such that a[k] < a[l].
3) Swap the value of a[k] with that of a[l].
4) Reverse the sequence from a[k + 1] up to and including the final element a[n].
*/

#include <stdio.h>
#include <string.h>

int main(){
    char given[100];
    scanf("%s", given); //abcd --> abdc
    int N = strlen(given);
    
    int k = -1;
    int i = 0;
    while(i < N){
        if(given[i] < given[i+1]){
            k = i;
        }
        i += 1;
    }

    //printf("k =%d", k);

    if(k == -1){
        printf("no next permututation possible\n");
        return 0;
    }

    int l = k+1;
    int j = k+1;
    while(j < N){
        if(given[k] < given[j]){
            l = j;
        }
        j += 1;
    }

    //printf("l = %d\n", l);

    //swapping kth and lth elements
    char temp = given[l];
    given[l] = given[k];
    given[k] = temp;

    ///--------------------------
    int z = 0;
    while(z < (N - (k+1))/2){
        //swapping as part of reversing the string after kth element
        char temp = given[N - 1 - z];
        given[N - 1 - z] = given[k + 1 + z];
        given[k + 1 + z] = temp;

        z = z + 1;
    }

    printf("the next permutation = %s\n", given);

    return 0;
}