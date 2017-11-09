#include<stdlib.h>
float grade;
float percentage;
int number_students;
int i;
int ok=1;
int under_eight=0;
int main(){
    printf("Input number of students: ");
    scanf("%d",&number_students);
    for(i=1;i<=number_students;i++){
            printf("Grade of student %d: ",i);
            scanf("%f",&grade);
            if(grade<8)
               under_eight++;
            if(grade<5)
                ok=0;
    }
 if(ok==1)
    printf("All students have passed the exam!\n");
 else
    printf("Not all students have passed the exam...\n");
 percentage=under_eight*100/number_students;
 printf("Percentage of students with  grade below 8 is: %.f%%",percentage);

}
