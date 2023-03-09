#include <stdio.h>

double find_celc(double temptr){
    double celc = (5.0 / 9.0) * (temptr - 32.0); 
    return celc;
}

int main()
{
    double fahr, celc;
    int lower, upper, step;

    upper = 300;
    step = 20;

    printf("%5s  %5s \n", "fahr", "celc");

    for (int lower = 0; lower <= upper; lower += step)
    {
        fahr = lower;
        celc = find_celc(fahr);
        printf("%3.0f    %3.2f \n", fahr, celc);
    }
    
}