#include <iostream>

using namespace std;

int bubble_sort(int arr[], int size){
    bool sorted = false;
    while(sorted==false)
    {
        sorted = true;
        for(int i=0; i<(size-1); i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                sorted = false;
            }
        }
    }
    return *arr;
}
    
int main(){
    int nums[] = {4,6,2,8,9,7};
    int size = sizeof(nums)/sizeof(nums[0]);
    bubble_sort(nums,size);
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] <<" ";
    }
    cout << endl;
}