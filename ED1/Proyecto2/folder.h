#ifndef FOLDER_H
#define FOLDER_H
#include<filebase.h>
class Folder: public filebase{
public:
       Folder(char *nom, char *path);

private:
    char *nom;
    char *path;
    Folder *inicio;
    FileBase *actual;

};

#endif // FOLDER_H
