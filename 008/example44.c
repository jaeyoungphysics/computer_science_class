#include <stdio.h>

union Point {
	struct {
		unsigned short x,y;
	} point;
	unsigned long location;
};

int main() {
	union Point u = {{100,50}};
	printf("x = %d : y = %d\n",u.point.x,u.point.y);
	printf("location %lu : location X = %d : location Y = %d\n",
		u.location,(short)u.location,(short)(u.location >> 16));
	return 0;
}

