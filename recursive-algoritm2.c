#include <stdio.h>
int Sum_Calculation();
int sum = 0;

int main(){

    int ary[10] = {3, 1, 7, 4, 5, 10, 2, 8, 9, 6};
    int i = 0;

    printf("%d", Sum_Calculation(ary, i));

    return 0;
}

int Sum_Calculation(int ary[], int i){

    if(i==10)
        return sum;

    sum += ary[i];
    i++;
    Sum_Calculation(ary, i);

}