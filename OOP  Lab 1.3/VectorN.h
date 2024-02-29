#pragma once
#include <string>

class VectorN {
private:
	int N; 
	double *a;
public:
	void getValues();
	void print() const;
	void multscal(int value);
	double length() const;
	bool isShorterThan(const VectorN vector1, const VectorN vector2) const;

	bool Init(int N);
	void Read();
	void Display() const;
	
	void clear();

	int getN() const { return N; };
	void setN(int value) { N = value; };
	std::string toString() const;
};