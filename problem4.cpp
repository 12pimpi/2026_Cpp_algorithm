#include <iostream>

using namespace std;

void swapRow(int (*input)[2], int a, int b){
	int temp = input[a][1];
	input[a][1] = input[b][1];
	input[b][1] = temp;

	temp = input[a][0];
	input[a][0] = input[b][0];
	input[b][0] = temp;
}

int partition(int (*input)[2], int left, int right){
	int pivot = input[right][1];
	int i = left - 1;

	for(int j = left; j < right; j++){
		if(input[j][1] <= pivot){
			i++;
			swapRow(input,i,j);
		}
	}

	swapRow(input,i+1,right);
	return i + 1;
}

void quickSort(int (*input)[2], int left, int right){
	if(left >= right) return;

	int p = partition(input,left,right);

	swapRow(input,left,p-1);
	swapRow(input,p+1,right);
}

int main(){
	int count;
	cin >> count;
	int (*input)[2] = new int[count][2];
	
	for(int i = 0; i < count; i++){
		cin >> input[i][0] >> input[i][1];
	}

	quickSort(input, 0, count - 1);

    cout << "Sorted array : " << endl;
    for(int i = 0; i < count; i++){
        cout << input[i][0] << " " << input[i][1] << endl;
    }

	delete[] input;
}