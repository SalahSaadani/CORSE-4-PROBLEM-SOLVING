// CORSE 4 SOLUTION PROBLEM 26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
// meme solution de probleme 27 (N TO 1)juste changé Counter =N et Counter >= 1 et Counter-- 

int ReadNum()
{
    int Num ;
    cout << " Please enter N number " << endl;
    cin >> Num;
    return Num;
}
void PrintRangeNumber1ToN_UsingForLoop (int N)
{
    cout << " Range printed using For statement \n";
         
    for (int Counter = 1; Counter <= N; Counter++)
    {
        cout << Counter << endl;
    }

}
void PrintRangeNumber1ToN_UsingWhileLoop(int N)
{
    int Counter = 0;
    cout << " Range printed using While statement \n";
    while (Counter < N)
    {
        Counter++;
        cout << Counter << endl;
    }

}
void PrintRangeNumber1ToN_UsingDoWhileLoop(int N)
{
    int Counter = 0;
    cout << " Range printed using Do While statement \n";
    do
    {
        Counter++;
        cout << Counter << endl;

    } while (Counter < N);

}
void PrintRangeNumberNto1_UsingForLoop(int N)
{
    cout << " Range printed using For statement \n";

    for (int Counter = N; Counter >= 1; Counter--)
    {
        cout << Counter << endl;
    }

}
void PrintRangeNumberNTo1_UsingWhileLoop(int N)
{
    int Counter = N+1;
    cout << " Range printed using While statement \n";
    while (Counter > 1)
    {
        Counter--;
        cout << Counter << endl;
    }

}
void PrintRangeNumberNTo1_UsingDoWhileLoop(int N)
{
    int Counter = N+1;
    cout << " Range printed using Do While statement \n";
    do
    {
        Counter--;
        cout << Counter << endl;

    } while (Counter >1);

}
int main()
{
    int N = ReadNum();
    PrintRangeNumber1ToN_UsingForLoop(N);
    PrintRangeNumber1ToN_UsingWhileLoop(N);
    PrintRangeNumber1ToN_UsingDoWhileLoop(N);

    PrintRangeNumberNto1_UsingForLoop(N);
    PrintRangeNumberNTo1_UsingWhileLoop(N);
    PrintRangeNumberNTo1_UsingDoWhileLoop(N);

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
