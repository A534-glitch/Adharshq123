#include <stdio.h>

struct Student {
    char student_name[50];
    int student_id;
    int student_age;
};

int main() {
    
    struct Student steeve = {"Steeve", 135, 21};
    printf("Student Name: %s\n", steeve.student_name);
    printf("Student ID: %d\n", steeve.student_id);
    printf("Student Age: %d\n", steeve.student_age);

    return 0;
}
