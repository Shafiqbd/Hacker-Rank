#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int n, k;
    int maxAnd = 0;
    int maxOr = 0;
    int maxXor = 0;
    scanf("%d %d", &n, &k);
        for (int i = 1; i <=n; i++)
        {
            for(int j=i+1; j<=n; j++){
                if((i&j)>maxAnd && (i&j)<k){
                    maxAnd = i&j;
                }
                
                if((i|j)>maxOr && (i|j)<k){
                    maxOr = i|j;
                }
                if((i^j)>maxXor && (i^j)<k){
                    maxXor = i^j;
                }
            }
        }
        printf("%d\n", maxAnd);
        printf("%d\n", maxOr);
        printf("%d\n", maxXor);
        
    return 0;
}

