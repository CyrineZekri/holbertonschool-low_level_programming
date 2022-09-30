#include<stdio.h>
int main() {
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;

printf("Size of a char : %zu byte\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long int: %zu bytes\n", sizeof(longintType));
printf("Size of long long int: %zu bytes\n", sizeof(longlongintType));
return (0);
}
