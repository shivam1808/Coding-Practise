#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] == key)
            return mid;
        if(arr[mid] < key){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[6] = {2,4,6,8,10,12};
    int index = binarySearch(arr, 6, 12);

    cout<<"Index = "<<index<<endl;
}