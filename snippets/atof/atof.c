#include <stdio.h>
#include <ctype.h>

double atofo(char a[]){
    double val, power;
    int i, sign;

    for (i = 0; isspace(a[i]); i++)
    {
        ;
    }
    
    sign = (a[i] == '-') ? -1 : 1;

    if ( a[i] == '+' || a[i] == '-')
    {
        i++;
    }
    
    for (val = 0.0; isdigit(a[i]); i++)
    {
        val = 10 * val + (a[i] - '0');
    }

    if (a[i] == '.')
    {
        i++;
    }

    for ( power = 1.0; isdigit(a[i]); i++)
    {
        val = 10 * val + (a[i] - '0');
        power *= 10;
    }

    return sign * (val/power);
}

int main(){
    printf("%lf \n", atofo("45.336"));
    return 0;
}