#include <iostream>

using namespace std;

int main(){
    int randNum = (rand() % 100) + 1;

    while(randNum != 100){
        cout << randNum << ", ";
        randNum = (rand() % 100) + 1;
    }

    cout << "100" << endl;

    return 0;
}
