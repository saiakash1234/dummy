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
    free(array);

    // Since we are demonstrating a memory leak, we will omit the delete[] statement.
}

int main() {
    createArray();

    std::cout << "Array created, initialized, printed, but not freed." << std::endl;

    // The program ends without freeing the allocated memory.
    return 0;
}
