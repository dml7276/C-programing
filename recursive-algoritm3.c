#include <stdio.h>
void Selection_Sort();

int main(){

    int ary[10] = {3, 1, 7, 4, 5, 10, 2, 8, 9, 6};
    int i = 0, j = 1;
    int k;


    Selection_Sort(ary, i, j);

    for(k=0;k<10;k++)
        printf("%d ", ary[k]);

    return 0;
}


void Selection_Sort(int A[], int i, int j){
    
    int indexMin = i;

    if(indexMin>6&&j>8)
        return;

    if(j==10)
        j = indexMin + 1;

    if(A[indexMin] > A[j])
    {
        int temp = A[indexMin];
        A[indexMin] = A[j];
        A[j] = temp;
        if(j<10)
            j++;
    }

    if(j==9)
        i++;

    Selection_Sort(A, i, j);


}

