#ifndef FILESYSTEM_H
#define FILESYSTEM_H
#include "file.h"
class FileSystem:public Actions{
    void CrearFile(char *n,char *c);
    void CrearFolder(char *n);
    void BorrarFile(char *n);
    void CopiarFile(File *f);
};

#endif // FILESYSTEM_H
