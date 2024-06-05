#ifndef RECTANGLE_H__
#define RECTANGLE_H__

#include <iostream>
using namespace std;

class Rectangle {
    public:
        Rectangle() = default;
        Rectangle(int width, int height);
        Rectangle(int width, int height, string color);

        int getArea() const;
        int getWidth() const;
        int getHeight() const;

        void draw() const;
        void setWidth(int width);
        void setHeight(int height);
        void setColor(string color);
    
    private:
        int width = 0;
        int height = 0;
        string color;
};

#endif      //   RECTANGLE_H__