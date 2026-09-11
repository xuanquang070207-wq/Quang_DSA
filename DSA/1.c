#include<stdio.h>
#define N 6
int main()
{
    int k=0;
    int nums[N];
    int target;
    for (int i=0;i<N;i++)
    {
        scanf("%d",&nums[i]);
    }
    scanf("%d",&target);
    for (int i=0;i<N;i++) {
        for (int j=i+1;j<N;j++) {
            if (nums[i]+nums[j]==target) {
                printf("%d %d\n",i,j);
                k=1;
            }
        }
    }
    if (k==0) {
        printf("No two sum found\n");
    }
    return 0;
}