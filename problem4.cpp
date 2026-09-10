#include <iostream>

using namespace std;

int main(){
    int count;
    int result = 1;
    cin >> count;

    int (*input)[2] = new int[count][2];
    for(int i = 0;i < count; i++){
        cin >> input[i][0] >> input[i][1];
    }
    for(int i = 0;i < count; i++){
        for(int j = 0;j < count-i-1;j++){
            if(input[j][1] > input[j+1][1]){
                int temp = input[j][1];
                input[j][1] = input[j+1][1];
                input[j+1][1] = temp;

                temp = input[j][0];
                input[j][0] = input[j+1][0];
                input[j+1][0] = temp;
            }
        }
    }

    for(int i = 0;i < count; i++){
        int sec_index_value = input[i][1];
        int temp_result = 1;
        for(int j = 0;j < count; j++){
            if(sec_index_value <= input[j][0]){
                temp_result++;
                if(temp_result > result){
                    result = temp_result;
                }
                sec_index_value = input[j][1];
                j = -1;
            } else {
                continue;
            }
        }
    }


    cout << result << endl;

    delete[] input;
}