#include <stdio.h>
int Min_Calculation();

int main(){

    int ary[] = {3, 1, 7, 4, 5, 10, 2, 8, 9, 6};
    int i = sizeof(ary)/sizeof(int);

    printf("%d", Min_Calculation(ary, i));

    return 0;
}

int Min_Calculation(int ary[], int n){

    if(n==1)
        return ary[0];
        
    else
    {
        int min = Min_Calculation(ary+1, n-1);

        if(min>ary[0])
            return ary[0];
        else
            return min;
    }

}