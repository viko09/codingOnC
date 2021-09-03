#include "stdio.h" // Standard Input Output

int main(){
// An integer is a 32 bits var, with a numeric range of -2times10^6 -> 2times10^6
// To obtain the range is (2^32)/2
    int x, v, z;
// Scan Function
    scanf("%d %d", &x, &v); // Saving the variable
    // scanf("%d", &x); // Saving the variable It can separate or put it in the same line
// Making math
    z = x + v;
// Print Function
    printf("%d %s %d %s %s %d %s", x, " ", v, " ", "\n", z, " "); // Printing the variable
    printf("\n");
// %d digit and %s string
// The variables are: float, int, double, char, long, etc
// The basic operations are: +, - , /, *, % (module gives the quotient)

// Long Long Int: 64 bits, (2^63)/2

    long long int k;

    scanf("%lld", &k);

    printf("%lld", k);
    printf("\n");

// Float variables, 7 digits of accuracy

    float varFlt;

    scanf("%f", &varFlt);
// %f float
    printf("%.2f" "%s", varFlt, "\n");

// Char: unit of information that assigns a symbol, ASCII Code
// 1 byte = 8 bits
    char car;
    scanf("%c", &car);
// %c char
    printf("%c" "%s", car, "\n");

// Bool es de un bit

    return 0;
}
// This is a comment line
// To run this file we type: gcc Program.c -o programName
