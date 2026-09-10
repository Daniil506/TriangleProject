#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
private:
    double side;
    double height;

public:
    Triangle(double side = 0, double height = 0);
    double calculateArea() const;
    void setSide(double side);
    void setHeight(double height);
    double getSide() const { return side; }
    double getHeight() const { return height; }
};

#endif