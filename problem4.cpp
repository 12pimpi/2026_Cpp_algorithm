#include <iostream>

using namespace std;

struct time_plan{
    int start_time;
    int end_time;
};

int main(){
    int count;
    int max_index_value = 0;
    cin >> count;

    int (*input)[2] = new int[count][2];
    for(int i = 0;i < count; i++){
        cin >> input[i][0] >> input[i][1];
    }
    for(int i = 0;i < count; i++){
        if(input[i][1] > max_index_value){
            max_index_value = input[i][1];
        } else if(input[i][0] > max_index_value){
            max_index_value = input[i][0];
        }
    }
    cout << max_index_value << endl;

    delete[] input;
}