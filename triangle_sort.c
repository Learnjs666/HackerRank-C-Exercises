#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
double squart(triangle triangle)
{
    double p = (triangle.a + triangle.b + triangle.c) / 2.0;
    double s = sqrt(p * (p - (triangle.a)) * (p - (triangle.b)) * (p - (triangle.c)));
    return s;
}
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/

    // double *s = (double*)malloc(n * sizeof(double));
        
    // for (int i = 0; i < (n); i++) {
    //     double p = 0.0;
    //     p = ((tr[i].a) + (tr[i].b) + (tr[i].c))/2.0;
    //     s[i] = sqrt(p * (p - (tr[i].a)) * (p - (tr[i].b)) * (p - (tr[i].c)));
    // }
    
    // // Bubble sort to sort triangles by area
    // for (int i = 0; i < (n - 1); i++) {
    //     for (int j = 0; j < (n - i - 1); j++) {
    //         if (s[j] > s[j + 1]) {
    //             double temp_area = s[j];
    //             s[j] = s[j + 1];
    //             s[j + 1] = temp_area;
                
    //             // Swap the corresponding triangles
    //             triangle temp = tr[j];
    //             tr[j] = tr[j + 1];
    //             tr[j + 1] = temp;
    //         }
    //     }
    // }

    //my code
    int tap;
    for(tap = n / 2; tap > 0; tap /= 2)
    {
        for(int i = tap; i < n; i++)
        {
            for(int j = i - tap; j >= 0 && squart(tr[j]) > squart(tr[j+tap]); j -= tap)
            {   
                triangle temp = tr[j];
                tr[j] = tr[j+tap];
                tr[j+tap] = temp;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
        // printf(" s = %.2lf", squart(tr[i]));
	}
	return 0;
}