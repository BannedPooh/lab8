#include "headers.h"
// Place your member function and program function definitions here:
//  1. The 2 Constructors
//  2. Member function getAString
//  3. Member function cleanUp
//  4. Member function countLetters 
//  5. Program function compareCounts
// See lab description for details
//


AString::AString(): StringValue("") {}
AString::AString(std::string s): StringValue(s) {}

void AString::getAString()
{
    std::cout<<"Enter string value: ";
    std::getline(std::cin, StringValue);
    // std::cin>>StringValue;
}

void AString::cleanUp()
{
    std::string new_string;
    for (int i = 0; i!=StringValue.size(); i++)
    {
        if (isalpha(StringValue[i]))
            new_string += tolower(StringValue[i]);
    }
    StringValue = new_string;
}


void AString::countLetters(int (arr)[26]){
    for (int i = 0; i != 26; ++i)
    {
        int count = 0;
        int pos = 0;
        while ((pos = StringValue.find(char(i+97), pos)) != std::string::npos)
        {
            pos++;
            count++;
        }
        arr[i] = count;
    }
}

bool compareCounts(int a1[], int a2[])
{
    for (int i = 0; i!= 26; ++i)
    {
        if (a1[i] == a2[i])
            continue;
        else
            return true;
    }
    return false;
}
