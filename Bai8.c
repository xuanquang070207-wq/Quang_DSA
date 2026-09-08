// Viết chương trình giải phương trình bậc 2: ax2 + bx + c = 0 (a, b, c nhập từ bàn phím)
#include<stdio.h>
#include<math.h>

int main () {
    double a,b,c;
    printf("Nhap cac so a,b,c");
    scanf("%lf %lf %lf",&a, &b, &c);
    if ( b*b - 4*a*c <0 ) {
        printf("Phuong trinh vo nghiem");
    }
    else 
       if(b*b-4*a*c ==0) 
         printf("Phuong trinh co nghiem kep: %lf", -b/(2*a));
       else 
         printf("Phuong trinh co 2 nghiem phan biet: %lf va %lf", (-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
}