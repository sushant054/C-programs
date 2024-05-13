#include<stdio.h>
void printArray(int *A, int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);

    }
    printf("\n");
}
int partition(int A[], int low, int high){
    int pivot = A[low];
    int i=low + 1;
    int j=high;
    int temp;
    do {
        while (A[i] <= pivot && i <= high) {
            i++;
        }
        while (A[j] > pivot && j >= low) {
            j--;
        }
        if(i < j) {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while(i <= j);
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;  
}
void quickSort(int A[],int low ,int high)
{
    //index of pivot after partition
    int partitionIndex;
    if(low<high)
    {
        partitionIndex=partition(A,low,high);
        quickSort(A,low,partitionIndex-1);
        quickSort(A,partitionIndex+1,high);

    }
}
int main(){
    //    int A[100],i,n;
    // printf("Enter the size of array:");
    // scanf("%d",&n);
    // printf("Enter actual element:");
    // for(i=0;i<n;i++){
    //     scanf("%d",&A[i]);
    // }
    int A[]={12,13,14,9,11};
    int n=5;
    printArray(A,n);
    
    quickSort(A, 0 , n-1);
    printArray(A,n);
return 0;

}