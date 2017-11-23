#include<stdlib.h>

void average(int a[31][2]){
    int high=0;
    int low=0;
    float S1=0;
    float S2=0;
    int i,j;
    for(i=0;i<=4;i++)
        for(j=0;j<=1;j++){
            if(j%2==0){
                S1+=a[i][j];
                high++;
            }
            else {
                S2+=a[i][j];
                low++;
            }
        }
        printf("The average highest temperature in Jaunary was: %g\n",S1/high);
        printf("The average lowest temperature in January was: %g",S2/low);

        }


int main(){

    int a[31][2];
    int i,j;
    for(i=0;i<=4;i++)
        for(j=0;j<=1;j++){
            if(j%2==0)
                printf("Input highest temperature for day %d: ",i+1);
            else
                printf("Input lowest temperature for day %d: ",i+1);
            scanf("%d",&a[i][j]);
            }
    average(a);



}
