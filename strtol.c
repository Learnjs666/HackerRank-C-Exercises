#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p;
    const char word [] = {'2','4','5','\0'};
    char *endptr;
    long int num;
    num = strtol(word, &endptr, 10); 
    if(endptr == word){
        printf("No digits\n");
    }
    else if(*endptr != '\0'){
        printf("Invalid character\n");
    }
    else{
        printf("This is %ld\n", num);
    }
    printf("%d", *endptr);
    return 0;
}