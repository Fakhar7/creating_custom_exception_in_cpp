#include <iostream>
#include "rectangle.hpp"

Rectangle::Rectangle(int width, int height) {
    this->setHeight(height);
    this->setWidth(width);
}

Rectangle::Rectangle(int width, int height, string color) {
    this->setHeight(height);
    this->setWidth(width);
    this->setColor(color);
}

void Rectangle::draw() const {
    std::cout << "Rectangle drawed." << endl;
}

int Rectangle::getArea() const {   
    return width * height;
}

int Rectangle::getWidth() const {
    return width;
}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::setWidth(int width) {
    if (width < 0) {
        throw invalid_argument("Width must be positive.");
        return;
    }
    this->width = width;
}


void Rectangle::setHeight(int height) {
    if (height < 0) {
        throw invalid_argument("Height must be positive.");
        return;
    }
    this->height = height;
}

void Rectangle::setColor(string color) {
    this->color = color;
}
