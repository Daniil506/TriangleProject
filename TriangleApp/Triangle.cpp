#include "Triangle.h"
#include <stdexcept>

Triangle::Triangle(double s, double h) {
    setSide(s);
    setHeight(h);
}

double Triangle::calculateArea() const {
    return 0.5 * side * height;
}

void Triangle::setSide(double s) {
    if (s < 0) {
        throw std::invalid_argument("§³§ä§à§â§à§ß§Ñ §ß§Ö §Þ§à§Ø§Ö§ä §Ò§í§ä§î §à§ä§â§Ú§è§Ñ§ä§Ö§Ý§î§ß§à§Û!");
    }
    side = s;
}

void Triangle::setHeight(double h) {
    if (h < 0) {
        throw std::invalid_argument("§£§í§ã§à§ä§Ñ §ß§Ö §Þ§à§Ø§Ö§ä §Ò§í§ä§î §à§ä§â§Ú§è§Ñ§ä§Ö§Ý§î§ß§à§Û!");
    }
    height = h;
}