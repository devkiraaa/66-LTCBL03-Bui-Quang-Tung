#include <stdio.h>

      int main(){
            double a, b, c, d, e, f;
            printf("Nhap cac he so cua he phuong trinh\n");
            scanf("%lf %lf %lf\n%lf %lf %lf", &a, &b, &c, &d, &e, &f);
      if(a / d == b / e  && a / d == c / f){
            printf("He phuong trinh vo so nghiem");
      }
      else if(a / d ==  b / e && a / d != c / f){
            printf("He phuong trinh vo nghiem");
      }
      else{
            double y = (c * d - f * a) / (b * d - e * a);
            double x = (c - b * y) / a;
            printf("Nghiem cua he phuong trinh la (%lf , %lf)", x, y);
      }
      return 0;
      }
