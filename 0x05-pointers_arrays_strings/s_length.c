#include"main.h"

size_t s_length(const char *s)
{
    int length = 0; 

    while(s[length] != '\0')
    {
        ++length;
    }
    return length;
}