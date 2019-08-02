#include <iostream>

using namespace std;

int main(){
    int myArray[5] = {1, 3, 5, 7, 9};
    char wordArray[5] = {'L', 'y', 'o', 'n', 's'};
    cout << "first letter in array: " << wordArray[0] << endl;
    cout << "last letter in array " << wordArray[4] << endl;
    cout << "first number in array " << myArray[0] << endl;
    cout << "last number in array " << myArray[4] << endl;
    cout << "doing myArray[0-4] " << myArray[0-4] << endl;

    return 0;
}
