#define N 5
#include <iostream>
#include <vector>
using namespace std;

// binary search
int binarySearch(int first, int last, int arr[], int e){
    int mid = (first + last) / 2;
    if(e == arr[mid]){
        cout<<"Element found at index "<<mid<<endl;
    }
    else if(e > arr[mid]){
        return binarySearch(mid + 1, N, arr, e);
    }
    else if(e < arr[mid]){
        return binarySearch(first, mid - 1, arr, e);
    }
    else{
        return -1;
    }
}


int main(){
    int arr[N], e, first = 0, last = N;
    
    // taking elements in the array
    for(int i = 0; i < N; i++){
        cout<<"Enter element "<<(i + 1)<<": ";
        cin>>arr[i];
    }
    
    // taking element that is to be searched
    cout<<"Enter the element that you want to search: ";
    cin>>e;
    
    if(binarySearch(first, last, arr, e) == -1){
        cout<<"Element not found \n";
    }
    else{
        binarySearch(first, last, arr, e);
    }
    
    return 0;
}
