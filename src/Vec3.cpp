#include<Vec3.h>
#include<math.h>

template<typename T>
Vec3<T> Vec3<T>::operator +(const Vec3<T> &v)const
{
 return Vec3<T>(x+v.x, y+v.y, z+v.z);
}

template<typename T>
Vec3<T> Vec3<T>::operator -(const Vec3<T> &v)const
{
 return Vec3<T>(x-v.x, y-v.y, z-v.z);
}

template<typename T>
Vec3<T> Vec3<T>::operator *(const T &r)const
{
 return Vec3<T>(x*r, y*r, z*r);
}

template<typename T>
T Vec3<T>::length()
{
 return sqrt(x*x+y*y+z*z);
}

template<typename T>
Vec3<T>& Vec3<T>::normalize()
{
    T len = length();
    if(len>0)
    {
      T invLen = 1/len;
	x*=invLen,y*=invLen,z*=invLen;
    }
    return *this;
}

template<typename T>
T Vec3<T>::dot(const Vec3<T> &v) const
{
 return Vec3<T>(x*v.x,y*v.y,z*v.z);
}

template<typename T>
Vec3<T> Vec3<T>::cross(const Vec3<T> &v) const
{
 return Vec3<T>(y*v.z-z*v.y,
		z*v.x-x*v.z,
		x*v.y-y*v.x);
}

