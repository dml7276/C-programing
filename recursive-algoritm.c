#include <stdio.h>
int Min_Calculation();
int min;

int main(){

    int ary[10] = {3, 1, 7, 4, 5, 10, 2, 8, 9, 6};
    int i = 0;

    printf("%d", Min_Calculation(ary, i));

    return 0;
}

int Min_Calculation(int ary[], int i){

    if(i==0)
        min = ary[i];
    i++;
    if(i==10)
        return min;

    if(min > ary[i]){
        min = ary[i];
        Min_Calculation(ary, i);
    }
    else
        Min_Calculation(ary, i);

}