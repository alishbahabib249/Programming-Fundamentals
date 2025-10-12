#include <stdio.h>

int main() {
    int day;
    char time;

    printf("Enter day of the week (1 = Monday, ..., 7 = Sunday): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Enter time of day (M = Morning, E = Evening): ");
            scanf(" %c", &time);

            switch (time) {
                case 'M':
                case 'm':
                    printf("Go to Class\n");
                    break;
                case 'E':
                case 'e':
                    printf("Do Homework\n");
                    break;
                default:
                    printf("Invalid time input.\n");
                    break;
            }
            break;

        case 6:
        case 7:
            printf("Enter time of day (M = Morning, E = Evening): ");
            scanf(" %c", &time);

            switch (time) {
                case 'M':
                case 'm':
                    printf("Play Sports\n");
                    break;
                case 'E':
                case 'e':
                    printf("Watch Movie\n");
                    break;
                default:
                    printf("Invalid time input.\n");
                    break;
            }
            break;

        default:
            printf("Invalid day input.\n");
            break;
    }

    return 0;
}


