#include <iostream>
#include <string>
#include <cctype>
class AString {
    // You will need to declare:
    // 1. 2 constructors (see lab description for details)
    // 2. Three (3) member functions (see lab description for details)
    //      called getAString, cleanUp, countLetters
    // 3. One member variable called StringValue
    //
    // IMPORTANT: Figure out first which go in public and which in private.
    public:
        AString();
        AString(std::string s);
        
        void getAString();
        void cleanUp();
        void countLetters(int (arr)[26]);
    
    private:
        std::string StringValue;

};
    
// Declare the program function used in the main routine called compareCounts here:
// type compareCounts(arguments);
bool compareCounts(int a1[], int a2[]);
