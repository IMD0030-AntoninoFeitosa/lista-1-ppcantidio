#ifndef FUNCTION_H
#define FUNCTION_H
#include <array>
using std::array;

#include <string>
using std::string;

struct Ponto {
    int x;
    int y;
    Ponto(int xi=0, int yi=0) : x{xi}, y{yi}
    {}
};

enum location_t :int {INSIDE=0, BORDER=1, OUTSIDE=2};

location_t pt_in_rect( const Ponto&, const Ponto&, const Ponto& );

#endif