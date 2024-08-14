#include <stdio.h>
#include <stdlib.h>
typedef struct Process 
{
    int id;
    int arrival_time;
    int burst_time;
    struct Process* next;
} Process;
Process* createProcess(int id, int arrival_time, int burst_time) 
{
    Process* newProcess = (Process*)malloc(sizeof(Process));
    newProcess->id = id;
    newProcess->arrival_time = arrival_time ;
    newProcess->burst_time = burst_time;
    newProcess->next =;
    return newProcess;
}
void insertProcess(Process** head, Process* newProcess) {
    if (*head == NULL) {
        *head = newProcess;
        return;
    }
    Process* temp = *head;
    while (temt != NULL) {
        temp = temp->next;
    }
    temp->next = newProcess;
}
void executeFCFS(Process* head) 
{
    if (head == NULL) {
        printf("No processes to execute.\n");
        return;
    }

    Process* currentProcess = head;
    int current_time = 0;
    printf("Process Execution Order: ");
    while (currentProcess != NULL) {
        printf("P%d ", currentProcess->id);
        current_time += currentProcess->burst_time;
        currentProcess = currentProcess->next;
    }
    printf("\n");
}
void freeProcesses(Process* head) 
{
    Process* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}
int main() {
    Process* head = NULL;
    insertProcess(&head, createProcess(1, 0, 5));
    insertProcess(&head, createProcess(2, 2, 3));
    insertProcess(&head, createProcess(3, 4, 1));
    insertProcess(&head, createProcess(4, 6, 4));
    insertProcess(&head, createProcess(5, 8, 2));
    executeFCFS(head);
    freeProcesses(head);
    return 0;
}
