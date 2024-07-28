#include <iostream>
using namespace std;

void rotate1(int* a, int* b, int* c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

void rotate2(int& a, int& b, int& c) {
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

int main() {
    int a = 1, b = 2, c = 3;

    cout << "Initial values: a = " << a << ", b = " << b << ", c = " << c << endl;

    rotate1(&a, &b, &c);
    cout << "After rotate1: a = " << a << ", b = " << b << ", c = " << c << endl;

    a = 1, b = 2, c = 3;
    rotate2(a, b, c);
    cout << "After rotate2: a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}
