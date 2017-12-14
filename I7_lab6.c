#include <stdio.h>
int n;

void minmax(int x[], int *min, int *max){
    int i;
    *min=x[0];
    *max=x[0];

    for(i=1;i<n;i++){
        if(x[i]<*min)
            *min=x[i];

        if(x[i]>*max)
            *max=x[i];
    }
}

int main(){
    int x[100];
    int min;
    int max;

    scanf("%d", &n);

    int i;

    for(i=0;i<n;i++)
        scanf("%d", x+i);

    minmax(x, &min, &max);

    printf("The minimum is %d, and the maximum is %d.", min, max);
}

