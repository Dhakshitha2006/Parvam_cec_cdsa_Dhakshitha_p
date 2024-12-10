#include<stdio.h>
int main(){
    int size;
    printf("enter the number of elements:");
    scanf("%d",&size);
    int arr0fnum[size];
    printf("enter %d elements into an array:",size);
    for(int i=0; i<size; i++){
        scanf("%d",&arr0fnum[i]);
    }
    int max,min;
    max=min=arr0fnum[0];
    printf("the largest element in the given array is:");
    for(int i=0; i<size; i++){
        if(arr0fnum[i]>max){
            max=arr0fnum[i];
        }
        if(arr0fnum[i]<min){
            min=arr0fnum[i];
        }
    }
    printf("the largest element in the given array is: %d\n",max);
    printf("the smallest element in the given array is: %d\n",min);
}