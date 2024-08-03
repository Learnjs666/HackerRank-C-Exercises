#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term (int n, int a, int b, int c) {
  //Write your code here.
  int sn = 0;
  int result = 0;
  if (n == 1) sn = a;
  else if (n == 2) sn = b;
  else if (n == 3) sn = c;
  else {
    for (int i = n - 3; i <= n - 1; i++) {
        if (i == 1) sn = a;
        else if (i == 2) sn = b;
        else if (i == 3) sn = c;
        else {
            sn = find_nth_term(i , a, b, c);
        }
        // sn += sn;
        result += sn;
        // printf("sn=%d\n", sn);
        }
   }
   if(result == 0) result = sn;
   
  return result;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}