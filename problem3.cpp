#include <iostream>

using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int result = 0;
    for(int i = 0;i <= b; i++){
        if(i % c == 0 || i % d == 0){
            result += i;
        }
    }
    cout << result << endl;
}