//Check if a subarray with 0 sum exists or not
#include<stdio.h>
bool solve(int nums[], int n) {
    for (int i=0;i<n;i++) {
        int sum=nums[i];
        for (int j=i+1;j<n;j++) {
            sum+=nums[j];
            if(sum==0){
                return true;
            }
            }
        }
    return false;
}
int main () {
    int nums[]={3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int n=sizeof(nums)/sizeof(nums[0]);
    solve(nums,n)? printf("Subarray with zero-sum exists\n"): printf("Subarray with zero-sum does not exist\n");
    return 0;
}