#include <stdio.h>

      int main(){
            long long n;
            scanf("%lld", &n);
            long long dem = 0;
      for(int i = 1; i <= n; i++){
            if(n % i == 0){
                  ++dem;
            }

      }
      if(dem == 2){
                        printf("So nguyen to");
                  }
                  else{
                        printf("Khong la so nguyen to");
                  }
                  return 0;
}
