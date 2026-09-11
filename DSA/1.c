#include<stdio.h>
#define N 6
int main() {
   int k=0;
   int nums[N];
   int target;
   for (int i =0;i<N;i++){
      scanf("%d",&nums[i]);
   }
   scanf("%d",&target);
   int length= sizeof(nums)/sizeof(nums[0]);
   for (int i=0;i<length;i++){
       for (int j=i+1;j<length;j++){
          if(nums[i]+nums[j]==target){
            printf("Pair found: (%d,%d)\n",nums[i],nums[j]);
            k=1;
          }
       }
   } 
   if (k==0){
       printf("No pair found.\n");
   }
}