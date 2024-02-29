#include "VectorN.h"
#include <iostream>
#include <string>

using namespace std;

void VectorN::getValues() {
    for (int i = 0; i < N; i++) {
        cout << "Enter value: "; cin >> a[i];
    }
}

void VectorN::print() const {
    cout << "(";
    for (int i = 0; i < N - 1; i++) {
        cout << a[i] << ", ";
    }
    cout << a[N - 1] << ")" << endl;
}

void VectorN::multscal(int value) {
    for (int i = 0; i < N; i++) {
        a[i] *= value;
    }
}

double VectorN::length() const {
    double sum = 0;
    for (int i = 0; i < N; i++) {
        sum += a[i] * a[i];
    }
    return sqrt(sum);
}

bool VectorN::isShorterThan(const VectorN vector1, const VectorN vector2) const {
    return vector1.length() < vector2.length();
}


bool VectorN::Init(int N) {
    return N > 0;
}


void VectorN::Display() const{
    getN();
    print();
    length();
}

std::string VectorN::toString() const {
    cout << "(";
    for (int i = 0; i < N; i++) {
        cout << "'" << a[i] << "'";
        if (i < N - 1) cout << ", ";
    }
    cout << ")" << endl;
    return "";
}

void VectorN::Read() {
    int value;
    cout << "Enter vector length: "; cin >> value; 
    if (Init(value)) {
        setN(value);
    }
    else { cout << "Unaccaptable value";  exit(0); }
    a = new double[N];
    getValues();
    Display();
    int value1;
    cout << "Enter a const for scalar: "; cin >> value1; multscal(value1);
    Display();
}

void VectorN::clear() {
    delete[] a;
}

