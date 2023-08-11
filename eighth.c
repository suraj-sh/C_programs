// FILE I/O
// Reading from a file
#include<stdio.h>

int main(){

    // file declaration
    FILE *fptr;
    fptr = fopen("test.txt", "r");  // r will read the file

    char ch;
    fscanf(fptr, "%c", &ch);
    printf("character : %c", ch);
    if (fptr == NULL){
        printf("File doesn't exist"); 
    }
    else{
        fclose(fptr);
    }
    return 0;
}

// Writing to a file
#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("test.txt", "w"); // w creates a new file if not present and writes data 

    fprintf(fptr, "%c", 'S');
    fprintf(fptr, "%c", 'S');

    fclose(fptr);
    return 0;
}

// Adding new info to a created file
#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("test.txt", "a"); // a appends new data without loss of previous data  

    fprintf(fptr, "%c", 'H');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'R');
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A'); 
    fclose(fptr);
    return 0;
}

// using fgtec()
#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("test.txt", "r");
    char ch;
    ch = fgetc(fptr);
    while(ch != EOF){   // end of file
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");

    fclose(fptr);
    return 0;
}

// Make a program to read 5 integers from a file
#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("test.txt", "r");
    
    int n; 
    fscanf(fptr, "%d", &n);
    printf("Number : %d \n", n);
    fscanf(fptr, "%d", &n);
    printf("Number : %d \n", n); 
    fscanf(fptr, "%d", &n);
    printf("Number : %d \n", n);
    fscanf(fptr, "%d", &n);
    printf("Number : %d \n", n);
    fscanf(fptr, "%d", &n);
    printf("Number : %d \n", n);

    fclose(fptr);
    return 0;
}

// Make a program to input student informaion from a user & enter it to a file
#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("Student.txt", "w");

    char name[30];
    int age;
    float cgpa;

    // for taking input
    printf("Enter name : ");
    scanf("%s", name);
    printf("Enter age : ");
    scanf("%d", &age);
    printf("Enter CGPA : ");
    scanf("%f", &cgpa);

    // for storing into file 
    fprintf(fptr, "%s \t", name);
    fprintf(fptr, "%d \t", age);
    fprintf(fptr, "%f \t", cgpa);

    fclose(fptr);
    return 0;
}

// WAP to write all the odd numbers from 1 to n in a file
#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("Odd.txt", "w");

    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i %2 != 0){
            fprintf(fptr, "%d \n", i);
        }
    }

    fclose(fptr);
    return 0;
}

// 2 numbers a & b are written in a file. WAP to replace them with their sum
#include<stdio.h>

int main(){

    FILE *fptr;
    fptr = fopen("sum.txt", "r");   // reads values from files

    int a;
    fscanf(fptr, "%d", &a);
    int b;
    fscanf(fptr, "%d", &b);

    fclose(fptr);

    fptr = fopen("sum.txt", "w");   // writes the sum in that same file
    fprintf(fptr, "%d", a + b);
    fclose(fptr);
    return 0;
}