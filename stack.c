#include<stdio.h>
#include "include/my_stack.h"
#define len 20
int S[len];
int top=0;
int endl=0;
int a;
void stack_push(int x){
    S[top]=x;
    top++;
}
int stack_pop(){
    top--;
    return S[top];
}
int stack_capacity(){
    a=len-top;
    return a;
}
int stack_is_empty(){
    if(top-endl==0)
    return 1;
    else return 0;
}
int stack_size(){
    return len;
}
int stack_is_full(){
    if(top==len)return 1;
    else return 0;
}
