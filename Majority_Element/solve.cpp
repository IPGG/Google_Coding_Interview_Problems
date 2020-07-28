#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*================Algorithm for solving the task==============*/
void Solver (vector<int> Array, unsigned int ArrayLength)
{
    int NrForValidation = ArrayLength/2 + 1;
    sort(Array.begin(), Array.end());
    int currentNumber = Array[0], currentOccurences = 1;
    for (int i = 1; i < ArrayLength; i++)
        if (currentNumber == Array[i]) currentOccurences++;
        else {
            if (currentOccurences >= NrForValidation) break;
            currentNumber = Array[i];
            currentOccurences = 1; 
        }
    if (currentOccurences >= NrForValidation) cout << currentNumber << ' ' << currentOccurences << '\n';
    else cout << "Nu exista un numar care sa apara de "<< NrForValidation << " ori in sir";
}

/*========================Main Function=======================*/
int main()
{
    unsigned int nrOfElements;
    int currentNumber;
    cin >> nrOfElements;
    vector<int> Array;
    for (int i = 0; i < nrOfElements; i++)
    {
        cin >> currentNumber;
        Array.push_back(currentNumber);
    }
    Solver(Array, nrOfElements);
    return 0;
}