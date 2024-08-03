#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int number;
    scanf("%d", &number);
    int *arr = (int*)malloc(number * sizeof(int));
    int result = 0;
    for(int i = 0; i < number; i++){
        int n;
        scanf("%d", &n);
        arr[i] = n;
        result += n;
    }
    printf("%d", result);
    return 0;
}