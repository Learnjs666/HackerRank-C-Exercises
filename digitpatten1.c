#include <stdio.h>

void printPattern(int n) {
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // 计算当前坐标(i, j)所需的数字
            int minDist = i < size - i ? i : size - i - 1;
            int minDist2 = j < size - j ? j : size - j - 1;
            int num = n - (minDist < minDist2 ? minDist : minDist2);
            printf("%d ", num);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}
