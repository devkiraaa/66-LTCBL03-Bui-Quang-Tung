#include <stdio.h>
#include <math.h>

      int main(){
            double a, b, c;
            scanf("%lf %lf %lf", &a, &b, &c);
            double x1, x2;
      if(a == 0){
            x1 = -c / b;
            printf("%lf", x1);
      }
      else{
            double delta = b * b - 4 * a * c;
            if(delta < 0){
                  printf("Phuong trinh vo nghiem");
            }
            else{
                  x1 = (- b - sqrt(delta)) / 2 * a;
                  x2 = (- b + sqrt(delta)) / 2 * a;
                  printf("%lf %lf", x1, x2);
            }
      }
      return 0;
      }
