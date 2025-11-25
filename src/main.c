#include <stdio.h>
#include <string.h>
#include "../Include/assignment_tracker.h"

int main() {
    struct Assignment tracker[MAX_ASSIGNMENTS];
    int n = 0, choice, id;
    char subject[50];

    do {
        printf("\n--- Digital Assignment Tracker ---\n");
        printf("1. Add Assignment\n");
        printf("2. Display All Assignments\n");
        printf("3. Update Assignment Status\n");
        printf("4. Search by Subject\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (n >= MAX_ASSIGNMENTS) {
                    printf(" Tracker full! Cannot add more assignments.\n");
                } else {
                    tracker[n].id = n + 1;
                    printf("Enter subject: ");
                    scanf("%49s", tracker[n].subject);
                    printf("Enter due date (DD/MM/YYYY): ");
                    scanf("%19s", tracker[n].dueDate);
                    strcpy(tracker[n].status, "Pending"); 
                    printf(" Assignment added successfully!\n");
                    n++;
                }
                break;

            case 2:
                displayAll(tracker, n);
                break;

            case 3:
                printf("Enter Assignment ID to update: ");
                scanf("%d", &id);
                updateStatus(tracker, n, id);
                break;

            case 4:
                printf("Enter subject to search: ");
                scanf("%49s", subject);
                searchBySubject(tracker, n, subject);
                break;

            case 5:
                printf(" Exiting... Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}