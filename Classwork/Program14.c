#include "Header.h"

///////////////////////////////////////////
//
//Entry point of the application
//
///////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number : \n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"Unable to proceed as input is invalid\n");

        return EXIT_FAILURE;
    }

    printf("Enter second number : \n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"Unable to proceed as input is invalid\n");

        return EXIT_FAILURE;
    }


    iResult = Addition(iValue1, iValue2);      

    printf("Addition is : %d\n", iResult);

    return EXIT_SUCCESS;
}


//////////////////////////////////////////////
// Step 5 :Test the program
//
// Tested test case
//--------------------------------------------
//  Input 1      Input 2      Input 3
//--------------------------------------------
//   10           11            21
//   11           0             11
//   0            11            11
//   20           -9            11
//   -9           20            11
//   -20         -11            -30