#include <stdio.h>
#include <string.h>
 

int main()
{
    char str[100];
    printf("Enter the value of a in string:\t") ;
    scanf("%s", str) ;
 

    // Returns first token 

    char *token = strtok(str, "-");

   

    // Keep printing tokens while one of the

    // delimiters present in str[].

    while (token != NULL)

    {

        printf("%s\n", token);

        token = strtok(NULL, "-");

    }
 

    return 0;
}
