#include <stdio.h>
#include <conio.h>
int main()
{
    char stu;
    char gender;
    float BMI=0;
    float HT,WT;
    printf("STUDENT'S DATA FOR SELECTION\n");
    printf("input in the format given below\n");
    printf("name of student :- ");
    scanf("%s",&stu);
    printf("gender of student :-");
    scanf("%s",&gender);
    printf("height of student :- ");
    scanf("%f",&HT);
    printf("weight of student :- ");
    scanf("%f",&WT);
    BMI=WT/((HT)*(HT));
    printf("BMI of student : %0.2f",BMI);
    printf("\nname of student :- %c\n",stu);
    printf("gender of student :- %c\n",gender);
    printf("height of student :- %0.2f\n",HT);
    printf("weight of student :- %0.2f\n",WT);
    printf("BMI of student:- %0.2f\n",BMI);
    printf("\n");
    switch(gender)
    {
        case'M':
            if(BMI>22)
            {
                printf("You are Selected\n");
            }
            else
            {
                printf("You are not Selected\n");
            }
            break;
        case'F':
            if(BMI>20)
                {
                    printf("You are selected\n");
                }
            else
                {
                    printf("You are not Selected\n");
                }
            break;
    }
         return 0;
}    



    
    
    
