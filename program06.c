#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, 100, stdin);

    printf("Enter second string: ");
    fgets(str2, 100, stdin);

    if(strcmp(str1, str2) == 0)
        printf("Both strings are same");
    else if(strcmp(str1, str2) > 0)
        printf("First string is greater");
    else
        printf("Second string is greater");

    return 0;
}
