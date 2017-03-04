#ifndef FILEBASE_H
#define FILEBASE_H

#endif // FILEBASE_H
class FileBase{
public:
    FileBase();
    FileBase(char *n, char *p);
    char *getNom();
    char *getPath();
    void setNom(char *n);
    void setPath(char *p);

private:
    char *nom;
    char *path;
    FileBase *File;
};
