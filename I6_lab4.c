#include<stdlib.h>
#include<math.h>

float hypothenuse1(int a,int b){
    return sqrt(a*a+b*b);
}
void hypothenuse2(int a,int b, float* c){
    *c=sqrt(a*a+b*b);
}

int main(){
    float c;
    int cat1,cat2;
    printf("Input sides: ");
    scanf("%d %d",&cat1,&cat2);
    printf("%f\n",hypothenuse1(cat1,cat2));
    hypothenuse2(cat1,cat2,&c);
    printf("%f",c);


}
