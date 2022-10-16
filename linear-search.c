#include <stdio.h>

int linear_search(int arr[],int l, int x){
    for(int i=0; i<l;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
int main() {
    int nums[] = {1,3,5,7,9,11,13,15};
    int length = sizeof(nums)/sizeof(nums[0]);
    int to_find = 7;
    int result = linear_search(nums,length,to_find);
    if(result != -1){
        printf("%d is in the %d-th index of the array\n",to_find, result);
    }
    else{
        printf("%d is not in the array\n",to_find);
    }
    return 0;
}
