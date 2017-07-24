#pragma once
#include <math.h>
union Vector2 {
#pragma region MembersAndSuch
public:
	//private memebers
	float e[2];
	struct {
		float x, y;
	};
	//constructor
	Vector2() {
		e[0] = 0.0f;
		e[1] = 0.0f;
	}

	//overloaded constructors
	Vector2(float _x, float _y) : x(_x), y(_y) {}

	Vector2(Vector2 & in) {
		for (int i = 0; i < 2; i++)
		{
			e[i] = in.e[i];
		}
	}
#pragma endregion

#pragma region Operators
	// Overloaded operators

	//assignment
	void operator =(const Vector2 & in) {
		for (int i = 0; i < 2; i++)
		{
			e[i] = in.e[i];
		}
	}

	bool operator ==(const Vector2 &in) {
		if (in.x == this->x && in.y == this->y)
			return true;
		return false;
	}
	//addition
	Vector2 operator +(const Vector2 &in) {
		Vector2 out = *this;
		out.x += in.x;
		out.y += in.y;

		return out;
	}

	Vector2 operator +=(const Vector2 &in) {	
		this->x += in.x;
		this->y += in.y;
		return *this;
	}

	//subtraction
	Vector2 operator -(const Vector2 &in) {
		Vector2 out = *this;
		out.x -= in.x;
		out.y -= in.y;

		return out;
	}

	Vector2 operator -=(const Vector2 &in) {
		this->x -= in.x;
		this->y -= in.y;
		return *this;
	}

	//multiplication
	Vector2 operator *(const Vector2 &in) {
		Vector2 out = *this;
		out.x *= in.x;
		out.y *= in.y;

		return out;
	}

	Vector2 operator *=(const Vector2 &in) {
		this->x *= in.x;
		this->y *= in.y;
		return *this;
	}
	//division
	Vector2 operator /(const Vector2 &in) {
		Vector2 out = *this;
		out.x /= in.x;
		out.y /= in.y;

		return out;
	}

	Vector2 operator /=(const Vector2 &in) {
		this->x /= in.x;
		this->y /= in.y;
		return *this;
	}
#pragma endregion
	
#pragma region Vec2Methods
	
	//find the magnitude of a vector
	float Magintude() {

		return sqrt(pow(this->x, 2) + pow(this->y, 2));
	}

	//two versions of normalize
	void Normalize() {
		float mag = this->Magintude();
		for (int i = 0; i < 2; i++)
		{
			this->e[i] /= abs(mag);
		}
	}
	Vector2 NormalizeNew() {
		Vector2 out = *this;
		float mag = this->Magintude();
		for (int i = 0; i < 2; i++)
		{
			out.e[i] /= abs(mag);
		}
		return out;
	}
	//two versions of negate
	void Negate() {
		for (int i = 0; i < 2; i++)
		{
			this->e[i] *= -1;
		}
	}
	Vector2 NegateNew() {
		Vector2 out = *this;
		for (int i = 0; i < 2; i++)
		{
			out.e[i] *= -1;
		}
		return out;
	}
#pragma endregion
	
};

union Vector3 {
#pragma region Vec3MembersAndSuch
public:
	float e[3];
	struct {
		float x, y,z;
	};

	//constructor
	Vector3() {
		for (int i = 0; i < 3; i++)
		{
			e[i] = 0.0f;
		}
	}

	//overloaded constructors
	Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}

	Vector3(Vector3 & in) {
		for (int i = 0; i < 3; i++)
		{
			e[i] = in.e[i];
		}
	}
#pragma endregion

