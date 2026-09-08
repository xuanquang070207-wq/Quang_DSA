#include<stdio.h>

int main () {
    int n;
    int k=0;
    printf("Nhap so: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
      if(n%i==0) {
        printf("%d ",i);
        s+=i;
        k+=1;
      }
    }
    printf("Co %d uoc, tong la %d",k,s);
}