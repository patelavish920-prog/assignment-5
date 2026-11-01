#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    len = strlen(str);

    if(str[len-1] == '\n')
        str[--len] = '\0';

    for(i = len-1; i >= 0; i--)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}
