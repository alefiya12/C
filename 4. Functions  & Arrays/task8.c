//WAP to show difference between Structure and Union.
#include <stdio.h>
#include <string.h>

// Define a structure
struct StudentStruct {
    int id;
    char name[20];
    float marks;
};

// Define a union
union StudentUnion {
    int id;
    char name[20];
    float marks;
};

int main() {
    // Declare variables for structure and union
    struct StudentStruct student1;
    union StudentUnion student2;

    // Initialize and display structure data
    student1.id = 1;
    strcpy(student1.name, "John");
    student1.marks = 85.5;

    printf("Structure:\n");
    printf("ID: %d\n", student1.id);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);

    // Initialize and display union data
    student2.id = 1;
    printf("\nUnion (ID):\n");
    printf("ID: %d\n", student2.id);

    strcpy(student2.name, "John");
    printf("Union (Name):\n");
    printf("Name: %s\n", student2.name);

    student2.marks = 85.5;
    printf("Union (Marks):\n");
    printf("Marks: %.2f\n", student2.marks);

    // Display sizes of structure and union
    printf("\nSize of Structure: %lu bytes\n", sizeof(student1));
    printf("Size of Union: %lu bytes\n", sizeof(student2));

    // Display all members after changing one in union
    student2.id = 10;
    printf("\nUnion after modifying ID:\n");
    printf("ID: %d\n", student2.id);
    printf("Name: %s\n", student2.name); // Name and Marks will be affected
    printf("Marks: %.2f\n", student2.marks);

    return 0;
}
