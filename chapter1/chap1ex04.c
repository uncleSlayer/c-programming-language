#include <stdio.h>


double calculate_celc(double tempt){
    double fahr = (tempt * (9.0 / 5.0)) + 32.0;
    return fahr;
}

int main(){
    double fahr, celc;
    double low, upper, step;

    upper = 300;
    step = 20;

    printf("%3s  %3s \n", "celc", "fahr");

    for (low = 0; low <= upper; low += step)
    {
        printf("%3.0lf    %3.2lf \n", low, calculate_celc(low));
    }
    

    return 0;
}