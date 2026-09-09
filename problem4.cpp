#include <iostream>

using namespace std;

struct time_plan{
    int start_time;
    int end_time;
};

int main(){
    int count;
    int second_index_value = 0;
    int result = 0;
    cin >> count;

    int (*input)[2] = new int[count][2];
    for(int i = 0;i < count; i++){
        cin >> input[i][0] >> input[i][1];
    }
    for(int i = 0;i < count; i++){
        int sec_index_value = input[i][1];
        int temp_result = 1;
        for(int j = 0;j < count; j++){
            if(sec_index_value <= input[j][0]){
                temp_result++;
                sec_index_value = input[j][1];
                j = -1;
                if(temp_result > result){
                    result = temp_result;
                }
            } else {
                continue;
            }
        }
    }


    cout << result << endl;

    delete[] input;
}