#include <iostream>
using namespace std;
void analyze_pointer(int *ptr)
{
    cout << "Memory Location : " << ptr << endl;
    cout << "The Value : " << *ptr << endl;
}
int main()
{
    int a = 89;
    int *ptr = &a;
    analyze_pointer(ptr);
}