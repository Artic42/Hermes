/*
File Name:   Hermes.c
//
Compiler:    GCC
Author:      Artic42
Description: This is library to store variable in files in a UNIX system.
Testd on:    Raspberry Pi 4
*/

/****************************************
*	Include                             *
****************************************/

#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#include "Artic42.h"
#include "Hermes.h"

/****************************************
*	Private Function Prtotype           *
****************************************/


/****************************************
*	Private Definitions	                *
****************************************/

#define FILES_EXIST 0

/****************************************
*	Private Variables                   *
****************************************/

/****************************************
*	Code                                *
****************************************/

//  createFiles
//
//  Creates a file in the specified path.
//  if the files exist only changes modify data no content

void createFile (string path)
{
    string command = "touch ";
    strcat (command, path);
    system (command);
}

// deleteFile
//
// Deletes the file in the specified path, in doesn't delete directory unless empty

void deleteFile (string path)
{
    string command = "rm -f ";
    strcat (command, path);
    system (command);
}

void bool2file (string  path, bool value)
{
    if (value) { createFile (path);}
    else       { deleteFile (path);}
}

bool file2bool (string path)
{
    if (access (path, F_OK) == FILES_EXIST) { return 1; }
    else                                    { return 0; }
}