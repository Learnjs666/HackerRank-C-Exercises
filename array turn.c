#include <stdio.h>
#include <stdlib.h>
void swap(int number, int* arr);
int main()
{
    int num, * arr, i;
    scanf_s("%d", &num);
    arr = (int*)malloc(num * sizeof(int));
    for (i = 0; i < num; i++) {
        scanf_s("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    swap(num, arr);

    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
void swap(int number, int* arr) {
    int i;
    int end = number - 1;
    for (i = 0; i < number / 2; i++, end--) {
        int t = arr[i];
        arr[i] = arr[end];
        arr[end] = t;
    }
}