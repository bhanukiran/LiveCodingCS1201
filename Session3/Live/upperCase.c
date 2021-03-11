
#include <stdio.h>


int main(){
    char name[10000];

   /*  for(int i = 0; i < 10000; i++){
        name[i] = 0; // instead of '\0' we could use just 0
    } */

    /* for(int i = 0; i < 10000; i++){
        printf("%c", name[i]);
    }
    printf("-------------"); */

    scanf("%s", name);

    for(int i = 0; i < 10000; i++){
        
        if((97 <= name[i]) && (name[i] <= 122)){ //if lower case UP it.
            printf("%c", name[i] - 32);
        }
        else if(name[i] == '\0'){ //if encoutered null char, break.
            break;
        }
        else{
            printf("%c", name[i]);
        }
    }
    return 0;
}


/*
'\0' 0
'a'  97
'0' 48
*/