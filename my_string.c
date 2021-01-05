#include <stdio.h>
#include <stdlib.h>

#include "my_string.h"


//..........................1......................

int my_strlen(char *buf)
{
    int count = 0;
    while(*buf++ != '\0')
    {
        count++;
    }
    return count;
}

//..........................2.....................
/// 65-90  A-Z
void my_strupr(char *buf)
{
    int i = 0;
    while(buf[i] != '\0')
    {
        if(buf[i] >= 'a' && buf[i] <= 'z')
        {
            buf[i] = buf[i] - 32;
        }
    i++;
    }
}

//..........................3.....................
/// 97-122 a-z
void my_strlwr(char *buf)
{
    int i = 0;
    while(buf[i] != '\0')
    {
        if(buf[i] >= 'A' && buf[i] <= 'Z')
        {
            buf[i] = buf[i] + 32;
        }
    i++;
    }
}

//..........................4.....................

int my_strcmp(char* str1, char* str2)
{
    int i;
    if(my_strlen(str1) != my_strlen(str2))
        return -1;
    
    for(i = 0; i <= my_strlen(str1); i++){
        if(str1[i] != str2[i]){
            return -2;
        }
    }
    return 0;
}


//..........................5.....................

void my_strcpy(char *str1, char *str2)
{
    int i = 0;
    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
}

//..........................6.....................

void my_strcat(char *str1, char *str2)
{
    int i, j = 0;
    for(i = (my_strlen(str1)); i < ((my_strlen(str1)-1)+(my_strlen(str2)-1)); i++)
    {
        str1[i] = str2[j++];
    }
}

//..........................7.....................

void my_strrev(char *str)
{
        char t;
        char temp[50];
        my_strcpy(str, temp);
        int len=(my_strlen(temp)-1);

         for (int i = 0; i < len; i++)
         {
                 t=temp[i];
                 str[i]=temp[len];
                 str[len]=t;

                len--;
         }
}

//..........................8.....................

char *my_strstr(char *main, char *sub)
{
    int match_l = 0;
    char *mp = main;

    while( *mp ) {
        if(*mp == *(sub + match_l) ) {
            match_l++;
            if(match_l == my_strlen(sub)) {
                return (char *)(mp-match_l + 1);
            }

        } else {
            match_l = 0;
        }
        *mp++;
    }

    return NULL;

}


