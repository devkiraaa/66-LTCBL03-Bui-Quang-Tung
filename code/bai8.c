#include <stdio.h>
#include <math.h>

      int main(){
            double a, b, c;
            scanf("%lf %lf %lf", &a, &b, &c);
            double C, S;
      if(a > 0 && b > 0 && c > 0){
            if(a + b > c && a + c > b && b + c > a){
                  double p = (a + b + c) / 2;
                  if(a == b && b == c){
                        printf("Tam giac deu\n");
                  }
                  else if(a == b || b == c || a == c){
                        printf("Tam giac can\n");
                  }
                  else if(a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a){
                        printf("Tam giac vuong\n");
                  }
                  else{
                        printf("Tam giac thuong\n");
                  }
                  C = a + b + c;
                  S = sqrt(p * (p - a) * (p - b) * (p - c));
            printf("%lf %lf", C, S);
            }
            else{
                  printf("Khong ton tai tam giac");
            }
      }
      else{
            printf("Khong ton tai tam giac");
      }
      return 0;
      }
