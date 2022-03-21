#include <stdio.h>
int Selection_Sort();
int* Min_Address();
int Swaping_Min();

int main(){

    int ary[] = {3, 1, 7, 4, 5, 10, 2, 8, 9, 6};
    int i = sizeof(ary)/sizeof(int);

    Selection_Sort(ary, i);
   
    for(int j=0;j<i;j++)
        printf("%d ", ary[j]);
}

int Selection_Sort(int ary[], int n)
{
    int *min;

    if(n==1)
        return ary[0];

    else
    {
        min = Min_Address(ary, n);
        Swaping_Min(ary, min);
        return Selection_Sort(ary+1, n-1);
    }

}

int* Min_Address(int ary[], int n){

    if(n==1)
        return ary;
        
    else
    {
        int *min = Min_Address(ary+1, n-1);

        if(*min>ary[0])
            return ary;
        else
            return min;
    }

}

int Swaping_Min(int *ary, int *a)
{
    int temp;
    temp = *a;
    *a = *ary;
    *ary = temp; 
}