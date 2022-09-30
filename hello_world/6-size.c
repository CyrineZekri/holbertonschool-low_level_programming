#include<stdio.h>
int main() {
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;

printf("Size of a char : %zu byte(s)\n", sizeof(charType));
printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of long long int: %zu byte(s)\n", sizeof(longlongintType));
return (0);
}
