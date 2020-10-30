#include <stdio.h>
#include <string.h>

#include "my_string.h"

/// 1.strlen, 2.strupr, 3.strlwr, 4.strcmp, 5.strcpy, 6.strcat, 7.strrev, 8.strstr


char buf[50] = "my string library";
char buf0[50] = "hello world";
char buf1[50] = "hello world";
char buf2[50] = "my_string";
char buf3[50] = "zoom";
char buf4[50] = "On_Off";
char buf5[50] = "in";

int main()
{

    int count = my_strlen(buf);
    printf("1. string length = %d\n\n", count);

    my_strupr(buf2);
    printf("2. string upper = %s\n\n", buf2);

    my_strlwr(buf2);
    printf("3. string upper = %s\n\n", buf2);

    if(my_strcmp(buf0, buf1) == 0)
        printf("4. strings are same\n\n");
    if(my_strcmp(buf0, buf1) != 0)
        printf("4. strings are different\n\n");

    printf("5. buf3 before copied  = %s\n\n", buf3);
    my_strcpy(buf1, buf3);
    printf("5. buf3 after copied from buf1 = %s\n\n", buf3);

    printf("6. buf2 before concat   = %s\n\n", buf2);
    my_strcat(buf2, buf3);
    printf("6. buf2 after concat with buf3 = %s\n\n", buf2);

    printf("7. buf4 before    = %s\n\n", buf4);
    my_strrev(buf4);
    printf("7. buf4 after reverse = %s\n\n", buf4);

    printf("8. %s\n", my_strstr(buf, buf5));


    return 0;
}

