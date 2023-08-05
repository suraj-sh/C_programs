// Understanding Functions
// Write 2 functions - one to print "Hello" & second to print "good bye"
#include<stdio.h>

// declaration/prototype
void printHello();
void printGoodBye();

int main(){
    printHello();   // function call
    printGoodBye();
    return 0;
}

// function definition
void printHello(){
    printf("Hello! \n");
}

void printGoodBye(){
    printf("Good Bye");
}

// Write a function that prints Namaste if user is Indian & Bonjour if French
#include<stdio.h>
void namaste();
void bonjour();

int main(){

    char ch;
    printf("Enter i for Indian and f for French: ");
    scanf("%c", &ch);

    ch == 'i' ? namaste() : bonjour();  // ternary operator 
    return 0;
}

void namaste(){
    printf("Namaste \n");
}

void bonjour(){
    printf("Bonjour");
}

// passing arguments
#include<stdio.h>

int sum(int a, int b);  

int main(){

    int a, b;
    printf("Enter first num: ");
    scanf("%d", &a);
    printf("Enter second num: ");
    scanf("%d", &b);

    int s = sum(a, b);      // calling sum function 
    printf("sum is %d", s);
    return 0;
}

int sum(int x, int y){  // stores the values of a & b in x & y
    return x + y;
}

// returns the table of n 
#include<stdio.h>

// function declaration
int sum(int a, int b);   
void printTable(int n);     // same variable can be declared outside scope 

int main(){

    int n;                  // n will work inside main function's scope 
    printf("Enter num: ");
    scanf("%d", &n);
    
    // function call
    printTable(n);  // argument/actual parameter
    return 0;
}

int sum(int x, int y){  // stores the values of a & b in x & y
    return x + y;
}

// function definition
void printTable(int n){     // parameter/formal parameter
    for(int i = 1; i <= 10; i++){
        printf("%d \n", i * n);
    }
}

// Write a function that takes item as input and returns the value with 18% increase in price
#include<stdio.h> 

void calculatePrice(float value);

int main(){

    float value = 100;
    calculatePrice(value);
    printf("Value is %f", value);
    return 0;
}

void calculatePrice(float value){
    value = value + (0.18 * value);
    printf("Final price is %f \n", value);
}

// Use library functions to calculate the square of a user given number
#include<stdio.h>
#include<math.h> 

void main(){

    float n = 4;
    printf("%f", pow(n , 2));   // 2 is the value we want to multiply it from 
}

// Write functions to calculate area of a square, a circle and a rectangle
#include<stdio.h>

float areaSquare(float side);
float areaCircle(float rad);
float areaRectangle(float a, float b);

int main(){

    float side = 4;
    float rad = 6;
    float a = 5.0;
    float b = 3.0;

    printf("Area of Square : %f \n", areaSquare(side));
    printf("Area of Circle : %f \n", areaCircle(rad));
    printf("Area of Rectangle : %f \n", areaRectangle(a, b));
    return 0;
}

float areaSquare(float side){
    return side * side;
}

float areaCircle(float rad){
    return 3.14 * rad * rad;
}

float areaRectangle(float a, float b){
    return a * b;
}

// RECUSRSION - when a function calls itself
// Print hello 5 times
#include<stdio.h>

void printHello(int count);

int main(){

    printHello(1);
    return 0;
}

// recursive sunction
void printHello(int count){
    if(count == 0){
        return;
    }
    printf("Hello \n");
    printHello(count - 1);
}

// sum of first n natural numbers
#include<stdio.h>

int sum(int n);

int main(){

    printf("Sum is %d", sum(5));
    return 0;
}

// recursive function
int sum(int n){

    if (n == 1){
        return 1;
    }
    int sumNm1 = sum(n - 1);    // sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN; 
}

// Factorial of n
#include<stdio.h>

int fact(int n);

int main(){

    printf("Factorial is %d", fact(5));
    return 0;
}

// recursive function
int fact(int n){

    if (n == 1){
        return 1;
    }
    int factNm1 = fact(n - 1);  
    int factN = factNm1 * n;
    return factN; 
}

// Write a function to convert celsius to fahrenheit
#include<stdio.h>

float convertTemp(float celsius);

int main(){

    printf("Celsius to Fahrenheit is %f", convertTemp(5));
    return 0;
}

float convertTemp(float celsius){
    
    float far = celsius * (9.0 / 5.0) + 32;
    return far;
}

// Write a function to calculate Percentage of a student from marks in Science, Math & Sanskrit
#include<stdio.h>

float calculatePercentage(float a, float b, float c);

int main(){

    printf("Percentage is : %f", calculatePercentage(44, 57, 63));
    return 0;
}

float calculatePercentage(float a, float b, float c){
    
    return (a + b + c) / 3;
}

// Write a function to print n terms of the fibonacci sequence
#include <stdio.h>

int fibonacci(int n);

int main(){

    int n = 8;
    printf("The fibonacci series is: \n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } 
    else if (n == 1) {
        return 1;
    } 
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Write a function to find sum of digits of a number
#include <stdio.h>

int sumOfDigits(int n);

int main() {

    int n;
    printf("Sum of digits: %d", sumOfDigits(15));
    return 0;
}

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } 
    else {
        return (n % 10) + sumOfDigits(n / 10);
    }
}

// write a function to find the square root of a number
#include <stdio.h>
#include<math.h>

float squareRoot(float n);

int main() {

    float n;
    printf("Square Root : %f", squareRoot(15));
    return 0;
}

float squareRoot(float n) {
    if (n == 0) {
        return 0;
    } 
    else {
        return sqrt(n);
    }
}

// write a function to print hot or cold depending on the temp user enters
#include <stdio.h>

void hotOrCold(float temperature); // in Celsius 

int main(){
    
    float temperature;
    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    hotOrCold(temperature);
    return 0;
}

void hotOrCold(float temperature) {
    if (temperature >= 30.0) {
        printf("Hot");
    } 
    else if (temperature >= 10.0) {
        printf("Moderate");
    } 
    else {
        printf("Cold");
    }
}