#include<stdio.h>
#include<stdlib.h>

struct Node {
  int val;
  struct Node *next;
};

struct Node *head;

void insert_node(struct Node *linkedList, int value) {
  linkedList->val = value;
  linkedList->next = NULL;
}

struct Node* create_new_node(int value) {
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    newNode->val = value;
    newNode->next = NULL;
    return newNode;
}

void search_list(int value) {
  printf("\nSearching for %d, Result: ", value);
  struct Node *ptr = head;

  while (ptr != NULL) {
    if (ptr->val == value) {
      printf("found\n");
      return;
    }
    ptr = ptr->next;
  }
  printf("not found\n");
}

void remove_from_list(int value) {
  struct Node *ptr;
  struct Node *prev;
  ptr = head;
  prev = head;

  if (ptr == NULL) {
    return;
  }

  while (ptr != NULL) {

    if (ptr->val == value) {
      
      if (ptr == head) {
        free(ptr);

        if (ptr->next == NULL) {
          head = NULL;
        } else {
          head = ptr->next;
        }
        return;
      }

      prev->next = ptr->next;
      free(ptr);
      return;
    }

    prev = ptr;
    ptr = ptr->next;
  }
}

void add_to_list(int value) {
  struct Node *ptr; 
  struct Node *prev;
  ptr = head;
  prev = head;

  if (head == NULL) {
    head = (struct Node *) malloc(sizeof(struct Node));
    head->val = value;
    head->next = NULL;
    return;
  }

  while (ptr != NULL) {
    prev = ptr;
    ptr = ptr->next; 
  }

  prev->next = create_new_node(value);
}

void print_list() {
  struct Node *ptr;
  ptr = head;

  printf("\nLinked List: \n");
  while (ptr != NULL) {
    printf("%4d", ptr->val);
    ptr = ptr->next;
  }
  return;
}

int main() {
  print_list();
  add_to_list(10);
  add_to_list(19);
  add_to_list(2);
  add_to_list(5);
  add_to_list(3);
  add_to_list(23);
  print_list();
  search_list(3);
  search_list(595);
  remove_from_list(3);
  print_list();
  remove_from_list(10);
  print_list();
}