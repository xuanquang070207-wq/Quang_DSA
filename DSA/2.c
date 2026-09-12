#include<stdio.h>

void solve(int nums[], int n) {
    for (int i=0;i<n;i++) {
        int sum=nums[i];
        for (int j=i+1;j<n;j++) {
            sum+=nums[j];
            if (sum==0) {
                printf("[");
                for (int m=i;m<=j;m++){
                    printf("%d ",nums[m]);
                }
                printf("]\n");
            }
        }
    }
}
int main () {
    int nums[]={3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int n=sizeof(nums)/sizeof(nums[0]);
    solve(nums,n);
    return 0;
}