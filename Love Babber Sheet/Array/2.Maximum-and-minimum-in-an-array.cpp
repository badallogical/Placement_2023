#include<iostream>
using namespace std;

struct Pair
{
    int min;
    int max;
};

Pair getMinMax(int arr[], int n){

    Pair res;
    if( n == 1 ){
        res.min = arr[0];
        res.max = arr[1];
    }

    // Initialize min and max
    if( arr[0] > arr[1]){
        res.min = arr[1];
        res.max = arr[0];
    }else{
        res.min = arr[0];
        res.max = arr[1];
    }

    for( int i = 2; i < n; i++ ){
        if( arr[i] > res.max ){
            res.max = arr[i];
        }

        if( arr[i] < res.min ){
            res.min = arr[i];
        }
    }

    return res;
}

int main(){
    int arr[] = {1,4,2,4,1,3,5,7,0,9};
    int size = sizeof(arr)/ sizeof(int);
    Pair p = getMinMax(arr,size);
    cout << "Max : " << p.max << " , Min : " << p.min << endl;
    return 0; 
}