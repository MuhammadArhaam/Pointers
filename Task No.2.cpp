#include<iostream>
using namespace std;
int main()
{
        char sentence[200];
        cout << "Enter a sentence= ";
        cin.getline(sentence, 200);
        char* ptr = sentence;
        int maxLength = 0;
        int currentLength = 0;
        while (*ptr != '\0')
        {
            if (*ptr != ' ' && *ptr != '\t')
            {
                currentLength++;
            }
            else 
            {
                if (currentLength > maxLength)
                {
                    maxLength = currentLength;
                }
                currentLength = 0;
            }
            ptr++;
        }
        if (currentLength > maxLength)
        {
            maxLength = currentLength;
        }
        cout << "Length of the longest word= " << maxLength << endl;
        return 0;

}