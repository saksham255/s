#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int getcomchoice();
int getuserchoice();
int winner(int user, int comp);
int main (){ printf("Welcome to Rock Paper Scissors Game\n");
    srand(time(NULL));
    int user=getuserchoice();
    int comp=getcomchoice();
    
    
    winner(user, comp);



    return 0;
}
int getcomchoice(){
    return (rand() % 3)+1;
}
int getuserchoice(){
    printf("Enter your choice:\n1 for Rock\n2 for Paper\n3 for Scissors\n");
    int choice;
    scanf("%d", &choice);
    return choice;
}
int winner(int user, int comp){
    if(user==1&&comp==3){
        printf("You win\n");
    }
    else if(user==2&&comp==1){
        printf("You win\n");
    }
    else if(user==3&&comp==2){
        printf("You win\n");
    }
    else if(user==comp){
        printf("It's a tie\n");
    }
    else{
        printf("Computer wins\n");
    }
    return 0;
}