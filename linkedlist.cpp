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

    bool isfound = false;   // initialized if number is found, Defaulted to not found

    srand(time(0));         // seed set for generating numbers



    int target = 786;       //  target number to search
    int index = -1;         // index to store position of the target

    auto start = chrono::high_resolution_clock::now();  // Recording start time of search


    auto end = chrono::high_resolution_clock::now();    // Recording end time of search

    chrono::duration<double> elapsed = end - start;

    // Print results
    if (index != -1){
        cout << "Number " << target << " was found at index " << index << " in " << elapsed.count() << " seconds." << endl;
    } else {
        cout << "Number " << target << " was not found. Total time: " << elapsed.count() << " seconds." << endl;
    }
}