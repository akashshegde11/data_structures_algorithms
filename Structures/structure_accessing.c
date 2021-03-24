#include<stdio.h>

struct point{
	int x;
	int y;
};

int main(){

	struct point p1;

	p1.x = 10;
	p1.y = 20;

	printf("Value of x = %d\nValue of y = %d\n", p1.x, p1.y);

	return 0;
}
