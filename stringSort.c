#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    char *str1, *str2;
    str1 = a;
    str2 = b;
    if(strcmp(str1, str2) <= 0) {
        return -1;
    }
    return 1;
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    char *str1, *str2;
    str1 = a;
    str2 = b;
    if(strcmp(str1, str2) < 0) {
        return 1;
    }
    return -1;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int str1[26] = {0}, str2[26] = {0};
    int count_a = 0, count_b = 0;
    for(int i = 0; i < strlen(a); i++) {
        if(str1[a[i] - 'a'] == 0) {
            count_a++;
            str1[a[i] - 'a'] = 1;
        }
    }
    for(int i = 0; i < strlen(b); i++) {
        if(str2[b[i] - 'a'] == 0) {
            count_b++;
            str2[b[i] - 'a'] = 1;
        }
    }
    return (count_a == count_b) ? strcmp(a, b) : count_a - count_b;
}

int sort_by_length(const char* a, const char* b) {
    char *str1, *str2;
    str1 = a;
    str2 = b;
    if(strlen(str1) > strlen(str2)) {
        return 1;
    }
    else if(strlen(str1) == strlen(str2)) {
        if(strcmp(str1, str2) <= 0) {
            return -1;
        }
        else {
            return 1;
        }
    }
    else {
        return -1;
    }
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int n = len, i, j, preindex;
    char **str_arr = arr;
    for(i = 1; i < n; i++) {
        char *current = str_arr[i];
        preindex = i - 1;
        while(preindex >= 0 && cmp_func(str_arr[preindex], current) > 0) {
            str_arr[preindex + 1] = str_arr[preindex];
            preindex--;
        }
        str_arr[preindex + 1] = current;
    }
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}