#include <stdio.h>

      int main(){
            long long n;
            scanf("%lld", &n);
            double tong = 0;
      for(long long i = 1; i <= n; i++){
            tong += 1.0 / i;
      }
      printf("%lf", tong);
      return 0;
      }
