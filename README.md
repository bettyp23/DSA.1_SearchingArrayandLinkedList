# DSA.1_SearchingArrayandLinkedList

## Linear Search: Array vs. Linked List
This project implements and compares two approaches to performing a linear search for the number **786** in a dataset of 500 randomly generated integers between **500 and 1000**.

### Implementations:

- `array.cpp`: Uses a fixed-size array to store the integers.
- `linkedlist.cpp`: Uses a singly linked list instead of an array.
- `main.cpp`: Runs both versions **10 times each** and prints the runtime for each search operation.

---

## What Each Program Does

### Array Version (`array.cpp`)
- Fills an array of 500 integers with random values between 500 and 1000.
- Searches for the number 786 using a linear search.
- Prints the index if found, or "not found".
- Displays the time taken to perform the search.

### Linked List Version (`linkedlist.cpp`)
- Creates a singly linked list with 500 nodes containing random values between 500 and 1000.
- Searches for the number 786 node by node.
- Prints the node position if found, or "not found".
- Displays the time taken to perform the search.
- Frees all dynamically allocated memory.

### Search (`main.cpp`)
- Calls `ArraySearch()` 10 times.
- Calls `LinkedListSearch()` 10 times.
- Displays results for each run, allowing a basic performance comparison between the array and linked list approaches.

---

## Usage

### Compile All Programs Together
g++ -o Search main.cpp array.cpp linkedlist.cpp
./Search
