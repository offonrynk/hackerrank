#include <iostream>
#include <list>

struct SinglyLinkedListNode {
  int data;
  struct SinglyLinkedListNode *next;
};

void reversePrint(SinglyLinkedListNode *head)
{
  if (head != nullptr) {
    reversePrint(head->next);
    std::cout << head->data << "\n";
  }
}
