# Hermes

A small set of library, in C/C++ and python to store and read variables in files on linux OSs. In the future windows functionality would be added. This library is used by other projects I have like Heimdallr or Cronos.

Bool types are store with the following logic. The files exists value is TRUE. The files doesn't exist the value is FALSE.

## C library

The C library has the following functions.

* Macros
  * void createFile (path)
  * void deleteFile (path)
* Public
  * void bool2file (path, value)
  * bool file2bool (path)
  * void int2file (path, value)
  * int file2int (path)
  * void float2file (path, value)
  * float file2float (path)
  * void string2file (path, value)
  * string file2string (path)
