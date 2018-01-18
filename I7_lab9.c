#include <stdio.h>
#include <stdlib.h>

void shellSort(int a[], int length){
    int i;
    int j;
    int k;
    int aux;

    for(i=length/2;i>0;i=i/2){
        for (j=i;j<length;j++){
            for(k=j-i;k>=0;k=k-i){
                if(a[k+i]>=a[k])
                    break;
                else{
                    aux=a[k];
                    a[k]=a[k+i];
                    a[k+i]=aux;
                }
            }
        }
    }

}

int main(){
    int array[20];
    int i;
    int length;

    printf("Write the length of the array and the elements.\n");

    scanf("%d", &length);

    for(i=0;i<length;i++){
        scanf("%d", &array[i]);
    }

    shellSort(array, length);

    for(i=0;i<length;i++){
        printf("%d ", array[i]);
    }
}
