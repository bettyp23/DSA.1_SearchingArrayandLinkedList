#include <iostream>
#include <cstdlib>
#include <ctime>    // Seed random number generator
#include <chrono>   // Measures time


using namespace std;

struct Node {
    int data;
    Node* next;
};

void LinkedListSearch(){
    const int SIZE = 500;   // Constant size of array
    // Min and Max range
    int min = 500; 
    int max = 1000;
    int target = 786;       //  target number to search
    int position = -1;         // index to store position of the target

    // Using nanoseconds because the whole loop runs in less than one second
    unsigned seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
    srand(seed);

    // Create the head node
    Node* head = new Node;
    head->data = min + rand() % (max - min + 1);
    head->next = nullptr;

    Node* current = head;

    // Build the linked list with 499 more nodes
    for (int i = 1; i < SIZE; ++i){
        Node* newNode = new Node;
        newNode->data = min + rand() % (max - min + 1);
        newNode-> next = nullptr;
        current->next = newNode;
        current = newNode;
    }

    current = head;

    auto start = chrono::high_resolution_clock::now();  // Recording start time of search

    // Search for the target
    int index = 0;
    while (current != nullptr && position == -1) {
        if (current-> data == target) {
            position = index;
        }
        current = current->next;
        index++;
    }

    auto end = chrono::high_resolution_clock::now();    // Recording end time of search

    chrono::duration<double> elapsed = end - start;

    // Print results
    if (position != -1){
        cout << "Number " << target << " was found at index " << index << " in " << elapsed.count() << " seconds." << endl;
    } else {
        cout << "nil. Total time: " << elapsed.count() << " seconds." << endl;
    }

    // clean memory
    current = head;
    while (current != nullptr){
        Node* temp = current;
        current = current-> next;
        delete temp;
    }
}