#ifndef SIZEEXCEL_H
#define SIZEEXCEL_H


class SizeExcel
{
private:
    int height;
    int width;
public:
    SizeExcel(int h=0,int w=0);
    int getheight(){return height;}
    int getwidth(){return width;}
};

#endif // SIZEEXCEL_H
