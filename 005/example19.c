#include <stdio.h>
int main() {
	char a;
	printf("  Input character: \n");
	a = getchar();
	int b = CharIntoInt(a); 
	printf("  %c (%d bytes) %d (%d bytes)\n",a,sizeof(a),b,sizeof(b));
	return 0;
}

