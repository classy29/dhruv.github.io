#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int main()
{
    FILE * fpointer;
    fpointer = fopen("Dhruv.txt","r");

    char singleline[150];

    while(!feof(fpointer)){

            fgets(singleline,2,fpointer);
            puts(singleline);

    }

    fclose(fpointer);
    return 0;
}






