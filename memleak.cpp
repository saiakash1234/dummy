#include <iostream>

void createArray() {
    // Dynamically allocate an array of 100 integers
    int* array = new int[100];

    // Initialize the array
    for (int i = 0; i < 100; ++i) {
        array[i] = i;
    }

    // Print the array
    for (int i = 0; i < 100; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // Normally, you would free the allocated memory with:
    // delete[] array;

    // Since we are demonstrating a memory leak, we will omit the delete[] statement.
}
struct node
{
 int data;
 node* link;
};
node * delete_linked_list(node *head)
{
    while(head!=nullptr)
        {
            node * temp = head;
            head=head->link;
        }
        return head;
}

int main() {
    createArray();
    node * temp1 = new node;
    temp1->data = 5;
    temp1->link = nullptr;

node * temp2 = new node;
    temp2->data = 6;
    temp2->link = nullptr;

node * temp3 = new node;
    temp3->data = 7;
    temp3->link = nullptr;

node * temp4 = new node;
    temp4->data = 8;
    temp4->link = nullptr;

node * head = temp1;

temp1->link = temp2;
temp2->link = temp3;
temp3->link = temp4;

head = delete_linked_list(node *head);


    std::cout << "Array created, initialized, printed, but not freed." << std::endl;

    // The program ends without freeing the allocated memory.
    return 0;
}
