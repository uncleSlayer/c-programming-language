#include <stdio.h>
#include <string.h>

int str_index(char source[], char patter[]){

    int i, j, k;

    for (i = 0; source[i] != '\0'; i++)
    {
        for (j = i, k = 0; patter[k] != '\0' && source[j] == patter[k]; j++, k++)
        {
            ;
        };

        if (k > 0 && patter[k] == '\0')
        {
            return i;
        }
        
    }
    
    return -1;
}

int main(){
    printf("the starting position of strindex is: %d \n", str_index("aeroplane", "plane"));
    return 0;
}