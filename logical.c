#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int add = 0, or = 0, xor = 0;
  for(int i = 1; i <= n; i++) {
    for(int j = i + 1; j <= n; j++) {
        if ((add < (i & j)) && ((i & j) <k))
        {
            add = i & j;
        }
        if (add < (i | j) && (i | j) <k)
        {
            or = i | j;
        }
        if (add < (i ^ j) && (i ^ j) <k)
        {
            xor = i ^ j;
        }
    }
  }
  printf("%d\n", add);
  printf("%d\n", or);
  printf("%d\n", xor);

}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
