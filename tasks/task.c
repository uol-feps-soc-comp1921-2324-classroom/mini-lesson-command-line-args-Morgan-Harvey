#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // check command line for arguments
    if(argc != 3){

    printf("Usage: %s <First Number> <Second Number>\n", argv[0]);
    return 0;
    }

    // stores arguments 
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);


    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
