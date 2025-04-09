// CORSE 4 SOLUTION PROBLEM 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enPassFail {Pass = 1 , Fail = 2};
void ReadMark(int&Mark1, int&Mark2, int&Mark3)
{
    cout << " Please enter Mark 1 " << endl;
    cin >> Mark1;

    cout << " Please enter Mark 2 " << endl;
    cin >> Mark2;

    cout << " Please enter Mark 3" << endl;
    cin >> Mark3;
}
int SumMarks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}
float AverageMark(int Mark1, int Mark2, int Mark3)
{
    return (float)SumMarks(Mark1, Mark2, Mark3) / 3;
}
enPassFail CheckAverage(float Average)
{
    if (Average >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}
void PrintAverage(float Average)
{
    cout << endl << " Your Average is :" << Average << endl;
    if (CheckAverage(Average) == enPassFail::Pass)
        cout << "\n You Passed " << endl;
    else
        cout << "\n You Failed " << endl;

}
int main()
{
    int Mark1, Mark2, Mark3;
    ReadMark(Mark1, Mark2, Mark3);
    PrintAverage(AverageMark(Mark1, Mark2, Mark3));
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
