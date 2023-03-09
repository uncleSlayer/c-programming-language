#include <stdio.h>

double calculate_fahr(double tempt){
    double fahr = (tempt * (9.0 / 5.0)) + 32.0;
    return fahr;
}

int main(){
    double fahr, celc;
    double low, upper, step;

    low = 0.0;
    step = 20;

    printf("%s    %s \n", "celc", "fahr");

    for (upper = 300.0; upper >= low; upper -= step)
    {
        printf("%3.0lf     %3.2lf \n", upper, calculate_fahr(upper));
    }
    
    return 0;
}