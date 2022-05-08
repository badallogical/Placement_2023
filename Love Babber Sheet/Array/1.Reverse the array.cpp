#include<iostream>
using namespace std;

void rvereseArray(int arr[], int size){

    for( int i = 0, j = size - 1; i < size / 2; i++, j-- ){
        swap(arr[i], arr[j]);
    }

}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    
    int size = sizeof(arr)/ sizeof(int);
    rvereseArray(arr,size);

    for( int i = 0; i < size; i++ ){
        cout << arr[i] << " ";
    }

    return 0;
}