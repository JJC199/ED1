#ifndef FILE_H
#define FILE_H

class File: public FileBase{
public:
    File(char *n, char *p, char *p);
    void setContent(char *c);
    char *getContent(char *c);
private:
    char *c;
};

#endif // FILE_H
