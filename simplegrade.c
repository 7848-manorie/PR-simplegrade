#include<stdio.h>
void main(){
    // Q1
    int score;
    char grade;
    
    printf("enter your score:");
    scanf("%d",&score);

    grade=(score>=90 && score <=100) ? 'A' : (score >=80 && score < 90) ? 'B': (score >=70 && score < 80) ? 'C': (score >=60 && score < 70) ? 'D': (score >=50 && score < 60) ? 'E': 'F';

    printf("Your grade is:%c.",grade);
    // Q2
    switch(grade){
            case 'A':
                printf("Excellent work!");
            break;
             case 'B':
                printf("Well done!");
            break;
            case 'C':
                printf("Good job!");
            break;
             case 'D':
                printf("You've passed!");
            break;
             case 'E':
                printf("You could do better !");
            break;
             case 'F':
                printf("Sorry you've failed!");
            break;
            default:
                printf("invalid score");
            break;
    }
    // Q3
    if(grade=='A' || grade=='B' || grade=='C' || grade=='D'){
        printf("You are eligible for next level");
    }
    else {
        printf("Please try again next time");
    }

}