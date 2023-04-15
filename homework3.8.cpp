#include <stdio.h>

main() {
	int a, i,min,max,sum, b;
	sum = 0;
	max = 0;
	min = 0;
	float arf;
	printf("Choose number of digitals:  ");
	scanf("%i", &a);
	int start;
	printf("Ur first number: ");
	scanf("%i", &start);
	min = start;
	max = start;
	if(a>0) {
		for(i=1; i<a; i++) {
			printf("Place ur next number: ");
			scanf("%i", &b);
			if(b < min) {
				min = b;
			} else if (b > max) {
				max = b;
			}
			sum = sum + b;
		}
		sum += start;
		printf("Summ = %i\n arifmeti4eskoe = %f\n max = %i\n min = %i", sum, arf=(float)sum/(float)a, max, min);
	} else {
		printf("wront type of data");
	}
}
