#include<stdlib.h>

int search(int x, int v[20]){
    int left=0;
    int right=n-1;
    while(left<=right){
        int middle=(left+right)/2;
        if(v[middle]==x)
            return middle;
        else
            if(v[middle]>x)
                right=middle-1;
            else
                left=middle+1;

    }
    return -1;
    }

int main(){
    int n;
    int x;
    int i;
    int v[20];
    printf("Input number of elements (<20): ");
    scanf("%d",&n);
    printf("Input an increasing vector: ");
    for(i=0;i<=n-1;i++)
        scanf("%d",&v[i]);
    printf("Input the number you're looking for:");
    scanf("%d",&x);
    printf("The number you entered is located on the following position:");
    printf("%d",search(x,v));



}
