#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A='r';
    printf("Etes vous administrateur ?");
    scanf("%c",&A);
    if(A=='Y'){
        printf("Bienvenue admin");

    }
    else{
        printf("Bienvenue passager");
    }
    return 0;
}
