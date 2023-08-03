// Program to understand conditional statements
#include<stdio.h>

void main(){

    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    if(age >= 18){
        printf("Adult");
    }
    else if(age > 13 && age < 18){
        printf("Teenager");
    }
    else{
        printf("child");
    }
}

// Same program using Ternary operator
#include<stdio.h>

int main(){

    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    // here if is replace by ?(Question mark) and else is replaced by :(Colon)
    age >= 18 ? printf("Adult") : printf("Not adult");
    return 0;
}

// Program to understand switch cases
#include<stdio.h>

void main(){

    int day;
    printf("Enter Day [1-7] : ");
    scanf("%d", &day);

    switch (day){
        
    case 1: printf("Monday");   // characters can be used like case 'm': for Monday
            break;
    case 2: printf("Tuesday");
            break;
    case 3: printf("Wednesday");
            break;
    case 4: printf("Thursday");
            break;
    case 5: printf("Friday");
            break;
    case 6: printf("Saturday");
            break;
    case 7: printf("Sunday");
            break;    
    
    default : printf("Invalid Day");
    }
}

// Program to demonstrate nested if else
#include<stdio.h>

int main(){

    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    if(num >= 0){
        printf("Positive\n");
        if(num %2 == 0){
            printf("Even");
        }
        else{
            printf("Odd");
        }
    }
    else{
        printf("Negative");
    }
    return 0;
}

// WAP to check whether if a student passed or failed 
#include<stdio.h>

void main(){

    int marks;
    printf("Enter marks [0-100] : ");
    scanf("%d", &marks);

    // 1st way is using if else
    if(marks >= 0 && marks <= 30){
        printf("FAIL\n");
    }
    else if(marks > 30 && marks <= 100){
        printf("PASS");
    }
    else{
        printf("Wrong marks");
    }

    // 2nd way is using ternary operator
    marks <= 30 ? printf("FAIL") : printf("PASS"); 
}

// WAP to give grades to a student
#include<stdio.h>

int main(){

    int marks;
    printf("Enter marks [0-100] : ");
    scanf("%d", &marks);

    if(marks < 30){
        printf("C");
    }
    else if(marks >= 30 && marks < 70){
        printf("B");
    }
    else if(marks >= 70 && marks < 90){
        printf("A");
    }
    else{
        printf("A+");
    }
    return 0;
}

// WAP to find if a character entered by user is uppercase or not
#include<stdio.h>

void main(){

    char ch;
    printf("Enter character : ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("Uppercase");
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("Lowercase");
    }
    else{
        printf("Invalid");
    }
} 

// ****************************************************************************************
// WAP to check if a given number is Armstrong number or not
#include <stdio.h>

int main() {
    int num, sum = 0, temp, digit;
    
    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0){
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if (sum == num) {
        printf("Armstrong number.\n");
    } 
    else {
        printf("Not an Armstrong number.\n");
    }

    return 0;
}
// How this code works
//  sum = 0
//  temp = num
//  num = 153
//  while temp > 0:             153                 15                  1
//      digit = temp % 10       153 % 10 = 3        15 % 10 = 5         1 % 10 = 1
//      sum += digit ** 3       0 + 3**3 = 27       27 + 5**3 = 152     153 + 1**3 = 153
//      temp /= 10              153 // 10 = 15      15 // 10 = 1        1 // 10 = 0
// ****************************************************************************************

// WAP to check if the given number is a natural number
#include<stdio.h>

void main(){

    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    num > 0 ? printf("Natural Number") : printf("Not a Natural Number");
}



// Understanding LOOPS
// WAP to print numbers from 0 to 100
#include<stdio.h>

int main(){

    // iterator, conditional statement & increment/decrement operator 
    for(int i = 0; i <= 100; i++){
        printf("%d \n", i);
    }
    return 0;
}

// Understnding increment & decrement operators
#include<stdio.h>

void main(){

    int i = 1;
    int j = 1;
    // i++ -> Post increment
        printf("%d\n", i++);    // compiler will first use it, then internally increase it.
        printf("%d\n",i);       // first it prints 1 and then 2

    // ++j -> Pre increment
        printf("%d\n", ++j);    // compiler will increase it and then use it.
        printf("%d\n",j);       // first it prints 2 and then 2

    int k = 2;
    int l = 2;
    // k-- -> Post decrement
        printf("%d\n", k--);    // compiler will first use it, then internally decrease it.
        printf("%d\n",k);       // first it prints 2 and then 1

    // --l -> Pre decrement
        printf("%d\n", --l);    // compiler will decrease it and then use it.
        printf("%d\n",l);       // first it prints 1 and then 1
}

// Using float and char in loops
#include<stdio.h>

