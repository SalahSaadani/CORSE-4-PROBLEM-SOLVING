// CORSE 4 SOLUTION PROBLEM 49.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

string ReadPinCode()
{
    string PinCode;

    cout << "Please enter Pin Code ?" << endl;
    cin >> PinCode;

    return PinCode;
}
bool Login()
{
    string PinCode;
    do
    {
        PinCode = ReadPinCode();

        if (PinCode == "1234")
        {
            return 1;
        }
        else
        {
            cout << " \n Wrong Code Pin  \n";
            system("color 4F");
        }

    } while (PinCode != "1234");

    return 0;
}

int main()
{
    if (Login())
    {
        system("color 2F");

        cout << "\n Your Account Balance is  " << 7500 << endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
