#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a,b;
    cin >> a >> b;
    double result = ((a * 2 ) / (1 + (a / b)));
    result = round(result * 100) / 100;
    cout << result << endl;
}