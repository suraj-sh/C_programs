// STRINGS 
// Initialising strings
#include<stdio.h>

int main(){

    // 1st way 
    char name[] = {'S', 'U', 'R', 'A', 'J', '\0'};  // \0 mean end and it alse considers every element as whole

    // 2nd way
    char name[] = "SURAJ";  // compiler will automatically put \0 at the end 
    char name[] = "SURAJ SHARMA"; // space is also considered as a string    
    return 0;
}

// Create a string firstName and lastName to store details of user & print all characters using loop
#include<stdio.h>

void printString(char arr[]);

int main(){

    char firstName[] = "Suraj";
    char lastName[] = "Sharma";

    printString(firstName);
    printString(lastName);
    return 0;
}

void printString(char arr[]){

    for(int i = 0; arr[i] != '\0'; i++){    // print until the end of string 
        printf("%c", arr[i]);
    }
    printf("\n");
}

// format specifer for string & fgets() and puts()
#include<stdio.h>

int main(){

    char fullName[50];
    // format specifier for string is %s
    scanf("%s", fullName);  // drawback is it cannot input multiwords
    printf("Full name is : %s", fullName);  // it will only print characters before space

    // using fgets() and puts() to input and output string
    char name[50];
    fgets(name, 50, stdin); // standard input 
    puts(name);     // it will put \0 at the end automatically
    return 0;
}

// Make a program that input user's name & prints its length
#include<stdio.h>

void printString(char arr[]);
int countLength(char arr[]);

int main(){

    char name[50];
    fgets(name, 50, stdin);
    printf("Length is : %d", countLength(name));
    return 0;
}

void printString(char arr[]){

    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}
int countLength(char arr[]){

    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count-1;     // o.w. it will count \0 as a character too
}

// Standard library function <string.h> to be included for performing string operations
#include<stdio.h>
#include<string.h>

int main(){

    // 1) strlen(str) - counts number of characters excluding '\0'
    char name[] = "Suraj Sharma";
    printf("Length : %d", strlen(name));

    // 2) strcpy(newStr, oldStr) - copies values of old strig to new string
    char oldStr[] = "RSL";
    char newStr[] = "Solution";
    strcpy(newStr, oldStr);
    puts(newStr); 

    // 3) strcat(firstStr, secondStr) - concatenates first string with second string
    char firstStr[30] = "RSL ";     // size should be mentioned in the first string 
    char secondStr[] = "Solution";
    strcat(firstStr, secondStr);
    puts(firstStr);

    // 4) strcmp(firStr, secStr) - Compares 2 strings & returns a value
    char fiStr[] = "Python";  
    char scStr[] = "Cython";
    printf("%d",strcmp(fiStr, scStr)); // returns 0 if equal 1 if greater else -1 acc. to ASCII 
    return 0;
}

// Take a string input from user using %c
#include<stdio.h>

int main(){

    char str[100];
    char ch;
    int i = 0;

    while(ch != '\n'){
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
    return 0;
}

// Find the salted form of a password entered by user if the salt is "123" & added at the end
#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main(){

    char password[30];
    scanf("%s", password);
    salting(password);
    return 0;
}

void salting(char password[]){

    char salt[] = "123";
    char newPass[50];

    strcpy(newPass, password);
    strcat(newPass, salt);
    puts(newPass);
}

// Write a function named slice, which takes a string & returns a sliced string from index n to m 
#include<stdio.h>
#include<string.h>

void slice(char str[], int m, int n);

int main(){

    char str[] = "RSLSolution";
    slice(str, 3, 10);
    return 0;
}

void slice(char str[], int m, int n){

    char newStr[50];
    int j = 0;
    for(int i = m; i <= n; i++, j++){
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}

// Write a function to count the occurrence of vowels in a string
#include<stdio.h>
#include<string.h>

int countVowels(char str[]);

int main(){

    char str[] = "RSLsolution";
    printf("Vowels are : %d", countVowels(str));
    return 0;
}

int countVowels(char str[]){

    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u'){
                count++;
            }
    }
    return count;
}

// Check if a given character is present in a string or not 
#include<stdio.h>
#include<string.h>

void checkChar(char str[], char ch);

int main(){

    char str[] = "Online Internship";
    char ch = 'i';
    checkChar(str, ch);
    return 0;
}

void checkChar(char str[], char ch){

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ch){
            printf("Character is present in string");
            return;
        }
    }
    printf("Character is Not present in string");
}

// WAP to convert all lowercase vowels to uppercase in a string
#include<stdio.h>
#include<string.h>

void convertToUpperCase(char str[]);

int main(){
    
    char str[100];
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    convertToUpperCase(str);
    printf("Uppercase vowels : %s", str);
    return 0;
}

void convertToUpperCase(char str[]){
    int i = 0;
    while(str[i] != '\0') {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u'){
            str[i] = str[i] - 32;   // Convert lowercase vowel to uppercase using ASCII difference
        }
        i++;
    }
}