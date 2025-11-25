// assignment_tracker.h
#ifndef ASSIGNMENT_TRACKER_H
#define ASSIGNMENT_TRACKER_H

#include <stdio.h>

#define MAX_ASSIGNMENTS 100

struct Assignment {
    int id;
    char subject[50];
    char dueDate[20];
    char status[20];
};

void displayAssignment(struct Assignment a);
void updateStatus(struct Assignment tracker[], int n, int id);
void searchBySubject(struct Assignment tracker[], int n, char subject[]);
void displayAll(struct Assignment tracker[], int n);

#endif // ASSIGNMENT_TRACKER_H
