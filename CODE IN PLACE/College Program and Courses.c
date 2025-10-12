#include <stdio.h>

int main() {
    int program, year;

    printf("Select your program:\n");
    printf("1 = Computer Science\n");
    printf("2 = Electrical Engineering\n");
    printf("Enter choice: ");
    scanf("%d", &program);

    switch (program) {
        case 1:  // Computer Science
            printf("Enter year (1 = First Year, 2 = Second Year): ");
            scanf("%d", &year);

            switch (year) {
                case 1:
                    printf("Courses: Programming Fundamentals, Mathematics, Digital Logic Design\n");
                    break;
                case 2:
                    printf("Courses: Data Structures, Operating Systems, Database Systems\n");
                    break;
                default:
                    printf("Invalid year input.\n");
                    break;
            }
            break;

        case 2:  // Electrical Engineering
            printf("Enter year (1 = First Year, 2 = Second Year): ");
            scanf("%d", &year);

            switch (year) {
                case 1:
                    printf("Courses: Circuit Analysis, Engineering Mathematics, Basic Electronics\n");
                    break;
                case 2:
                    printf("Courses: Signals and Systems, Electromagnetics, Power Systems\n");
                    break;
                default:
                    printf("Invalid year input.\n");
                    break;
            }
            break;

        default:
            printf("Invalid program choice.\n");
            break;
    }

    return 0;
}
