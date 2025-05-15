#include <iostream>
#include <cstdlib>
#include <ctime>    // Seed random number generator
#include <chrono>   // Measures time


using namespace std;

void ArraySearch(){
    const int SIZE = 500;   // Constant size of array
    // Min and Max range
    int min = 500; 
    int max = 1000;

    bool isfound = false;   // initialized if number is found, Defaulted to not found

    int array[SIZE];        // initialize array of integers with 500 elements

    srand(time(0));         // seed set for generating numbers

    // Each element in array is random between 500 and 1000
    for (int i = 0; i < SIZE; ++i){
        array[i] = min + rand() % (max - min + 1); 
    }

    int target = 786;       //  target number to search
    int index = -1;         // index to store position of the target

    auto start = chrono::high_resolution_clock::now();  // Recording start time of search

    // Linear search to find target
    for (int i = 0; i < SIZE && index == -1; ++i){      //will exit program if number is found
        if (array[i] == target){
            isfound = true;    // if current element matches the target, set to true
            index = i;              // store the index where target is found
        }
    }

    auto end = chrono::high_resolution_clock::now();    // Recording end time of search

    chrono::duration<double> elapsed = end - start;

    // Print results
    if (index != -1){
        cout << "Number " << target << " was found at index " << index << " in " << elapsed.count() << " seconds." << endl;
    } else {
        cout << "nil. Total time: " << elapsed.count() << " seconds." << endl;
    }
}