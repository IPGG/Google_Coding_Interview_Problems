#include <stdio.h>
#include <stdbool.h>

/*=============================READING THE ARRAYS FUNCTION=============================*/
void ReadArray (unsigned short int *Array, unsigned short int arraylength)
{
    for (unsigned short int i = 0; i < arraylength; i++)
        scanf("%hd", &Array[i]);
}

/*=====================================SOLVING ALGORITHM===============================*/
short int isPossible (unsigned short int *Cost, unsigned short int *Refuel, unsigned short int Sizes)
{
    bool result = false;
    unsigned short int StartingIndex = 0;
    while (StartingIndex < Sizes && result == false)
    {
        short int GasTank = 0;
        for (int Steps = StartingIndex; Steps < StartingIndex + Sizes - 1; Steps++)
        {
            if (Steps < Sizes)
            {
                GasTank += Refuel[Steps];
                GasTank -= Cost[Steps];
            } else
            {
                GasTank += Refuel[Steps - Sizes];
                GasTank -= Cost[Steps - Sizes];
            }
            
        }
        if (GasTank >= 0) result = true;
        StartingIndex++;
    }
    if (result == true) return StartingIndex - 1;
    return -1;
}

/*================================MAIN UTILITY FUNCTION================================*/
int main()
{
    unsigned short int Sizes;
    scanf ("%hd", &Sizes);
    unsigned short int A[Sizes], B[Sizes];
    
    ReadArray(A, Sizes); ReadArray(B, Sizes);
    
    printf ("%d\n", isPossible(B, A, Sizes));

    return 0;
}