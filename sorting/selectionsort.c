#include<stdio.h>
void printArray(int *A,int n){
    for(int i=0;i<n;i++){
    printf("%d ",A[i]);
    }
    printf("\n");
}
void SelectionSort(int *A,int n){
    int iMin, temp;//imin->index of min...
    for(int i=0;i<n-1;i++){
        iMin=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[iMin]){
                iMin=j;
            }
            //swapping
            temp=A[i];
            A[i]=A[iMin];
            A[iMin]=temp;

        }
    }
}
int main(){
    //A[]={12,4,67,2,10};
    //n=5;
    int n,A[100];
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter actual elements:\n");
    for(int i=0;i<n;i++){
      scanf("%d",&A[i]);
    }
    printArray(A,n);
    SelectionSort(A,n);
    printArray(A,n);
return 0;
}