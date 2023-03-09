#include <stdio.h>

int free_pos = 0;
double val[100];

void push(double push_val){
    if (free_pos <= 100)
    {
        val[free_pos++] = push_val;
    } else {
        printf("there is no more space in the stack \n");
    }   
}


double pop(void){
    if (free_pos > 0)
    {
        return val[--free_pos];
    } else {
        printf("there are no elements in the stack \n")
    }
    
}