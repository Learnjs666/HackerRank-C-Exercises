#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1000];
    scanf("%1000s", s);
    int result[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < strlen(s); i++) {
        
        if(s[i] == '0') ++result[0];
        else if(s[i] == '1') ++result[1];
        else if(s[i] == '2') ++result[2];
        else if(s[i] == '3') ++result[3];
        else if(s[i] == '4') ++result[4];
        else if(s[i] == '5') ++result[5];
        else if(s[i] == '6') ++result[6];
        else if(s[i] == '7') ++result[7];
        else if(s[i] == '8') ++result[8];
        else if(s[i] == '9') ++result[9];
    }    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", result[i]);
    }
    
    return 0;
}