int main(){

    for(float i = 0; i <= 5.0; i++){
        printf("%f \n", i);
    }

    for(char ch = 'a'; ch <= 'z'; ch++){
        printf("%c \n", ch);
    }
    return 0;
}

// infinite loop
#include<stdio.h>

void main(){

    // prints hello infinite times because there is no conditional statement 
    for(int i = 0; ;i++){
        printf("Hello \n");
    }
}

// using while loop
#include<stdio.h>

int main(){

    int i = 1;
    while(i <= 5){
        printf("C language \n");
        i++;
    }
    return 0;
}

// Print the numbers from 0 to n, if n is given by user
#include<stdio.h>

void main(){

    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    // using for loop
    for(int i = 0; i <= n; i++){
        printf("%d \n", i);
    }

    // using while loop
    int i = 0;
    while(i <= n){
        printf("%d \n", i);
        i++;
    }
}

// same program using do-while loops
#include<stdio.h>

int main(){

    /*  The difference betwwen these two is that even if the condition
        is wrong, do-while will run the statement atleast once   */
    int i = 1;
    do{
        printf("%d \n", i);
        i++;
    }while (i <= 5);    // returns 1 

    // using while loop
    int i = 1;
    while(i >= 5){          // returns none
        printf("%d \n", i);
        i++;
    }
    return 0;
}

// Print the sum of first n natural numbers in reverse
#include<stdio.h>

void main(){

    int n;
    int sum = 0;
    printf("Enter num : ");
    scanf("%d", &n);
  
    // 1st way is to calculate sum and print in reverse separately.
    for(int i = 1; i <= n; i++){         // for calculating sum
        sum += i;
    }

    for(int i = n; i >= 1; i--){         // for printing in reverse
        printf("Reverse : %d \n", i);
    }
    printf("Sum : %d \n", sum);

    // 2nd way is to combine both for loops
    for(int i = 1, j = n; i <= n && j >= 1; i++, j--){
        sum += i;
        printf("Reverse : %d \n", j);
    }
    printf("Sum : %d \n", sum);

    //  3rd way is to make it more compact
    for(int j = n; j >= 1; j--){  // order is different sum is same 
        sum += j;    
        printf("Reverse : %d \n", j);
    }
    printf("Sum : %d \n", sum);
}

// Print the table of a number input by user
#include<stdio.h>

int main(){

    int n;
    printf("Enter num : ");
    scanf("%d", &n);
    
    for(int i = 1; i <= 10; i++){
        printf("%d \n", n*i);
    }
    return 0;
}

// BREAK STATEMENT
// keep taking numbers as input from user until user enters an odd number
#include<stdio.h>

void main(){

    int n;
    do{
        printf("Enter num : ");
        scanf("%d", &n);
        printf("%d \n", n);

        if(n % 2 != 0){
            break;
        }
    } while (1);
    
    printf("You entered an odd number!");
}

// keep taking numbers as input from user until user enters a number which is multiple of 7
#include<stdio.h>

int main(){

    int n;
    do{
        printf("Enter num : ");
        scanf("%d", &n);
        printf("%d \n", n);

        if(n % 7 == 0){     // multiple of 7
            break;
        }
    } while (1);
    
    printf("You entered multiple of 7");    
    return 0;
}

// CONTINUE STATEMENT
#include<stdio.h>

void main(){

    for(int i = 0; i <= 5; i++){
        if(i == 3){     // skips the specific number 
            continue;   
        }
        printf("%d \n", i);
    }
}

// Print all the numbers from 1 to 10 except for 6 
#include<stdio.h>

int main(){

    for(int i = 0; i <= 10; i++){
        if(i == 6){     // skips the specific number 
            continue;   
        }
        printf("%d \n", i);
    }
    return 0;
}

// Print all the odd numbers from 5 to 50
#include<stdio.h>

void main(){
    
    for(int i = 0; i <= 50; i++){
        if(i %2 != 0){
            printf("%d \n", i);
        }
    }
}

// Print the factorial of a number n
#include<stdio.h>
// factorial e.g. num = 5, 1x2x3x4x5= 120
int main(){

    int n;
    printf("Enter num : ");
    scanf("%d", &n);
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    printf("Factorial is: %d", fact);
    return 0;
}

// Print reverse of the table for a number n
#include<stdio.h>
void main(){

    int n;
    printf("Enter num : ");
    scanf("%d", &n);

    for(int i = 10; i >= 1; i--){
        printf("%d \n", n * i);
    }
}

// Calculate the sum of all numbers between 5 & 50 (including 5 & 50)
#include<stdio.h>

int main(){

    int sum = 0;

    for(int i = 5; i <= 50; i++){
        sum += i;
    }
    printf("Sum is %d \n", sum);
    return 0;
}