#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int found=0,i,target=30,val;
    for(int i=0;i<5;i++){
        if(arr[i]==target){
            found=1;
            val=i;
        }
    }
    if(found){
        printf("Target Found at a position %d",val);
    }
    else{
        printf("Target not Found");
    }
    return 0;
}