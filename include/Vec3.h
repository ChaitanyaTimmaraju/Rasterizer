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

	T x,y,z;
};

typedef Vec3<float> Vec3f;

