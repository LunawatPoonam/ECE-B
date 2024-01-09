#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int collatz(int);
int main() {
    int t,num;
    scanf("%d",&t);
    for(int i = 0; i<t;i++){
        scanf("%d\n",&num);
        int res = collatz(num);
        printf("%d\n",res);
    }    
    return 0;
}
int collatz(int n){
    int count = 0, largest = 0, largest_i = 0;
    for(int i = n; i >= 1; i--){
        int j = i;
        count = 0;
        while(j != 1){
            if(j % 2 == 0){
                j = j / 2;
            }
            else{
                j = 3 * j + 1;
            }
            count++;
        }
        if(count > largest){
            largest = count;
            largest_i = i;
        }
    }
    return largest_i;
}