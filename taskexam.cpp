#include <iostream>
#include <stdexcept>
using namespace std;


// defining CheckDenominator
float CheckDenominator(float den)
{
    if (den == 0)
        throw "Error";
    else
        return den;
} // end CheckDenominator

int main()
{
    setlocale(LC_CTYPE, "ukr");
    float numerator, denominator, result;
    cout << "¬кажiть рацiональне чисельник: ";
    cin >> numerator;
    cout << "¬кажiть рацiональний знаменник: ";
    cin >> denominator;
   

    // try block
    try {

        // calls the CheckDenominator function
        // by passing a string "Error"
        if (CheckDenominator(denominator)) {

            result = (numerator / denominator);
            cout << "The quotient is "
                << result << endl;
        }
    }

    // catch block
    // capable of catching any type of exception
    catch (...) {

        // Display a that exception has occurred
        cout << "Exception occurred" << endl;
    }

} // end main