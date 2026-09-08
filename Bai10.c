#include<stdio.h>
#include<stdio.h>

int main () {
    unsigned x,w,d,h;
    while(1){
    printf("Nhap so gio: \n");
    scanf("%u",&x);
    if(x==0) {
      break;
    }
    h= x%24;
    d=(x/24)%7;
    w=(x/24)/7;
    printf("%u tuan %u ngay %u gio\n",w,d,h);

    }
}