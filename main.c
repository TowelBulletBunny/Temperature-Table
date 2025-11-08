#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {

     
    int fahr;
    double celsius = 0;
    
    printf("%-10s%-10s\n", "F", "C");
    
    for (fahr = 0; fahr <= 100; fahr+=20 )
    {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%-10d%-10.2lf\n",fahr,celsius);
    }

    return EXIT_SUCCESS;


}