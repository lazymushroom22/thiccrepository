#include<stdlib.h>

int main(){
    int zone1=1;
    int zone2=0;
    int zone3=1;
    int zone4=0;
    int i;
    int j;
    int n;
    int a[20][20];
    printf("Input number of rows and columns: ");
    scanf("%d",&n);
    if(n<=2){
        printf("All zones are 0. Invalid matrix.");
        exit(0);
        }
    for(i=0;i<=n-1;i++)
        for(j=0;j<=n-1;j++){
            printf("Input a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
      for(i=0;i<=n-1;i++)
            for(j=0;j<=n-1;j++){
                if(j>i && j<n-i-1)
                    zone1*=a[i][j];
                if(j<i && j<n-i-1)
                    zone2+=a[i][j];
                if(j<i && j>n-i-1)
                    zone3*=a[i][j];
                if(j>i && j>n-i-1)
                    zone4+=a[i][j];
            }

printf(" Zone1: %d\n Zone2: %d\n Zone3: %d\n Zone4: %d\n",zone1,zone2,zone3,zone4);
    }
