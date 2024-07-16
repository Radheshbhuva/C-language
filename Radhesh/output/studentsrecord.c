#include <stdio.h>

#define MAX_LENGTH 50

int main() {
    char name[MAX_LENGTH];
    char course[MAX_LENGTH];
    FILE *fp;
    
    // Open file in write mode
    fp = fopen("data.txt", "w");
    
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    // Input for three students
    for (int i = 0; i < 3; ++i) {
        // Input student's name
        printf("Enter student %d name: ", i + 1);
        fgets(name, MAX_LENGTH, stdin);
        
        // Remove newline character if present
        if (name[strlen(name) - 1] == '\n')
            name[strlen(name) - 1] = '\0';
        
        // Input student's course
        printf("Enter student %d course: ", i + 1);
        fgets(course, MAX_LENGTH, stdin);
        
        // Remove newline character if present
        if (course[strlen(course) - 1] == '\n')
            course[strlen(course) - 1] = '\0';
        
        // Write to file
        fprintf(fp, "Student Name: %s, Course: %s\n", name, course);
    }
    
    // Close file
    fclose(fp);
    
    printf("Data written to file successfully.\n");
    
    return 0;
}
