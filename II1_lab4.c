#include<stdlib.h>
#include<math.h>
#define M_PI 3.14159265358979323846
float polynome1(int n, int a, int b, int c, int d, int x){

    int y;
    y=a*pow(x,2*n)+b*pow(x,2)+c*x+d;
    return y;
}
float polynome2(int n, int a, int b, int c, int d, int x){

    int y;
    y=a*pow(x,2)+b*x+cos(M_PI*c);
    return y;
}


int main(){

    int n,a,b,c,d,x;
    printf("Input n, a, b, c ,d, x: ");
    scanf("%f %d %d %d %d %d",&n,&a,&b,&c,&d,&x);
    printf("The value of y in the first polynome is: %g\n",polynome1(n,a,b,c,d,x));
    printf("The value of y in the second polynome is: %g",polynome2(n,a,b,c,d,x));

}
