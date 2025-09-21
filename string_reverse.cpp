#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    cout << "Enter the number of letters : ";
    int size;
    cin >> size;
    char *ch = new char[size];
    cout << "Enter the string : ";
    cin >> ch;
    int length = strlen(ch);
    for (int i = 0; i < length/2; i++)
    {
        char temp = ch[i];
        ch[i] = ch[length - i-1];
        ch[length - i-1] = temp;
    }
    cout << "Reversed String : " << ch;
    return 0;
}