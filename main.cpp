#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node *next;
};

class LinkedList {
  struct Node *head = new struct Node;
  struct Node *current = new struct Node;

public:
  int x = 0;
  int *size = &x;
  struct Node *get() {
    return this->head;
  }
  void init() {
    //head->data = data;
    head->next = current;
    //*size += 1;
  }
  void add(int data) {
    current->data = data;
    current->next = new struct Node;
    current = current->next;
    *size += 1;
  }
  void print() {
    cout<< "[";
    struct Node *temp = head->next;

    for (int i = 0; i < *size; i++) {
      if (*size - 1 == i) {
        cout << temp->data << "]" << endl;
        temp = temp->next;
      } else {
        cout << temp->data << ", ";
        temp = temp->next;
      }
    }
  }
};

// current = new struct Node;
int main(int argc, char *argv[]) {
  LinkedList list;
  list.init();
  for (int i = 0; i < 10; i++) {
    list.add(i);
  }
  list.print();
  return 0;
}