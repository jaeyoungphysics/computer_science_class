#include <iostream>
using namespace std;

#include "example61.h"

int main() {
	int int1,int2,int3;
	cout << "Input three integer values: ";
	cin >> int1 >> int2 >> int3;
	cout << "maximum among three integers:" << maximum(int1,int2,int3);
	
	double dou1,dou2,dou3;
	cout << "\nInput three double values: ";
	cin >> dou1 >> dou2 >> dou3;
	cout << "maximum among three doubles:" << maximum(dou1,dou2,dou3);

	char cha1,cha2,cha3;
	cout << "\nInput three characters:";
	cin >> cha1 >> cha2 >> cha3;
	cout << "maximum character value is: "<< maximum(cha1,cha2,cha3);	

    cout << endl;
	return 0;
}

