#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int size = 2 * n -1;
  	// Complete the code to print the pattern.
    int index = n;
    int num;
      for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++){
            if(size - i > i) {
                num = n - i;
                if(index != num && size - j > j) {
                    num = n - j;
                    index -= 1;
            }
                if(index != num && size - j < j) {
                    num = num + j - size + 1 + i;
                    index -=1;
            }
                if(j >= size - i - 1) index += 1; 
            }else {
                num = n - (size - 1 - i);
                if(index != num && size - j > j) {
                    num = n - j;
                    index -= 1;
            }
                if(index != num && size - j < j) {
                    num = num + j - i;
                    index -=1;
            }
                if(j >= i) index += 1; 
            }
            // if(index != num && j < 4) {
            //     num = n - j;
            //     index -= 1;
            // }
            // if(index != num && j >= 4) {
            //     num = num + j - size + 1 + i;
            //     index -=1;
            // }
            // if(j >= size - i - 1) index += 1; 
            printf("%d ", num);
        }
        printf("\n");
        index = n;
        
      }
    return 0;
}