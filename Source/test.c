/*
File Name:   Hermes.c
//
Compiler:    GCC
Author:      Artic42
Description: Creates a small program , this program checks
             that all the funcion on the library work properly
Testd on:    Raspberry Pi OS and wsl2
*/

/****************************************
*	Include                             *
****************************************/

#include <stdio.h>

#include "Artic42.h"
#include "Hermes.h"

/****************************************
*	Private Function Prtotype           *
****************************************/

int main (void);

/****************************************
*	Code                                *
****************************************/

int main (void)
{
    int testInteger = 533;
    float testFloat = 43.33333;
    string testPath = "/tmp/testHermes";
    // Test bool2file, file2bool, createFile, deleteFile
    bool2file (testPath, BFALSE);
    if (file2bool(testPath) == BTRUE)
    {
        printf ("Test fails, deletesFile or file2bool don't work\n");
        return 1;
    }
 
    bool2file (testPath, BTRUE);
        if (file2bool(testPath) == BFALSE)
    {
        printf ("Test fails, createFile or file2bool don't work\n");
        return 1;
    }

    bool2file (testPath, BFALSE);
    if (file2bool(testPath) == BTRUE)
    {
        printf ("Test fails, deletesFile or file2bool don't work\n");
        return 1;
    }

    //test int2file and file2int
    int2file (testPath, testInteger);
    if (testInteger != file2int (testPath))
    {
        printf ("Test fails, int2file or file2int don't work\n");
        return 1;
    }

    //test int2file and file2int with negative
    testInteger = -40;
    int2file (testPath, testInteger);
    if (testInteger != file2int (testPath))
    {
        printf ("Test fails, int2file or file2int don't work with negative\n");
        return 1;
    }

    //test float2file and file2float
    float2file (testPath, testFloat);
    if (testFloat != file2float (testPath))
    {
        printf ("Test fails, float2file or file2float don't work\n");
        return 1;
    }

    //test float2file and file2float with negative
    testFloat = -66.666943;
    float2file (testPath, testFloat);
    if (testFloat != file2float (testPath))
    {
        printf ("Test fails, float2file or file2float don't work with negative\n");
        return 1;
    }

    printf ("TEST OK!!!!\n");
    return 0;
}