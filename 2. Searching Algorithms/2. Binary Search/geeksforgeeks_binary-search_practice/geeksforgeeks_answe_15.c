#include <stdio.h>

float mult(double N, int n){
    float ans = 1;
    for(int i = 0; i < n; i++){
        ans *= N;
    }

    return ans;
}


int main(){
    int N;
    scanf("%d", &N);
    int n;
    scanf("%d", &n);

    float low, high;

    if(N < 1){
        low = N;
        high = 1;
    }
    else{
        low = 1;
        high = N;
    }


    while((high - low) >= 0.0001){
        double mid = low + (high - low) / 2.0;

        if(mult(mid, n) > N){
            high = mid;
        }
        else{
            low = mid;
        }
    }
    printf("%.3f", low);


    return 0;
}
