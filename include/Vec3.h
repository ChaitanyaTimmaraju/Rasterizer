#ifndef VEC3_H
#define VEC3_H

#include <iostream>
template<typename T>
class Vec3
{
 public:
	Vec3():x(T(0)),y(T(0)),z(T(0)){}
	Vec3(const T &xx):x(T(xx)),y(T(xx)),z(T(xx)){}
	Vec3(T xx,T yy,T zz):x(T(xx)),y(T(yy)),z(T(zz)){}
	
	//vector operations
	Vec3<T>& normalize();
	T length();
	T dot(const Vec3<T> &v) const;
	Vec3<T> cross(const Vec3<T> &v) const;

	//arithemetic operations
	Vec3<T> operator +(const Vec3<T> &v)const;
	Vec3<T> operator -(const Vec3<T> &v)const;
	Vec3<T> operator *(const T &r)const;

	// Helper functions
	const T& operator [] (uint8_t i) const { return (&x)[i]; } 
    T& operator [] (uint8_t i) { return (&x)[i]; } 
	friend std::ostream& operator<< (std::ostream& out,const Vec3<T> &p)
	{
		 out<<"( "<<p.x<<","<<p.y<<","<<p.z<<" ) ";
		 return out;
	}
	
	T x,y,z;
};

typedef Vec3<float> Vec3f;

#endif