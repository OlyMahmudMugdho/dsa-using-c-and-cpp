#include <iostream>
using namespace std;
int linear_search(int arr[],int length, int target){
    for(int i=0; i<length;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main() {
    int length, number, result;
    int nums[] = {2,4,6,8,10,12,14};
    length = sizeof(nums)/sizeof(nums[0]);
    number = 8;
    result = linear_search(nums, length, number);
    if(result==-1){
        cout<<number<<" is not in the array"<<endl;
    }
    else{
        cout<<number<<" is in the "<<result<<"-th position in the array"<<endl;
    }
    return 0;
}
