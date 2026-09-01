#include <iostream>

using namespace std;

int main(){
    int input;
    cin >> input;
    for(int i = 1; i < 10; i++){
        cout << input << " * " << i << " = " << input * i << endl;
    }
}