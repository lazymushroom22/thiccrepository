#include <stdio.h>

void split_time(long int secundetotal, int *ore, int *minute, int *secunde){
    *ore=secundetotal/3600;
    *minute=secundetotal/3600/60;
    *secunde=secundetotal%3600%60;
}

int main(){
    long int secundetotal;
    int ore;
    int minute;
    int secunde;

    scanf("%i", &secundetotal);
    split_time(secundetotal,&ore,&minute,&secunde);
    printf("%d de secunde inseamna %d ore %d minute  %d secunde)", secundetotal, ore, minute, secunde);
}
