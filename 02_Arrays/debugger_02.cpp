#include<bits/stdc++.h>
using namespace std;

void sort0sand1s(int input[], int size){
	int nextZero = 0;
	for(int i=0; i<size; i++){
		if(input[i] == 0){
			int temp = input[nextZero];
			input[nextZero] = input[i];
			input[i] = temp;
            nextZero++;
		}
	}
}

int main(){

    int arr[]={0,1,1,0,1,0,0,0,1};
    int size= sizeof(arr)/sizeof(arr[0]);

    sort0sand1s(arr,size);
    for(auto i:arr){
        cout<<i<<" ";
    }

return 0;
}