#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char* data;
    struct Node* next;
};

void findWordsStartingWith(struct Node* head, char* prefix) {
    struct Node* current = head;

    printf("Başlangıcı '%s' olan kelimeler: ", prefix);

    while (current != NULL) {
        if (strncmp(current->data, prefix, strlen(prefix)) == 0) {
            printf("%s ", current->data);
        }
        current = current->next;
    }

    printf("\n");
}

void insert(struct Node** head, char* data) {
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

    insert(&head, "apple");
    insert(&head, "application");
    insert(&head, "banana");
    insert(&head, "art");
    insert(&head, "ball");
    insert(&head, "cat");

    char prefix[] = "app";

    findWordsStartingWith(head, prefix);

    return 0;
}
