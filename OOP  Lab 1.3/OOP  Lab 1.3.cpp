#include <iostream>
#include "VectorN.h"

using namespace std;

VectorN CreateVector() {
	VectorN vector;
	vector.Read();
	return vector;
}
int main() {
	VectorN vector1 = CreateVector();
	

	VectorN vector2 = CreateVector();

	if (vector1.isShorterThan(vector1, vector2)) {
		cout << "Yes, vector 1 is shorter" << endl;
	}
	else { 
		cout << "No, vector 1 is longer" << endl;
	}

	vector1.toString();

	vector1.clear();
	vector2.clear();
	return 0;
}