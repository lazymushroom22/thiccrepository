#include<stdlib.h>
int angle;

int main(){

    do{
    printf("Input angle between 0 and 90: ");
    scanf("%d",&angle);
    if(angle<0 || angle>90)
        printf("Incorrect. Try again.\n");
    }while(angle<0 || angle>90);
    printf("Angle is correct.");

}
