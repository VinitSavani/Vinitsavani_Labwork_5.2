// 5.2-Q1 write a programe to find the minimum number from the given 3 numbers using nested if else.

#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c;
clrscr();
printf("First number is A:");
scanf("%d",&a);
printf("Second number is B:");
scanf("%d",&b);
printf("Third number is C:");
scanf("%d",&c);
if(a<b){
   if(a<c){
   printf("A is min..");
   }else{
   printf("C is min..");
   }
}
else{
   if(b<c){
   printf("B is min..");
   }else{
   printf("C is min..");
   }
}
getch();
}