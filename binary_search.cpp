#include <iostream>
using namespace std;
int binary_search(int arr[], int length, int number){
    int low = 0;
    int high = length - 1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==number){
            return mid;
        }
        else if(arr[mid]>number){
            high = mid - 1;
        }
        else if(arr[mid]<number){
            low = mid + 1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,5,7,9,12,14,16,18,20,13,15,26,30};
    int length = sizeof(arr)/sizeof(arr[0]);
    int num = 14;
    int result = binary_search(arr,length, num);
    if(result!=-1){
        cout<<num<<" is in the "<<result<<"-th index in the array"<<endl;
    }
    else{
        cout<<num<<" is not in the array"<<endl;
    }
    return 0;
}
