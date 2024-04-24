#include <stdio.h>
#include <string.h>

struct employee {
    char employee_name[100];
    char role[50];
};

main() {
    int n;
    
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    struct employee employ[n];
    
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d details:\n", i + 1);
        printf("Employee Name: ");
        scanf("%s", employ[i].employee_name);
        printf("Employee Role: ");
        scanf("%s", employ[i].role);
    }    

    FILE *p;
    p = fopen("data.txt","w");

    if (p == NULL) {
        printf("Can't open file.");
    } else {
        printf("Open file.\n");

        for (int i = 0; i < n; i++) {
            fprintf(p, "Employee %d details:\n", i + 1);
            fprintf(p, "Employee Name: %s\n", employ[i].employee_name);
            fprintf(p, "Employee Role: %s\n", employ[i].role);
        }
        }
}
