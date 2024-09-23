#include <stdio.h>
#include <stdlib.h>
int n = 0;
struct Node {
  int id;
  float gpa;
  struct Node *prev;
  struct Node *next;
};
struct Node *deleteHead(struct Node *head) {
  if (head->next == NULL)
    return NULL;
  else {
    struct Node *NewHead = head->next;
    NewHead->prev = NULL;
    head->next = NULL;
    free(head);
    return NewHead;
    // Code to delete head from the dll and return new head(4.2)
  }
}

struct Node *removeDuplicates(struct Node *head, int id) {
  // Code to delete all occurences of the record id and
  int count = 0;
  struct Node *cur = head;
  struct Node *temp;
  while (cur != NULL) {
    if (cur->id == id) {
      count++;
    }
    if (cur->id != id || count == 1) {
      cur = cur->next;
    } else {
      if (cur->next != NULL) {
        temp = cur;
        cur = cur->next;
        temp->next->prev = temp->prev;
        temp->prev->next = temp->next;
        temp->next = NULL;
        temp->prev = NULL;
        free(temp);
      } else {
        temp = cur;
        cur = cur->next;
        temp->prev->next = NULL;
        temp->prev = NULL;
        free(temp);
      }
    }
  }

  return head;
  // keep only the oldest record with id=id and return new head(4.3)
}
struct Node *reverse(struct Node *head) {
  // Code to reverse and dll return new head(4.4)
  struct Node *p = head, *q = NULL, *r = NULL;
  while (p != NULL) {
    r = p->next;
    p->next = q;
    p->prev = r;
    q = p;
    p = r;
  }
  return q;
}
// ROTATE BY K PLACES
struct Node *pointertosecondlastElement(struct Node *Head, int n) {
  struct Node *p = Head;
  while (p->next->next != NULL) {
    p = p->next;
  }
  return p;
}
struct Node *pointertolastElement(struct Node *Head, int n) {
  struct Node *p = Head;
  while (p->next != NULL) {
    p = p->next;
  }
  return p;
}

struct Node *rotatePrerequisite(struct Node *Head) {
  struct Node *p = pointertosecondlastElement(Head, n);
  struct Node *q = pointertolastElement(Head, n);
  p->next = NULL;
  q->prev = NULL;
  q->next = Head;
  return q;
}
struct Node *rotateByKplaces(struct Node *head, int k) {
  // Code to rotate the dll by k places to the right and return new head(4.5)
  if (head->next == NULL)
    return head;
  else {
    struct Node *HeadNew;
    for (int i = 0; i < k; i++) {
      HeadNew = rotatePrerequisite(head);
      head = HeadNew;
    }
    return HeadNew;
  }
}

// SORTED LIST
void sortedPrerequisite(struct Node *newNode, struct Node **head) {
  struct Node *temp;
  struct Node* del = *head;
  if (*head == NULL) { // for empty linked list
    *head = newNode;
    return;
  }
  if ((*head)->gpa < newNode->gpa) { // Node inserted at start
    newNode->next = (*head);
    (*head)->prev = newNode;
    newNode->prev = NULL;
    (*head) = newNode;
    return;
  }
  temp = (*head);
  for (temp = (*head); temp->next != NULL && temp->next->gpa > newNode->gpa;
       temp = temp->next) {
  } // Setting temp at the right position

  newNode->next = temp->next;

  // If node is to be inserted in between
  if (temp->next != NULL) {
    newNode->next->prev = newNode;
  }
  temp->next = newNode;
  newNode->prev = temp;
  
}

struct Node *createSortedList(struct Node *head) {
  // copying the linked list


  struct Node *Sortedhead = NULL, *temp = head;
  while (temp != NULL) {
    struct Node *tempnext = temp->next; // Store the next node

    // Removing the links so as to pass a node as newNode parameter in the
    // sortedPrerequisite function
    temp->prev = NULL;
    temp->next = NULL;
    sortedPrerequisite(temp, &Sortedhead);
    temp = tempnext;
  }

  return Sortedhead;
}
struct Node* copyDll(struct Node* head) {
  if (head == NULL) {
    return NULL;
  }
  struct Node* headforeachiteration = NULL;
  struct Node* delta = head;
  struct Node* alpha = NULL;
  struct Node* head1 = NULL;
  while (delta != NULL) {
    alpha = (struct Node*)malloc(sizeof(struct Node));
     alpha->gpa = delta->gpa;
    alpha->id = delta->id;  
     alpha->next = NULL;
    alpha->prev = NULL;   
      if (headforeachiteration== NULL) {
        headforeachiteration = alpha;
      head1 = headforeachiteration;
    } else {
        headforeachiteration->next = alpha;
        alpha->prev = headforeachiteration;
        headforeachiteration = alpha;
    }
    delta = delta->next;
  }
  return head1;
}
int main() {
  struct Node *head = NULL;
  struct Node *sorted_head;
  sorted_head = (struct Node *)malloc(sizeof(struct Node));

  // code to take n, k, duplicate_id as input
  int k = 0, duplicate_id = 0;
  scanf("%d %d %d", &n, &k, &duplicate_id);
  // code to take input n records input and build a dll(4.1)
  struct Node *S = NULL, *p = NULL, *q = NULL;
  for (int i = 0; i < n; i++) {
    S = (struct Node *)malloc(sizeof(struct Node));
    scanf("%d %f", &S->id, &S->gpa);
    if (i == 0 || n == 1) {
      head = p = q = S;
      head->prev = NULL;
      head->next = NULL;
    } else {
      p->next = S;
      p = S;
      p->prev = q;
      p->next = NULL;
      q = S;
    }
    if (i == (n - 1)) {
      S->next = NULL;
    }
  }

  // head updated

 head = deleteHead(head);
  head = removeDuplicates(head, duplicate_id);
  head = reverse(head);
 head = rotateByKplaces(head, k);
   sorted_head = createSortedList(copyDll(head));
  
  // Do not modify the code below
  struct Node *curr = head;
  struct Node *tail = head;
  // print head
  while (curr != NULL) {
    printf("%d,%.1f->", curr->id, curr->gpa);
   
    curr = curr->next;
  }
  printf("\n");
 
  struct Node* current = reverse(head);
  while (current != NULL) {
    printf("%d,%.1f->", current->id, current->gpa);
    current = current->next;
  }
  printf("\n");
  
  curr = sorted_head;
  tail = curr;
  
  while (curr != NULL) {
    printf("%d,%.1f->", curr->id, curr->gpa);
    tail = curr;
    curr = curr->next;
  }
  printf("\n");
  
  while (tail != NULL) {
    printf("%d,%.1f->", tail->id, tail->gpa);
    tail = tail->prev;
  }
  printf("\n");
  return 0;
}