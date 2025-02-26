#include <stdio.h>

int main(){
    char Mkey[] = "test123";
    char ui[7];


    printf("\nEnter master password: ");
    scanf("%s", ui);

    if (ui == Mkey){
        printf("you did it\n");
    } else {
        printf("wrong\n");
    }



}