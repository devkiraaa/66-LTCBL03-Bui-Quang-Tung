#include <stdio.h>

      int main(){
            long long n;
            scanf("%lld", &n);
            long long tong = 0;
      for(long long i = 1; i <= n; i++){
            if(n % i == 0){
                  tong += i;
            }
      }
            if(n == tong * 2){
                  printf("So hoan hao");
            }
            else{
                  printf("Khong la so hoan hao");
            }
            return 0;
      }
