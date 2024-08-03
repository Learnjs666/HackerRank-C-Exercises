#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c;
    scanf("%c", &c);
    char s1[10];
    scanf("%10s", s1);
    scanf("\n");
    char s2[100];
    scanf("%[^\n]%*c", s2);

    printf("%c\n", c);
    printf("%s\n", s1);
    printf("%s\n", s2);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}