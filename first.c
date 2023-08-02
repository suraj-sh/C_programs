// Program to understand different datatypes
#include<stdio.h>

void main(){

    char name_initial = 'S';
    int age = 23;
    float percentage = 73.26;

    printf("Name's first initial is %c \n", name_initial);
    printf("Age is %d \n", age);
    printf("Percentage is %f \n", percentage);
}

// Program to understand input and output
#include<stdio.h>

void main(){

    int a, b, sum;

    printf("Enter a = ");   // for printing output
    scanf("%d", &a);        // for taking input        
    printf("Enter b = ");
    scanf("%d", &b);
    // 1st way to add is using a variable sum
    sum = a + b;
    printf("Sum = %d \n", sum);
    // 2nd way to add without using variable sum
    printf("Total = %d", a + b);
}

// Program to display area, perimeter and cube of different shapes
#include<stdio.h>

void main(){

    // area of a square
    int side;
    printf("Enter side: ");
    scanf("%d", &side);
    printf("Area of square is : %d \n", side * side);

    // area of a circle
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area of circle is : %f \n", 3.14 * (radius * radius));

    // perimeter of a rectangle
    int len, wid;
    printf("Enter length: ");
    scanf("%d", &len);
    printf("Enter width: ");
    scanf("%d", &wid);
    printf("Perimeter of rectangle is : %d \n", 2 * (len + wid));

    // cube 
    float cube;
    printf("Enter num: ");
    scanf("%f", &cube);
    printf("Cube of the number is : %f", cube * cube * cube);
}

// Program to understand instructions and operators
#include<stdio.h>

int main(){

    int a = (int) 1.999999; // explicit type conversion
    printf("%d \n", a);

    printf("%d \n", 16%10); // modulus operator

    int b = 4 + 9 * 10;
    printf("%d \n", b);

    int c = 4 * 3 / 6 * 2;
    printf("%d \n", c);

    int d = 5 * 4 - 2 * 3;
    printf("%d \n", d);

    int e = 5 * 2 - 2 / 3;
    printf("%d \n", e);

    int f = 5 * (2 / 2) * 3;
    printf("%d \n", f);

    int g = 5 + 2 / 2 * 3;
    printf("%d \n", g);
    return 0;
}

// Program for assignment & logical operators
#include<stdio.h>
void main(){

    printf("%d \n", 4 == 3); // operator returns 0 if false and 1 when true
    printf("%d \n", 7 >= 5); 
    printf("%d \n", 5 <= 4);
    printf("%d \n", 7 != 5); 

    printf("%d \n", 3 > 4 && 5 > 2); // if both are true then it returns 0 o.w 1
    printf("%d \n", 3 > 4 || 5 > 2); // if one of them is true then it returns 1 o.w 0
    printf("%d \n", !((3 > 4) || (5 > 2)) ); // if used ! it reverses the output 
}

// Program for assignment operator
# include<stdio.h>

int main(){
    int a = 1;
    int b = 1;
    a = a + 1;  // 1st way
    b += 1;     // 2nd way shorthand gives same result
    printf("%d \n", a);
    printf("%d", b);
    return 0;
}

// Program to check if a number is divisible by 2 or not 
#include<stdio.h>

void main(){

    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0); // if number is divivsible by 2 it will return 1 o.w 0
}

// Write a program to print 1(True) or 0(False) for some statements 
#include<stdio.h>

int main(){
    // a] if its sunday and its snowing -> True
    int isSunday = 1;
    int isSnowing = 1;
    printf("%d \n", isSunday && isSnowing);

    // b] if its monday or its raining -> True
    int isMonday = 0;
    int isRaining = 1;
    printf("%d \n", isMonday || isRaining);

    // c] if a number is greater than 9 & less than 100 (2 digit number) -> True
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("%d", x > 9 && x < 100);
    return 0;
}

// WAP to print the average of 3 numbers
#include<stdio.h>

void main(){
   
   int x, y, z; 
   float avg;
   
   printf("\nEnter x : ");
   scanf("%d", &x);
   printf("\nEnter y : ");
   scanf("%d", &y);
   printf("\nEnter z : ");
   scanf("%d", &z);    
 
   avg = (x + y + z) / 3.0;     
   printf("Average is : %f", avg);    
}

// Program to display if entered character is digit or not
#include <stdio.h>

int main() {

    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);

    // Check if the character is a digit by ASCII comparison
    int isDigit = (ch >= '0') && (ch <= '9');

    // Print 0 for false (not a digit) and 1 for true (digit)
    printf("%d\n", isDigit);
    return 0;
}

// WAP to print the smallest number
#include<stdio.h>

void main(){

    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    /*  > (greater) -> will check largest number 
        < (smaller) -> will check smallest number
        whichever condition comes first in the expression will determine result */ 
    int smallest = (a < b) * a + (a > b) * b; // this will check the smallest number 

    printf("Smallest number: %d\n", smallest);
}