#pragma region Vec3Operators
	// Overloaded operators

	//assignment
	void operator =(const Vector3 & in) {
		for (int i = 0; i < 3; i++)
		{
			e[i] = in.e[i];
		}
	}

	bool operator ==(const Vector3 &in) {
		for (int i = 0; i < 3; i++)
		{
			if (in.e[i] != this->e[i])
				return false;
		}
		return true;
	}
	//addition
	Vector3 operator +(const Vector3 &in) {
		Vector3 out = *this;
		out.x += in.x;
		out.y += in.y;
		out.z += in.z;
		return out;
	}

	Vector3 operator +=(const Vector3 &in) {
		this->x += in.x;
		this->y += in.y;
		this->z += in.z;
		return *this;
	}

	//subtraction
	Vector3 operator -(const Vector3 &in) {
		Vector3 out = *this;
		out.x -= in.x;
		out.y -= in.y;
		out.z -= in.z;
		return out;
	}

	Vector3 operator -=(const Vector3 &in) {
		this->x -= in.x;
		this->y -= in.y;
		this->z -= in.z;
		return *this;
	}

	//multiplication
	Vector3 operator *(const Vector3 &in) {
		Vector3 out = *this;
		out.x *= in.x;
		out.y *= in.y;
		out.z *= in.z;
		return out;
	}

	Vector3 operator *=(const Vector3 &in) {
		this->x *= in.x;
		this->y *= in.y;
		this->z *= in.z;
		return *this;
	}
	//division
	Vector3 operator /(const Vector3 &in) {
		Vector3 out = *this;
		out.x /= in.x;
		out.y /= in.y;
		out.z /= in.z;
		return out;
	}

	Vector3 operator /=(const Vector3 &in) {
		this->x /= in.x;
		this->y /= in.y;
		this->z /= in.z;
		return *this;
	}
#pragma endregion

#pragma region Vec3Methods
	//find the magnitude of a vector
	float Magintude() {

		return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z,2));
	}

	//two versions of normalize
	void Normalize() {
		float mag = this->Magintude();
		for (int i = 0; i < 3; i++)
		{
			this->e[i] /= abs(mag);
		}
	}
	Vector3 NormalizeNew() {
		Vector3 out = *this;
		float mag = this->Magintude();
		for (int i = 0; i < 3; i++)
		{
			out.e[i] /= abs(mag);
		}
		return out;
	}
	//two versions of negate
	void Negate() {
		for (int i = 0; i < 3; i++)
		{
			this->e[i] *= -1;
		}
	}
	Vector3 NegateNew() {
		Vector3 out = *this;
		for (int i = 0; i < 3; i++)
		{
			out.e[i] *= -1;
		}
		return out;
	}
#pragma endregion
};

union Vector4 {
#pragma region vec4MembersAndSuch
public:
	float e[4];
	struct {
		float x, y, z, w;
	};

	//constructor
	Vector4() {
		for (int i = 0; i < 4; i++)
		{
			e[i] = 0.0f;
		}
	}

	//overloaded constructors
	Vector4(float _x, float _y, float _z, float _w) : x(_x), y(_y), z(_z), w(_w) {}

	Vector4(Vector4 & in) {
		for (int i = 0; i < 4; i++)
		{
			e[i] = in.e[i];
		}
	}
#pragma endregion;

#pragma region vec4Operators
	// Overloaded operators

	//assignment
	void operator =(const Vector4 & in) {
		for (int i = 0; i < 4; i++)
		{
			e[i] = in.e[i];
		}
	}

	bool operator ==(const Vector4 &in) {
		for (int i = 0; i < 4; i++)
		{
			if (in.e[i] != this->e[i])
				return false;
		}
		return true;
	}
	//addition
	Vector4 operator +(const Vector4 &in) {
		Vector4 out = *this;
		out.x += in.x;
		out.y += in.y;
		out.z += in.z;
		out.w += in.w;
		return out;
	}

	Vector4 operator +=(const Vector4 &in) {
		this->x += in.x;
		this->y += in.y;
		this->z += in.z;
		this->w += in.w;
		return *this;
	}

	//subtraction
	Vector4 operator -(const Vector4 &in) {
		Vector4 out = *this;
		out.x -= in.x;
		out.y -= in.y;
		out.z -= in.z;
		out.w -= in.w;
		return out;
	}

	Vector4 operator -=(const Vector4 &in) {
		this->x -= in.x;
		this->y -= in.y;
		this->z -= in.z;
		this->w -= in.w;
		return *this;
	}

	//multiplication
	Vector4 operator *(const Vector4 &in) {
		Vector4 out = *this;
		out.x *= in.x;
		out.y *= in.y;
		out.z *= in.z;
		out.w *= in.w;
		return out;
	}

