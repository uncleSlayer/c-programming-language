#include <stdio.h>

int check_space(){
    char c;
    char previous_char;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (previous_char == ' ')
            {
                previous_char = c;
            } else {
                putchar(c);
                previous_char = c;
            }
            
        } else
        {
            putchar(c);
            previous_char = c;
        }
    }
    return 0;
}

int main(){
    check_space();
    return 0;
}