#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long n;
    scanf("%lld", &n);
    
    for(long long i = 2; i * i <= n; i++){
        if(n%i==0){
            printf("BUKAN\n");
            return 0;
        }
    }
    
    printf("PRIMA");
    return 0;
}