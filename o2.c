#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int countElements(struct Node* head) {
    int count = 0;
    struct Node* current = head;

    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}

void insert(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

int main() {
    struct Node* head = NULL;

    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    insert(&head, 40);

    int elementCount = countElements(head);

    printf("Eleman sayısı: %d\n", elementCount);

    return 0;
}
