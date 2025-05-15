#include <iostream>
#include "array.h"
#include "linkedlist.h"

using namespace std;

int main() {
    cout<< "Running Array search 10 times:\n";
    for (int i = 0; i < 10; ++i){
        ArraySearch();
    }

    cout<< "Running Linked List Search 10 times:\n";
    for (int i = 0; i < 10; ++i){
        LinkedListSearch();
    }

    return 0;
}