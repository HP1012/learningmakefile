#include <stdio.h>
#include "lnmakefile.h"

#  define __PRI64_PREFIX	"l"
# define PRIu64		__PRI64_PREFIX "u"

int main()
{

    const char* get_pr = PRIu64;

    int tmp = sum(10,1);
    printf("Hello makefile: %d\n",tmp);

    for(int a = 0; a < 10; a++)
    {
        printf("Hello for: %d\n",a);
    }
    return 0;
}
