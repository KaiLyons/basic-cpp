#include <iostream>

using namespace std;

int main(){
    int age = 70;
    int ageToDrive = 16;
    bool isNotIntoxicated = true;

    if((age >= 1) && (age < 16)){
        cout << "Not of age" << endl;
    } else if ((age > 16)){
        cout << "Of age" << endl;
    } else if(age < 1){
        cout << "Little baby can't drive" << endl;
    }

    if(isNotIntoxicated == true){
        cout << "Drive away" << endl;
    } else {
        cout << "Call a taxi" << endl;
    }
    
}
