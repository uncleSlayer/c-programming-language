#include <stdio.h>
#include <ctype.h>

double atofo(char a[]){
    int i, sign;
    double val, power;
    // skip the white spaces
    for (i = 0; isspace(a[i]); i++)
    {
        ;
    }

    sign = ((a[i] == '-') ? -1 : 1);

    if (a[i] == '-' || a[i] == '+')
    {
        i++;
    }
    
    
    for (val = 0.0; isdigit(a[i]); i++)
    {
        val = (10 * val) + (a[i] - '0');
    }

    if (a[i] == '.')
    {
        i++;
    }

    for (power = 1; isdigit(a[i]); i++)
    {
        val = ((10 * val) + (a[i] - '0'));
    }

    if (a[i] == 'e' || a[i] == 'E')
    {
        
    }
    
}

int main(){

    return 0;
}