// assignment_tracker.c
#include <stdio.h>
#include <string.h>
#include "../Include/assignment_tracker.h"

void displayAssignment(struct Assignment a) {
    printf("\n-----------------------------");
    printf("\nAssignment ID : %d", a.id);
    printf("\nSubject       : %s", a.subject);
    printf("\nDue Date      : %s", a.dueDate);
    printf("\nStatus        : %s", a.status);
    printf("\n-----------------------------\n");
}

void updateStatus(struct Assignment tracker[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (tracker[i].id == id) {
            printf("Enter new status (Pending/Completed): ");
            scanf("%19s", tracker[i].status);  // limit input size
            printf(" Status updated successfully!\n");
            return;
        }
    }
    printf(" Assignment ID not found!\n");
}

void searchBySubject(struct Assignment tracker[], int n, char subject[]) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(tracker[i].subject, subject) == 0) {
            displayAssignment(tracker[i]);
            found = 1;
        }
    }
    if (!found) {
        printf(" No assignment found for subject: %s\n", subject);
    }
}

void displayAll(struct Assignment tracker[], int n) {
    if (n == 0) {
        printf(" No assignments added yet!\n");
    } else {
        printf("\n=== Assignment List ===\n");
        for (int i = 0; i < n; i++) {
            displayAssignment(tracker[i]);
        }
    }
}