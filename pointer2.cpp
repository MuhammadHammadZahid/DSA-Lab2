#include <iostream>
using namespace std;

// Function to print memory address and value
void analyze_pointer(int *ptr)
{
    if (ptr == nullptr)
    {
        cout << "Pointer is null!" << endl;
        return;
    }

    cout << "Memory address: " << ptr << endl;

    cout << "Value: " << *ptr << endl;
}

int main()
{
    // 1. Stack allocation
    int iValue = 100;         // stack variable
    analyze_pointer(&iValue); // pass address to function

    cout << "---------------------------" << endl;

    // 2. Heap allocation
    int *hValue = new int; // allocate memory on heap
    *hValue = 200;         // assign a value
    analyze_pointer(hValue);

    // Free heap memory
    delete hValue;

    return 0;
}
