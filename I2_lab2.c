#include<stdlib.h>
int StartHour;
int StartMinute;
int StartSecond;
int FinishHour;
int FinishMinute;
int FinishSecond;
int StartTime;
int FinishTime;
int DurationAux;
int DurationSeconds;
int DurationMinutes;
int DurationHours;

    int main(){
        printf("Input Starting time: ");
        scanf("%d", &StartHour);
        scanf("%d", &StartMinute);
        scanf("%d", &StartSecond);
        printf("Input Finish time: ");
        scanf("%d", &FinishHour);
        scanf("%d", &FinishMinute);
        scanf("%d", &FinishSecond);

        StartTime= StartHour* 60;
        StartTime= StartTime * 60 + StartMinute *60 + StartSecond;
        FinishTime=FinishHour*60;
        FinishTime=FinishTime * 60 + FinishMinute * 60 + FinishSecond;
        DurationAux=FinishTime-StartTime;
        DurationSeconds=DurationAux%60;
        DurationMinutes=DurationAux/60;
        DurationHours=DurationMinutes/60;
        DurationMinutes=DurationMinutes%60;
        if(DurationHours<10)
            printf("The duration is: 0%d",DurationHours);
        else
            printf("The duration is: %d", DurationHours);
        if(DurationMinutes<10)
            printf(":0%d",DurationMinutes);
        else
            printf(":%d",DurationMinutes);
        if(DurationSeconds<10)
            printf(":0%d",DurationSeconds);
        else
            printf(":%d",DurationSeconds);

return 0;
}

