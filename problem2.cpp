#include <iostream>

using namespace std;

int main(){
    double a,b;
    cin >> a >> b;
    double result = ((a * 2 ) / (1 + (a / b)));
    cout << result << endl;
}