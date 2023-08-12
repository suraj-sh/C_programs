// DYNAMIC MEMORY ALLOCATION
// Understanding malloc()
#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr;
    // takes number of bytes to be allocated & returns pointer of type void 
    ptr = (int *) malloc(5 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for(int i = 0; i < 5; i++){
        printf("%d \n", ptr[i]);
    }
    return 0;
}

// WAP to allocate memory to store 5 prices 
#include<stdio.h>
#include<stdlib.h>

int main(){

    float *ptr; 
    ptr = (float *) malloc(5 * sizeof(float));

    ptr[0] = 50.3;
    ptr[1] = 20.4;
    ptr[2] = 34.5;
    ptr[3] = 76.4;
    ptr[4] = 92.8;

    for(int i = 0; i < 5; i++){
        printf("%f \n", ptr[i]);
    }
    return 0;
}

// Understanding calloc() and free()
// WAP to allocate memory of size n, where n is entered by the user and then free the memory
#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr;
    int n;
    printf("Enter n :" );
    scanf("%d", &n);

    // continuous allocation, initializes every location with 0
    ptr = (int *) calloc(n, sizeof(int));

    for(int i = 0; i < n; i++){
        printf("Calloc = %d \n", ptr[i]);
    }

    free(ptr);  // frees the memory

    ptr = (int *) calloc(2, sizeof(int));   // prints only 2 values

    for(int i = 0; i < 2; i++){
        printf("After freeing = %d \n", ptr[i]);
    }

    return 0;
}

// Create an array of size 5(using calloc) & enter its values from the user
#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("Enter numbers(5) :" );

    for(int i = 0; i < 5; i++){
        scanf("%d", &ptr[i]);
    }
    
    for(int i = 0; i < 5; i++){
        printf("Number %d is %d \n", i, ptr[i]);
    }
    return 0;
}

// Understanding realloc()
// Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even numbers
#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    
    for(int i = 0; i < 5; i++){
        printf("ODD : %d \n", ptr[i]);
    }
    
    // reallocates same memory with different size
    ptr = realloc(ptr, 6);
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;
    for(int i = 0; i < 6; i++){
        printf("EVEN : %d \n", ptr[i]);
    }
    return 0;
}

// WAP to calculate perimeter of rectangle. Take sides a & b from user
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int perimeter;

    ptr = (int *)calloc(2, sizeof(int));

    printf("Enter length : ");
    scanf("%d", &ptr[0]);

    printf("Enter width : ");
    scanf("%d", &ptr[1]);

    perimeter = 2 * (ptr[0] + ptr[1]);
    printf("Perimeter of the rectangle: %d\n", perimeter);

    free(ptr);

    return 0;
}

// Take a number n from user % output its cube
#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr;
    int n;
    printf("Enter num :" );
    scanf("%d", &n);

    ptr = (int *) calloc(1, sizeof(int));

    *ptr = n * n * n;
    printf("Cube of %d is: %d\n", n, *ptr);
    
    free(ptr);
    return 0; 

}