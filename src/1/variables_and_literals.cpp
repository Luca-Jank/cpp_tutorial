#include <iostream>

using namespace std;

int main(){
    cout << 5 << endl;
    cout << 5.6 << endl;
    cout << 5+6 << endl;
    cout << "Hello, World!" << endl;
    
    string helloWorld = "Hello, World! In a string!";
    int myInt = 3;
    double myDecimalNumber = 3.4;
    bool myTruthValue = false;

    cout << helloWorld << endl;
    cout << myInt << endl;
    cout << myDecimalNumber << endl;
    cout << myTruthValue << endl;

    int someDeclaredVariable;
    someDeclaredVariable = 7;

    cout << someDeclaredVariable << endl;

    int oneVariable, anotherVariable = 16; // This ONLY initalizes anotherVariable with 16! NOT the first variable!
    oneVariable = 15; // if you remove this the compiler complains about oneVariable being unitialized
    cout << oneVariable << " " << anotherVariable << endl;

    int correctWay1 = 16, correctWay2 = 16; // This initializes both with 16

    cout << correctWay1 << " " << correctWay2 << endl;

    // Modern initialization: Direct-list initialization
    int modernInitializedVariable {8}; // also works for other types of data such as booleans, doubles, etc.
    int zeroInitialisedModern {}; // Sets the variable to whatever is closest to 0 for the data type
    
    cout << modernInitializedVariable << endl;
    cout << zeroInitialisedModern << endl;

    [[maybe_unused]] int numberThatWeDontPrintOut = 0;
    // if uncomment the following line the compiler will throw a warning
    // int otherNumberWeDontPrint = 0;

    return 0;
}