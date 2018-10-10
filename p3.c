//Vitor Braga Ferreira

//11811EAU005

#include <stdio.h>

int main(){

    char a[200];
    int i,j=0;

    scanf("%s" , a);

    for(i=0;a[i]!='\0';i++){
        if(a[i] >= 48 && a[i] <= 57){
            printf("%c", a[i]);
            j=1;

        }


    }
    if(j==0){
        printf("0");
    }

}

