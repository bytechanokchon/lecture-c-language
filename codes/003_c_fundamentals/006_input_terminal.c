#include <stdio.h>

int main(void) 
{
    char str[100];
    int i;

    printf("Enter a value : ");
    scanf("%s %d", str, &i);

    printf("\nYou entered : %s %d", str, i);

    return 0;
}