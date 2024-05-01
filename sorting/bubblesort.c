#include<stdio.h>
//Bubble sort....
void printArray(int *A , int n){ 
for(int i=0; i<n; i++){
    printf("%d ",A[i]);
}
printf("\n");
}
void bubbleSort(int *A, int n){
    int temp;
    for(int i=0;i<n-1;i++)//no. of passes
    {
        for (int j=0;j<n-1-i;j++)//comparision of each pass
       if(A[j]>A[j+1]) 
       {//swapping
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
    }
}
int main(){
    int A[100],i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter actual element:");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }

  //  int A[]={12,18,7,23,8,45};
   // int n=6;

    printArray(A,n);//before sorting
    bubbleSort(A,n);//sorted array
    printArray(A,n);//after sorting
    
    
}