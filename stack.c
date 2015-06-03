#include<stdio.h>

#include "include/my_stack.h"

#define long 10

int S[len];
int a=0;
int b=0;
void stack_push(int x){
    S[a]=x;
    a++;
}
int stack_capacity(){
    return b-a;
}
int stack_pop(){
    a--;
    return S[a];
}
int stack_size(){
    return long;
}
int stack_is_empty(){
    if(a-b==0)
    return 1;
    else return 0;
}
int stack_is_full(){
    if(a==b)
    return 1;
    else return 0;
}
