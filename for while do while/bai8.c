#include <stdio.h>

      int main(){
            long long n;
            scanf("%lld", &n);
            long long gt = 1;
      for(long long i = 1l; i <= n; i++){
            gt *= i;
      }
      printf("%lld", gt);
      return 0;
      }
