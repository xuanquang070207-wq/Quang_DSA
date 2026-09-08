//Viết chương trình nhập vào số x chỉ số đo của một góc, tính bằng phút. Cho biết nó thuộc góc vuông thứ bao nhiêu của vòng tròn lượng giác.
#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>
int main () {
    double x;
    printf("Nhap so do 1 goc tinh bang phut: ");
    scanf("%lf",&x);
    double a = ((x/60.0)/180.0)*M_PI;
    if(0<=a&&a<=M_PI/2.0) printf("Thuoc goc vuong thu I\n");
    if(1.5*M_PI<=a&&a<=2*M_PI) printf("Thuoc goc vuong thu II\n");
    if(M_PI<=a&&a<=1.5*M_PI) printf("ThM_uoc goc vuong thu III\n");
    if(M_PI/2.0<=a&&a<=M_PI) printf("Thuoc goc vuong thu IV\n");
    printf("%lf",cos(a));
}