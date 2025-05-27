#include <iostream>
using namespace std;
int main() 
{
    char str[100];
    cout << "Enter a string= ";
    cin.getline(str, 100);
    cout << "Enter the character to count= ";
    char ch;
    cin >> ch;
    int count = 0;
    char* ptr = str;
    while (*ptr != '\0') 
    {
        if (*ptr == ch) 
        {
            count++;
        }
        ptr++;
    }
    cout << "Frequency of '" << ch << "'= " << count << endl;
    return 0;
}
