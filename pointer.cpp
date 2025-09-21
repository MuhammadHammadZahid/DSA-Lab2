#include <iostream>
using namespace std;
void analyze_pointer(int *ptr)
{
    cout << "Memory Address : " << ptr << endl;
    cout << "Value At That Address : " << *ptr << endl;
}
int main()
{

    int variable = 10;
    analyze_pointer(&variable);
    int *dynamic = new int;
    *dynamic = 99;
    analyze_pointer(dynamic);
    return 0;
}