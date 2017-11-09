#include<stdlib.h>
#include<math.h>
float a;
float b;
float c;
float delta;
float x1;
float x2;

int main(){
    printf("Input coefficients a, b, c:\n");
    scanf("%f %f %f",&a, &b,&c);
    printf("The equation is %gX^2+%gX+%g=0\n",a, b, c);
    delta=pow(b,2)-4*a*c;
    printf("delta is %g\n",delta);
    if(delta<0){
        printf("Equation has no solutions in R.");
        exit(0);}
    if(delta==0){
        x1=(-b/2*a);
        printf("Since delta is 0, the equation has one solution: %g",x1);
        exit(0);
    }
    x1=(-b + sqrt(delta)) / 2*a;
    x2=(-b - sqrt(delta)) / 2*a;
    printf("The solutions of the equation are: %g and %g",x1,x2);





    }


