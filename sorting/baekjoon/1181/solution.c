#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char string[64];
    struct node* next;
} node;

int my_strcmp(char* str1, char* str2) {
    const int length = (int)strlen(str1);
    for(int index = 0 ; index < length ; index++) {
        if(str1[index] < str2[index]) {
            return 1;
        } else if (str2[index] < str1[index]) {
            return -1;
        } else {

        }
    }

    return 0;
}

void print_list(node* head) {
    node* current = head->next;
    while (1) {
        printf("%s\n", current->string);

        if (current->next == NULL) break;
        else current = current->next;
    }
}

void insert_node(node* head) {
    node* current = head;
    
    node* temp = (node*)malloc((sizeof(node)));
    scanf("%s", temp->string);
    temp->next = NULL;
    
    while(1) {
        if (current->next == NULL) {
            current->next = temp;
            
            break;
        } else if (strlen(temp->string) == strlen(current->next->string)) {
            if (my_strcmp(temp->string, current->next->string) == 1) {
                temp->next = current->next;
                current->next = temp;
                
                break;
            } else if (my_strcmp(temp->string, current->next->string) == -1) {
                // Take one more step
                current = current->next;
            } else {
                // Identical string
                break;
            }
        } else if (strlen(temp->string) < strlen(current->next->string)) {
            temp->next = current->next;
            current->next = temp;
            
            break;
        } else {
            current = current->next;
        }
    }
}

int main(void) {
    int n = 0;
    scanf("%d", &n);

    node* head = (node*)calloc(1, sizeof(node));
    head->next = NULL;
    
    while(n != 0) {
        insert_node(head);
        n = n - 1;
    }

    print_list(head);

    return 0;
}
