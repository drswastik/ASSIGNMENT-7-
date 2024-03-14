#include <stdio.h>
void largest(int arr[],int m,int max,int i){
    i++;
    if (i==m){
        printf("Largest element is %d",max);
        return ;
    }
    
    if(arr[i]>max){
        max=arr[i];
    }
    largest(arr,m,max,i);
    return;
}
int main (){
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Enter the %dth element",i);
        scanf("%d",&arr[i]);
    }
    int j=0;
    int max=arr[j];
    largest(arr,n,max,j);
    return 0;
}