#include <stdio.h>
#include <string.h>

struct name {
    char fname[20];
    char mname[20];
    char lname[20];
};

struct date {
    int dd, mm, yy;
};

struct employee {
    int empno;
    struct name n;
    struct date doj;
    float salary;
};

int main() {
    int n, i, j;
    struct employee e[50], temp;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    /* Input */
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Emp No: ");
        scanf("%d", &e[i].empno);

        printf("First Name: ");
        scanf("%s", e[i].n.fname);

        printf("Middle Name: ");
        scanf("%s", e[i].n.mname);

        printf("Last Name: ");
        scanf("%s", e[i].n.lname);

        printf("Date of Joining (dd mm yy): ");
        scanf("%d %d %d", &e[i].doj.dd, &e[i].doj.mm, &e[i].doj.yy);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    /* a. Display all employees */
    printf("\n--- Employee Details ---\n");
    for (i = 0; i < n; i++) {
        printf("\nEmp No: %d", e[i].empno);
        printf("\nName: %s %s %s", e[i].n.fname, e[i].n.mname, e[i].n.lname);
        printf("\nDOJ: %02d-%02d-%02d", e[i].doj.dd, e[i].doj.mm, e[i].doj.yy);
        printf("\nSalary: %.2f\n", e[i].salary);
    }

    /* b. Employees with last name Mishra */
    printf("\n--- Employees with Last Name Mishra ---\n");
    for (i = 0; i < n; i++) {
        if (strcmp(e[i].n.lname, "Mishra") == 0) {
            printf("%d %s %s %s %.2f\n",
                   e[i].empno,
                   e[i].n.fname,
                   e[i].n.mname,
                   e[i].n.lname,
                   e[i].salary);
        }
    }

    /* c. Sort by salary (descending) */
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (e[i].salary < e[j].salary) {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }

    printf("\n--- Employees Sorted by Salary (Descending) ---\n");
    for (i = 0; i < n; i++) {
        printf("%s %s : %.2f\n", e[i].n.fname, e[i].n.lname, e[i].salary);
    }

    /* d. Sort by first name (ascending) */
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(e[i].n.fname, e[j].n.fname) > 0) {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }

    printf("\n--- Employees Sorted by First Name (Ascending) ---\n");
    for (i = 0; i < n; i++) {
        printf("%s %s\n", e[i].n.fname, e[i].n.lname);
    }

    return 0;
}
