#include <iostream>
using namespace std;


int main() {
  
long value1{200000};
long value2{0};
long* longPtr;
  
longPtr = &value1;

cout << "value pointed to by LongPtr: " << longPtr; 


value2 = *longPtr; 
  

  
}