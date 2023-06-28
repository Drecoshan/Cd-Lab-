#include <stdio.h>

int main(){
    int num, reversednum=0,digit;
    printf("enter a bumber: ");
    scanf("%d",&num);

    do {


        digit=num% 10;
        reversednum=reversednum * 10 + digit;
        num/=10;

    } while (num>10);

    printf("reversed number: %d\n",reversednum);

// Q.6


    int base,cxp, result=1;

    printf("enter the base: ");
    scanf("%d",&base);

    printf("Enter the exponent: ");
    scanf("%d",&cxp);

    for (int i=0; i<cxp; i++)
{
    result*=base;
}
    printf("The power =%d",result);


//Q.7

    int no1=0,no2=0,no3,i;
    printf("Enter the 10 numbers: ");
    printf("%d',%d",no1,no2);

    for (i=2;i<10;i++){
        no3=no1+no2;
    printf("%d",no3);

    no1=no2;
    no2=no3;
}
    printf("\n");


//Q.8
{

    int num,remainder,ono,result=0,count=0;
    printf("Enter number: ");
    scanf("%d",&num);

    ono=num;
     while (ono!=0){
        remainder=ono%10;
        result+=remainder;
        count++;

        ono/=10;
    }
    ono=num;
    for(int i=0; i<count;i++){
        remainder=ono %10;
        result+=pow(remainder,count);
        ono /=10;
    }
    if (result==num){
        printf("%d Armstrong number",num);
    }else{
        printf("%d not Armstrong number",num);

    }


//Q.9

    char value;

    printf("Enter ASCII value A to Z: \n");

    for (value='A';value <= 'Z'; value++){
        printf("%c: d%",value,value);

    }


//Q.10
    int row=5;
    int i,q;
    for(i=1;i<=row;i++){
        for (q=1; q<=i;q++){
            printf("*");
        }
        printf("\n");
    }

}
