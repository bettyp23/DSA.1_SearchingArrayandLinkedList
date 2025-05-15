#include <iostream>
#include "array.h"
#include "linkedlist.h"

using namespace std;

int main() {

    cout<<"Searching Array vs Linked List\n"<<endl;

    cout<< "Running Array search 10 times:\n";
    for (int i = 0; i < 10; ++i){
        cout<<i + 1 <<". ";
        ArraySearch();
    } 
    cout<<endl;

    cout<< "Running Linked List Search 10 times:\n";
    for (int i = 0; i < 10; ++i){
        cout<<i + 1 <<". ";
        LinkedListSearch();
    }

    return 0;
}