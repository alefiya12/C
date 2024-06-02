//WAP to reverse a string and check that the string is palindrome or not Write a program of structure employee that provides the following
//a. information -print and display empno, empname, address andage
//b. Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age

#include <stdio.h>

// Define the structure
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

// Function to print employee details
void printEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Employee Address: %s\n", emp.address);
    printf("Employee Age: %d\n", emp.age);
}

int main() {
    struct Employee emp;

    // Get employee details
    printf("Enter Employee Number: ");
    scanf("%d", &emp.empno);
    getchar(); // Clear newline character from the buffer
    printf("Enter Employee Name: ");
    gets(emp.empname);
    printf("Enter Employee Address: ");
    gets(emp.address);
    printf("Enter Employee Age: ");
    scanf("%d", &emp.age);

    // Print employee details
    printf("\nEmployee Details:\n");
    printEmployee(emp);

    return 0;
}

// #include <stdio.h>

// // Define the structure
// struct Employee {
//     int empno;
//     char empname[50];
//     char address[100];
//     int age;
// };

// // Function to print employee details
// void printEmployee(struct Employee emp) {
//     printf("Employee Number: %d\n", emp.empno);
//     printf("Employee Name: %s\n", emp.empname);
//     printf("Employee Address: %s\n", emp.address);
//     printf("Employee Age: %d\n", emp.age);
// }

// int main() {
//     struct Employee employees[5];

//     // Get details for 5 employees
//     for (int i = 0; i < 5; i++) {
//         printf("\nEnter details for Employee %d:\n", i + 1);
//         printf("Enter Employee Number: ");
//         scanf("%d", &employees[i].empno);
//         getchar(); // Clear newline character from the buffer
//         printf("Enter Employee Name: ");
//         gets(employees[i].empname);
//         printf("Enter Employee Address: ");
//         gets(employees[i].address);
//         printf("Enter Employee Age: ");
//         scanf("%d", &employees[i].age);
//     }

//     // Print details of 5 employees
//     printf("\nEmployee Details:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("\nEmployee %d:\n", i + 1);
//         printEmployee(employees[i]);
//     }

//     return 0;
// }