	Vector4 operator *=(const Vector4 &in) {
		this->x *= in.x;
		this->y *= in.y;
		this->z *= in.z;
		this->w *= in.w;
		return *this;
	}
	//division
	Vector4 operator /(const Vector4 &in) {
		Vector4 out = *this;
		out.x /= in.x;
		out.y /= in.y;
		out.z /= in.z;
		out.w /= in.w;
		return out;
	}

	Vector4 operator /=(const Vector4 &in) {
		this->x /= in.x;
		this->y /= in.y;
		this->z /= in.z;
		this->w /= in.w;
		return *this;
	}
#pragma endregion

#pragma region vec4Methods
	//find the magnitude of a vector
	float Magintude() {

		return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2) + pow(this->w, 2));
	}

	//two versions of normalize
	void Normalize() {
		float mag = this->Magintude();
		for (int i = 0; i < 4; i++)
		{
			this->e[i] /= abs(mag);
		}
	}
	Vector4 NormalizeNew() {
		Vector4 out = *this;
		float mag = this->Magintude();
		for (int i = 0; i < 4; i++)
		{
			out.e[i] /= abs(mag);
		}
		return out;
	}
	//two versions of negate
	void Negate() {
		for (int i = 0; i < 4; i++)
		{
			this->e[i] *= -1;
		}
	}
	Vector4 NegateNew() {
		Vector4 out = *this;
		for (int i = 0; i < 4; i++)
		{
			out.e[i] *= -1;
		}
		return out;
	}
#pragma endregion
};

#pragma region General Methods
#pragma region Dot and Cross Products
// Dot product
float Dot(Vector2& one, Vector2& two) {
	float res = 0;
	for (int i = 0; i < 2; i++)
	{
		res += one.e[i] * two.e[i];
	}
	return res;
}

float Dot(Vector3& one, Vector3& two) {
	float res = 0;
	for (int i = 0; i < 3; i++)
	{
		res += one.e[i] * two.e[i];
	}
	return res;
}

float Dot(Vector4& one, Vector4& two) {
	float res = 0;
	for (int i = 0; i < 4; i++)
	{
		res += one.e[i] * two.e[i];
	}
	return res;
}

Vector3 Cross(Vector3& one, Vector3& two) {
	Vector3 ans;
	ans.x = ((one.y*two.z)-(two.y*one.z));
	ans.y = -((one.x*two.z) - (one.z*two.x));
	ans.z = ((one.x*two.y) - (one.y*two.x));
	return ans;
}
void Cross(Vector3& out, Vector3& one, Vector3& two) {
	
	out.x = ((one.y*two.z) - (two.y*one.z));
	out.y = -((one.x*two.z) - (one.z*two.x));
	out.z = ((one.x*two.y) - (one.y*two.x));
	
}
#pragma endregion

#pragma region Scale and angles

//Scale a vector by a certain number
void Scale(Vector2 & in, float scaleby) {
	for (size_t i = 0; i < 2; i++)
	{
		in.e[i] *= scaleby;
	}
}
void Scale(Vector3 & in, float scaleby) {
	for (size_t i = 0; i < 3; i++)
	{
		in.e[i] *= scaleby;
	}
}
void Scale(Vector4 & in, float scaleby) {
	for (size_t i = 0; i < 4; i++)
	{
		in.e[i] *= scaleby;
	}
}

//Find an angle between two vectors
float Angle(Vector2 & one, Vector2 & two) {
	float dot = Dot(one, two);
	float Lone = one.Magintude();
	float Ltwo = two.Magintude();
	float ans = dot / (Lone*Ltwo);
	return (acos(ans)) * 180 / 3.14;
}
float Angle(Vector3 & one, Vector3 & two) {
	float dot = Dot(one, two);
	float Lone = one.Magintude();
	float Ltwo = two.Magintude();
	float ans = dot / (Lone*Ltwo);
	return (acos(ans))*180/3.14;
}
float Angle(Vector4 & one, Vector4 & two) {
	float dot = Dot(one, two);
	float Lone = one.Magintude();
	float Ltwo = two.Magintude();
	float ans = dot / (Lone*Ltwo);
	return (acos(ans)) * 180 / 3.14;
}
#pragma endregion