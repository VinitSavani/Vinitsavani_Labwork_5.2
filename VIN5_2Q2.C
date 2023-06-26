// 5.2-Q2 Write a programe to find the maximum number from the given 4 numbers using nested if else.

#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c,d;
clrscr();
printf("First number is A:");
scanf("%d",&a);
printf("Second number is B:");
scanf("%d",&b);
printf("Third number is C:");
scanf("%d",&c);
printf("Forth number is D:");
scanf("%d",&d);
if(a>b){
  if(a>c){
  if(a>d){
    printf("A is max..");
    }else{
    printf("D is max..");
    }}else{
    if(c>d){
    printf("C is max..");
    }else{
    printf("D is max..");
    }}}
else{
    if(b>c){
    if(b>d){
    printf("B is max");
    }else{
    printf("D is max..");
    }}else{
    if(c>d){
    printf("C is max..");
    }else{
    printf("D is max..");
    }}}
getch();
}