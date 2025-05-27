#include <iostream>
using namespace std;
void copyString(char* source, char* destination) 
{
    while (*source != '\0')
    {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}
int main()
{
    char src[100];
    char dest[100];
    cout << "Enter the source string= ";
    cin.getline(src, 100);
    copyString(src, dest);
    cout << "Copied string= " << dest << endl;
    return 0;
}
