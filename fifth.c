// ARRAYS
#include<stdio.h>

void main(){

    int marks[3];                   // array declaration

    printf("Enter Physics : ");
    scanf("%d", &marks[0]);         // address for array 
    printf("Enter Chemistry : ");
    scanf("%d", &marks[1]);
    printf("Enter Maths : ");
    scanf("%d", &marks[2]);

    printf("Physics : %d, Chemistry : %d, Maths : %d", marks[0], marks[1], marks[2]);
}

// WAP to enter price of 3 items & print their final cost with gst
#include<stdio.h>

int main(){

    float price[3];

    printf("Enter price = ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("Total Price of Item 1 = %f \n", price[0] + (0.18 * price[0]));
    printf("Total Price of Item 2 = %f \n", price[1] + (0.18 * price[1]));
    printf("Total Price of Item 3 = %f \n", price[2] + (0.18 * price[2]));
    return 0;
}

// Pointer arithmetic
#include<stdio.h>

void main(){

    // case 1
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u \n", ptr);
    ptr++;                       // increment pointer size in bytes 
    printf("ptr = %u \n", ptr);
    ptr--;                       // decrement pointer size in bytes  
    printf("ptr = %u \n", ptr);

    // case 2
    float price = 20.00;
    float *ptr = &price;
    printf("ptr = %u \n", ptr);
    ptr++;
    printf("ptr = %u \n", ptr);
    ptr--;
    printf("ptr = %u \n", ptr);

    // case 3
    char star = '*';
    char *ptr = &star;
    printf("ptr = %u \n", ptr);
    ptr++;
    printf("ptr = %u \n", ptr);
    ptr--;
    printf("ptr = %u \n", ptr);
}

// more operations on pointer
#include<stdio.h>

int main(){

    int age = 23;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u , %u, Difference = %u \n", ptr, _ptr, ptr-_ptr); // returns size in bytes
    _ptr = &age;
    printf("Comparison = %u \n", ptr == _ptr);  // returns 1(True) since condition is true 
    return 0;
}

// Traverse an array
#include<stdio.h>

void main(){

    int aadhar[5];

    // input 
    int *ptr = &aadhar[0];
    for(int i = 0; i < 5; i++){
        printf("%d index : ", i);
        scanf("%d", (ptr + i));     // &aadhar[i] can also be used 
    }

    // output 
    for(int i = 0; i < 5; i++){
        printf("%d index : %d \n", i, *(ptr + i));  // aadhar[i] will work too
    }
}

// Arrays as Function argument
#include<stdio.h>

void printNumbers(int arr[], int n);

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    printNumbers(arr, 6);
    return 0;
}

void printNumbers(int arr[], int n){

    for(int i = 0; i < n; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

// Multidimensional arrays - 2D arrays
// store marks of 3 sunjects of 2 students
#include<stdio.h>

void main(){

    int marks[2][3]; 
    marks[0][0] = 90;       
    marks[0][1] = 89;   
    marks[0][2] = 78;

    marks[1][0] = 90;
    marks[1][1] = 89;
    marks[1][2] = 78; 

    printf("%d", marks[0][0]);
}

// Write a function to count the number of odd numbers in an array
#include<stdio.h>

int countOdd(int arr[], int n);

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("%d", countOdd(arr, 6));     // returns the count of odd numbers
    return 0;
}

int countOdd(int arr[], int n){
    
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] %2 != 0){
            count++;
        }
    }
    return count;
}

// WAP to print the elements of an array in reverse order
#include<stdio.h>

void reverse(int arr[], int n);
void printArray(int arr[], int n);

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    printArray(arr, 5);
    return 0;
}

void printArray(int arr[], int n){

    for(int i = 0; i < n; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n){

    for(int i = 0; i < n/2; i++){       // n/2 is half of array
        int firstVal = arr[i];
        int secondVal = arr[n - i - 1]; 
        arr[i] = secondVal;
        arr[n - i - 1] = firstVal;
    }   
}

// WAP to store the fist n fibonacci numbers
#include<stdio.h>

void main(){

    int n;
    printf("Enter n [n>2] : ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    printf("%d \t%d \t", fib[0], fib[1]);

    for(int i = 2; i < n; i++){

        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d \t", fib[i]);
    }
    printf("\n");
}

// Create a 2D array, storing the tables of 2 & 3
#include<stdio.h>

// mention size in second dimension since it will treat it as an array 
void storeTable(int arr[][10], int m, int n, int number);

int main(){

    int tables[2][10];
    storeTable(tables, 0, 10, 2);
    storeTable(tables, 1, 10, 3);

    for(int i = 0; i < 10; i++){
        printf("%d \t", tables[0][i]);
    }

    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%d \t", tables[1][i]);
    }
    return 0;
}

void storeTable(int arr[][10], int m, int n, int number){ 

    for(int i = 0; i < n; i++){
        arr[m][i] = number * (i + 1);
    }
}

// In an array of numbers find how many times x occurs
#include <stdio.h>

int main(){

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Enter the number to count occurrences for: ");
    scanf("%d", &x);

    int count = 0;
    for(int i = 0; i < size; i++){
        if (arr[i] == x){
            count++;
        }
    }

    printf("The number %d occurs %d times in the array.\n", x, count);

    return 0;
}

// WAP to print the largest number in an array
#include <stdio.h>

int main() {

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    printf("The largest number in the array is: %d\n", largest);

    return 0;
}
