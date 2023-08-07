// // POINTERS
// // Program to understand pointers
// #include<stdio.h>

// void main(){

//     int age = 23;       // declares a variable age
//     int *ptr = &age;    // *ptr stores the memory address of the variable age 
//     int _age = *ptr;    // to access that vairable and store it in new variable _age

//     printf("%d \n", _age);

//     // to print address
//     printf("%p \n", &age);     // format specifer for pointer  
//     // unsigned int
//     printf("%u \n", &age);     // typecasting to view memory address in decimal form
//     printf("%u \n", ptr);      // prints same address since &age memory address stored in ptr
//     printf("%u \n", &ptr);     // prints a different address 

//     // to print value
//     printf("%d \n", age);  
//     printf("%d \n", *ptr);     
//     printf("%u \n", *(&age));  // prints the value of the age's address which is same 
// }

// // practice question
// #include<stdio.h>

// int main(){

//     int x;
//     int *ptr;

//     ptr = &x;
//     *ptr = 0;   // x = 0

//     printf("x = %d \n", x);
//     printf("*ptr = %d \n", *ptr);

//     *ptr += 5;  // x = 5
//     printf("x = %d \n", x);
//     printf("*ptr = %d \n", *ptr);

//     (*ptr)++;   // x = 6
//     printf("x = %d \n", x);
//     printf("*ptr = %d \n", *ptr);
//     return 0;
// }

// // Pointer to Pointer
// #include<stdio.h>

// void main(){

//     float price = 100.00;   // stores the value 100.00 in price variable
//     float *ptr = &price;    // stores the memory address of price in ptr
//     float **pptr = &ptr;    // stores the memory address of ptr in pptr
// }

// // Print he value of i from its pointer to pointer 
// #include<stdio.h>

// int main(){

//     int i = 5;   
//     int *ptr = &i;    
//     int **pptr = &ptr;

//     printf("%d \n", **pptr);    
//     return 0;
// }

// // understanding call be value and call by reference
// #include<stdio.h>

// void square(int n);
// void _square(int *n);   // for storing pointer 

// int main(){

//     int num = 4;
//     square(num);
//     printf("Num : %d \n", num);

//     _square(&num);
//     printf("Num : %d \n", num);
//     return 0;
// }

// // call by value
// void square(int n){

//     n = n * n;
//     printf("Square : %d \n", n);
// }

// void _square(int *n){

//     *n = (*n) * (*n);
//     printf("Square : %d \n", *n);
// }

// // Swap 2 numbers a & b
// #include<stdio.h>

// void swap(int a, int b);
// void _swap(int *a, int *b);

// int main(){

//     int x = 3, y = 5;
//     swap(x, y);                         // does not swap the values
//     printf("x = %d, y = %d \n", x, y);  

//     _swap(&x, &y);                      // swaps the values
//     printf("x = %d, y = %d \n", x, y);
//     return 0;
// }

// // call by value
// void swap(int a, int b){

//     int t = a;
//     a = b;
//     b = t;
//     printf("a = %d, b = %d \n", a, b);
// }

// // call by reference
// void _swap(int *a, int *b){

//     int t = *a;
//     *a = *b;
//     *b = t;
// }

// /* Write a function to calculate the sum, product & average 
// of 2 numbers. Print that average in the main function */
// #include<stdio.h>

// void calculate(int a, int b, int *sum, int *prod, int *avg);

// int main(){

//     int a = 5, b = 3;
//     int sum, prod, avg;
//     calculate(a, b, &sum, &prod, &avg);
//     printf("Sum = %d \nProduct = %d \nAverage = %d \n", sum, prod, avg);
//     return 0;
// }

// void calculate(int a, int b, int *sum, int *prod, int *avg){

//         *sum = a + b;
//         *prod = a * b;
//         *avg = (a + b) / 2;
// }

// // WAP to find the maximum number between two number using a pointer
// #include<stdio.h>

// int maxNum(int *a, int *b);

// int main(){

//     int x = 4, y = 10;
//     int result = maxNum(&x, &y);
//     printf("Max = %d", result);
//     return 0;
// }

// int maxNum(int *a, int *b){

//     if(*a > *b){
//         return *a;
//     }
//     else{
//         return *b;
//     }
// }

#include <stdio.h>

void main() {
    char ch = 'a';
    char *ptr = &ch;

    while(*ptr <= 'z'){
        printf("%c ", *ptr);
        (*ptr)++;
    }

}
