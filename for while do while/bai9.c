#include <stdio.h>

      int main(){
            long long n;
            scanf("%lld", &n);
            long long gt = 1;
            double tong = 0;
      for(long long i = 1; i <= n; i++){
            gt *= i;
            tong += 1.0 / gt;
      }
            printf("%lf", tong);
      }
