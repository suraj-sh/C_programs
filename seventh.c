// STRUCTURES
#include<stdio.h>
#include<string.h>

// user defined
struct student{

    int roll;
    float cgpa;
    char name[50];
};

int main(){

    // for accessing struct we initialize it to s1
    struct student s1;
    s1.roll = 1664; 
    s1.cgpa = 9.2;
    strcpy(s1.name, "Suraj"); // for accessing an array we have to use library function

    printf("Student name = %s \n", s1.name);
    printf("Student roll no = %d \n", s1.roll);
    printf("Student cgpa = %f \n", s1.cgpa);

    return 0;
}

// WAP to store the data of 3 student
#include<stdio.h>
#include<string.h>

struct student{

    int roll;
    float cgpa;
    char *name;
};

int main(){

    // for accessing struct we initialize it to s1
    struct student s1;
    s1.roll = 1664; 
    s1.cgpa = 9.2;
    strcpy(s1.name, "Suraj");

    printf("Student name = %s \n", s1.name);
    printf("Student roll no = %d \n", s1.roll);
    printf("Student cgpa = %f \n", s1.cgpa);

    struct student s2;
    s2.roll = 1665; 
    s2.cgpa = 8.3;
    strcpy(s2.name, "Sujay");

    printf("Student name = %s \n", s2.name);
    printf("Student roll no = %d \n", s2.roll);
    printf("Student cgpa = %f \n", s2.cgpa);

    struct student s3;
    s3.roll = 1665; 
    s3.cgpa = 9.8;
    strcpy(s3.name, "Sanchay");

    printf("Student name = %s \n", s3.name);
    printf("Student roll no = %d \n", s3.roll);
    printf("Student cgpa = %f \n", s3.cgpa);

    return 0;
}

// Initializing structures
#include<stdio.h>

struct student{

    int roll;
    float cgpa;
    char name[20];
};

int main(){

    // another way to initialize values
    struct student s1 = {104, 6.6, "Ajay"};
    printf("Student roll no = %d \n", s1.roll);

    // for accessing using pointers
    struct student *ptr = &s1;
    printf("Student roll no = %d \n", (*ptr).roll); 
    printf("Student roll no = %d \n", ptr->roll); // can also be written using arrow    
}

// Enter address (house no, block, city, state) of 5 people
#include<stdio.h>
#include<string.h>

struct address{

    int houseNo;
    int block;
    char city[20];
    char state[20];
};

void printAdd(struct address add);

int main(){

    struct address adds[5];     // store address of 5 people from 0 to 4
    printf("Enter info for person 1 : ");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("Enter info for person 2 : ");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("Enter info for person 3 : ");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printf("Enter info for person 4 : ");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printf("Enter info for person 5 : ");
    scanf("%d", &adds[4].houseNo);
    scanf("%d", &adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);
    return 0;
}

void printAdd(struct address add){

    printf("Address is : %d, %d, %s, %s \n", add.houseNo, add.block, add.city, add.state);
}

// Create a structure to store vectors. Then make a function to return  summ of 2 vectors
#include<stdio.h>

struct vector{

    int x;
    int y;
};

void calculateSum(struct vector v1, struct vector v2, struct vector sum); 

int main(){

    struct vector v1 = {5, 10};
    struct vector v2 = {3, 7};
    struct vector sum = {0};

    calculateSum(v1, v2, sum);
    return 0;
}

void calculateSum(struct vector v1, struct vector v2, struct vector sum){

    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of x is : %d \n", sum.x);
    printf("Sum of y is : %d \n", sum.y);
}

// Create a structure to store complex numbers (use arrow operator)
#include<stdio.h>

struct complex{

    int real;
    int img;
};

int main(){

    struct complex number1 = {5, 8};
    struct complex *ptr = &number1;
    printf("Real part : %d \n", ptr->real);
    printf("Imaginary part : %d \n", ptr->img);
    return 0;
}

// Structure to store bank information of a customer of ABC bank, Also make an alias for it
#include<stdio.h>
#include<string.h>

// using typedef creates an alias for struct datatype
typedef struct BankAccount{
    
    int accountNo;
    char name[30];
} acc;          // this will be used instead of struct BankAccount


int main(){

    acc acc1 = {123, "Suraj"};
    acc acc2 = {124, "Sanjay"};

    printf("acc no : %d \n", acc1.accountNo);
    printf("name : %s \n", acc1.name);
    return 0;
}