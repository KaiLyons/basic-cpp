#include <iostream>
// comment
using namespace std;

int main(){
    // prints a simple statement.
    cout << "Hello world" << endl;
    
    // variables
    const double PI = 3.14159;
    char myGrade = 'a';
    bool isHappy = true;
    int myAge = 16;
    float favNum = 345.009345;
    double otherFavNum = 123456789012345;

    // text output with variables
    cout << "I am " << myAge << " years old" << endl;
    cout << "Size of int " << sizeof(otherFavNum) << endl;
    cout << "(1 + 2) / 3 = " << (1 + 2) / 3 << endl;
    cout << "4 / 5 = " << (float) 4/5 << endl;
    
    // return 0 to basically make it run
    return 0;
}
