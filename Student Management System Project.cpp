#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct student {
    char name[50];
    int roll_number;
    float marks;
};

struct student students[MAX_STUDENTS];
int num_students = 0;

void add_student() {
    if (num_students == MAX_STUDENTS) {
        printf("Maximum number of students reached!\n");
        return;
    }
    struct student s;
    printf("Enter name: ");
    fflush(stdin);
    gets(s.name);  // Read the student's name
    fflush(stdin);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_number);  // Read the student's roll number
    printf("Enter marks: ");
    scanf("%f", &s.marks);  // Read the student's marks
    students[num_students] = s;  // Add the student to the array of students
    num_students++;
}

void list_students() {
    if (num_students == 0) {
        printf("No students to display!\n");
        return;
    }
    printf("Roll No.\tName\t\t\t\tMarks\n");
    printf("--------\t----\t\t\t\t-----\n");
    for (int i = 0; i < num_students; i++) {
        // Print the roll number, name, and marks of each student
        printf("%d\t\t%-30s\t%.2f\n", students[i].roll_number, students[i].name, students[i].marks);
    }
}

void search_student() {
    if (num_students == 0) {
        printf("No students to search!\n");
        return;
    }
    int roll_number;
    printf("Enter roll number to search: ");
    scanf("%d", &roll_number);  
	// Read the roll number to search
    for (int i = 0; i < num_students; i++) {
        if (students[i].roll_number == roll_number) {
            // If a student with the given roll number is found, print their details
            printf("Roll No.\tName\t\t\t\tMarks\n");
            printf("--------\t----\t\t\t\t-----\n");
            printf("%d\t\t%-30s\t%.2f\n", students[i].roll_number, students[i].name, students[i].marks);
            return;
        }
    }
    printf("Student not found!\n");
}

void delete_student() {
    if (num_students == 0) {
        printf("No students to delete!\n");
        return;
    }
    int roll_number;
    printf("Enter roll number to delete: ");
    scanf("%d", &roll_number);  // Read the roll number to delete
    for (int i = 0; i < num_students; i++) {
        if (students[i].roll_number == roll_number) {
            // If a student with the given roll number is found, delete them by shifting the array elements
            for (int j = i; j < num_students - 1; j++) {
                students[j] = students[j + 1];
            }
            num_students--;
            printf("Student deleted!\n");
            return;
        }
    }
    printf("Student not found!\n");
}

int main() {
    int choice;
    while (1) {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. List Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add_student();  
				// Call the function to add a student
                break;
            case 2:
                list_students();  
				// Call the function to list all students
                break;
            case 3:
                search_student();  
				// Call the function to search for a student
                break;
            case 4:
                delete_student();  
				// Call the function to delete a student
                break;
            case 5:
                printf("Exiting program...\n");
                exit(0);  // Exit the program
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}











