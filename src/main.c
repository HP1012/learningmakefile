#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../inc/lnmakefile.h"

// #include "lnmakefile.h"
#define TIME "1"

char *list_arv;

int main(int argc, char* argv[])
{
    if(argc > 1)
    {
        if( strcmp(argv[1],TIME) == 0)
        {
            printf("ok\n");
        }
        //int a = strlen(argv[1]);
        list_arv = (char*)malloc(sizeof(char)*strlen(argv[1]));
        memcpy(list_arv,argv[1],sizeof(char)*strlen(argv[1]));
    }
    printf("list_arv: %s\n",list_arv);

    printf("Call learning:\n");
    printf("sum: %d\n",sum(10,11));



    return 0;
}
