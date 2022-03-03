#include <stdio.h>
#include <string.h>

int main()
{
    char string1[20];
    char string2[20] ;

    printf("Enter the first string :");
    scanf("%s",string1);
    printf("Enter the second string :");
    scanf("%s",string2);

    int value = strcmp(string1,string2);

    if (value==0){
        printf("Strings are same");
    }
    else
        printf("string are not same");
    return 0;
}
