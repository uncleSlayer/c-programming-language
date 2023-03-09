#include <stdio.h>

int calculate_space(){
    int space, tab, newline;

    space = tab = newline = 0;

    char c;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            space++;
        } else if (c == '\n')
        {
            newline++;
        } else if (c == '\t')
        {
            tab++;
        }
    }

    printf("space: %d, newline: %d, tab: %d \n", space, newline, tab);

    return 0;
}

int main(){
    calculate_space();
    return 0;
}