#include <iostream>
#include "CMakeProject1.hpp"
#define PI 3.14159265 


std::ostream& operator<<(std::ostream& ostrm, const RDec2D& z) {
	return ostrm << '{' << z.x << ';' << z.y << '}';

}

std::ostream& operator<<(std::ostream& ostrm, const RPol2D& z){
	return ostrm << '{' << z.len << ';' << z.degrees << '}';
}

RDec2D operator*(double count, const RDec2D& vect) {
	RDec2D res = vect;
	res.x *= count;
	res.y *= count;
	return res;
}

RDec2D operator+(const RDec2D& vect1, const RDec2D& vect2) {
	RDec2D result = { 0.0, 0.0 };
	result.x = vect1.x + vect2.x;
	result.y = vect1.y + vect2.y;
	return result;
}

RDec2D operator-(const RDec2D& vect1) {
	RDec2D result = vect1;
	result.x *= - 1;
	result.y *= (-1);
	return result;
}

RDec2D operator-(const RDec2D& vect1, const RDec2D& vect2) {
	RDec2D result = vect1 + (-vect2);
	return result;
}


RDec2D operator/(const RDec2D& vect1, double count) {
	RDec2D result = vect1;
	result.x = vect1.x / count;
	result.y = vect1.y / count;
	return result;
}




bool operator==(const RDec2D& vect1, const RDec2D& vect2) {
	if ((vect1.x == vect2.x) && (vect1.y == vect2.y)) {
		return true;

	}else{
		return false;
	}
}

bool operator!=(const RDec2D& vect1, const RDec2D& vect2) {
	if ((vect1.x != vect2.x) || (vect1.y != vect2.y)) {
		return true;

	}
	else {
		return false;
	}
}

double Dot(const RDec2D& vect1, const RDec2D& vect2){
	return (vect1.x * vect2.x + vect1.y * vect2.y);
}

