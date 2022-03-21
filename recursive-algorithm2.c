#include <stdio.h>
int Sum_Calculation();


int main(){

    int ary[] = {3, 1, 7, 4, 5, 10, 2, 8, 9, 6};
    int i = sizeof(ary)/sizeof(int);

    printf("%d", Sum_Calculation(ary, i));

    return 0;
}

int Sum_Calculation(int ary[], int n){

    int sum=0;

    if(n==1)
    {   
        sum += ary[0];
        return sum;
    }

    else
    {
        sum += ary[n-1];
        
        sum += Sum_Calculation(ary, n-1);

        return sum;
    }

}