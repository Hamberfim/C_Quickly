#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "No time like the present."; // phrase to search
    char sub[] = "time";                      // what to search for

    if (strstr(str, sub) == NULL)
    {
        printf("Sub string \"%s\" not found\n", sub);
    }
    else
    {
        printf("Substring \"%s\" found at %p\n", sub, strstr(str, sub));
        printf("Elements index number %ld\n", strstr(str, sub) - str);
    }

    return 0;
}