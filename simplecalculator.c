#include<stdio.h>
#include<math.h>
int main (){
    int n,a,b;
    
    do{printf("---------------------------------------------------------------------------------------------------------------------\n\nwelcome to simple calculator\n\n");
        
        printf("1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.MODULUS\n6.POWER\n7.EXIT\n");
        scanf("%d",&n);
        if(n==1){
            printf("enter first number : ");
            scanf("%d",&a);
            printf("enter second number : ");
            scanf("%d",&b);
            printf("sum of two digits : %d\n",a+b);
        }
        else if(n==2){
            printf("enter first number : ");
            scanf("%d",&a);
            printf("enter second number : ");
            scanf("%d",&b);
            printf("subtraction of two digits : %d\n",a-b);
        }
        else if(n==3){
            printf("enter first number : ");
            scanf("%d",&a);
            printf("enter second number : ");
            scanf("%d",&b);
            printf("product of two digits : %d\n",a*b);
        }
        else if(n==4){
            printf("enter first number : ");
            scanf("%d",&a);
            printf("enter second number : ");
            scanf("%d",&b);
            if(b!=0){
             printf("division of two digits : %d\n",a/b);
             }
             else{printf("invalid (cannot divide by 0)\n");}
        }
        else if(n==5){
            printf("enter first number : ");
            scanf("%d",&a);
            printf("enter second number : ");
            scanf("%d",&b);
            if(b!=0){
             printf("modulus of two digits : %d\n",a%b);
              }
              else{printf("invalid\n");}
        }
        else if(n==6){
            printf("enter first number : ");
            scanf("%d",&a);
            printf("enter second number : ");
            scanf("%d",&b);
            printf("power of first digit raised to second digit(a^b) : %.0f\n",pow(a,b));
        }

    }while(n!=7);
    printf("you have exited calculator");
    printf("THANK YOU FOR USING CALCULATOR");







    return 0;

}