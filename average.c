#include<stdio.h>

int main(){
    int size;
    scanf("%d",&size);

    int* ptr;
    ptr = (int*)malloc(size * sizeof(int));
    if(ptr == NULL){
        printf("Memory Not Allocated");
    }else{
        for(int i = 0;i<size;i++){
            scanf("%d",&ptr[i]);
        }

        double avg = 0;

        for(int i = 0;i<size;i++){
            avg+=ptr[i];
        }

        avg = avg/size;

        printf("Average is %f",avg);
    }
    return 0;
}
