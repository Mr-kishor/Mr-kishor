#include<stdio.h>


void display(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void bubblesort(int A[],int n)
{
    int i,j;
    int temp;
    for(i=0;i<n-1;i++)  // no. of passes
    {
        for(j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
                // temp=A[j];
                // A[j]=A[j+1];
                // A[j+1]=temp;
            }
        }
    }
}

int main()
{
    int A[]={4,7,6,1,3,9,4,2,6,1,3,99,45,101,20,30};
    int n=sizeof(A)/sizeof(int);

    printf("Before sort : \n");
    display(A,n);
        
    printf("After sort : \n");
    bubblesort(A,n);
    display(A,n);

    return 0;
}