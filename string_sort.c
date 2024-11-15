#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{   
    
	/**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/
    int result = 1, k = -1, l, i, j;
	//找出最后组前面大于后面的紧挨的一组中的第一个的下标(k后从大到小)
	for(i = 0; i < n - 1; i++) {
		if(strcmp(s[i], s[i + 1]) < 0) {
			k = i;
		}
	}
	if(k == -1) return 0;
	//找出大于索引为k中最小的字符串索引
	for(i = k + 1; i < n; i++) {
		if(strcmp(s[k], s[i]) < 0) {
			l = i;
		}
	}
	//交换两个数
	char *temp = s[k];
	s[k] = s[l];
	s[l] = temp;
	//将k后面的数从小到大排列
	i = k + 1;
	j = n - 1;
	while(i < j) {
		temp = s[i];
		s[i++] = s[j];
		s[j--] = temp;
	}
	return 1;

}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}