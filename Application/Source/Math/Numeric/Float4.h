#pragma once

namespace Math
{
	namespace Numeric
	{
		/**
		 * @class float4
		 * @brief A class representing a 4D float vector.
		 */
		class float4
		{
		public:
			/** @brief The x coordinate. */
			float x;
			/** @brief The y coordinate. */
			float y;
			/** @brief The z coordinate. */
			float z;
			/** @brief The w coordinate. */
			float w;

			/**
			 * @brief Default constructor. Initializes x, y, z, and w to 0.0f.
			 */
			float4() : x(0.0f), y(0.0f), z(0.0f), w(0.0f) {}

			/**
			 * @brief Parameterized constructor.
			 * @param x The x coordinate.
			 * @param y The y coordinate.
			 * @param z The z coordinate.
			 * @param w The w coordinate.
			 */
			float4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}

			/**
			 * @brief Copy constructor.
			 * @param other The other float4 object to copy from.
			 */
			float4(const float4& other) : x(other.x), y(other.y), z(other.z), w(other.w) {}

			/**
			 * @brief Addition operator.
			 * @param other The other float4 object to add.
			 * @return A new float4 object that is the sum of this and other.
			 */
			float4 operator+(const float4& other) const
			{
				return float4(x + other.x, y + other.y, z + other.z, w + other.w);
			}

			/**
			 * @brief Subtraction operator.
			 * @param other The other float4 object to subtract.
			 * @return A new float4 object that is the difference of this and other.
			 */
			float4 operator-(const float4& other) const
			{
				return float4(x - other.x, y - other.y, z - other.z, w - other.w);
			}

			/**
			 * @brief Multiplication operator.
			 * @param other The other float4 object to multiply.
			 * @return A new float4 object that is the product of this and other.
			 */
			float4 operator*(const float4& other) const
			{
				return float4(x * other.x, y * other.y, z * other.z, w * other.w);
			}

			/**
			 * @brief Division operator.
			 * @param other The other float4 object to divide.
			 * @return A new float4 object that is the quotient of this and other.
			 */
			float4 operator/(const float4& other) const
			{
				return float4(x / other.x, y / other.y, z / other.z, w / other.w);
			}

			/**
			 * @brief Addition operator with a scalar.
			 * @param scalar The scalar value to add.
			 * @return A new float4 object that is the sum of this and the scalar.
			 */
			float4 operator+(float scalar) const
			{
				return float4(x + scalar, y + scalar, z + scalar, w + scalar);
			}

			/**
			 * @brief Subtraction operator with a scalar.
			 * @param scalar The scalar value to subtract.
			 * @return A new float4 object that is the difference of this and the scalar.
			 */
			float4 operator-(float scalar) const
			{
				return float4(x - scalar, y - scalar, z - scalar, w - scalar);
			}

			/**
			 * @brief Multiplication operator with a scalar.
			 * @param scalar The scalar value to multiply.
			 * @return A new float4 object that is the product of this and the scalar.
			 */
			float4 operator*(float scalar) const
			{
				return float4(x * scalar, y * scalar, z * scalar, w * scalar);
			}

			/**
			 * @brief Division operator with a scalar.
			 * @param scalar The scalar value to divide.
			 * @return A new float4 object that is the quotient of this and the scalar.
			 */
			float4 operator/(float scalar) const
			{
				return float4(x / scalar, y / scalar, z / scalar, w / scalar);
			}

			/**
			 * @brief Addition assignment operator.
			 * @param other The other float4 object to add.
			 * @return A reference to this object.
			 */
			float4& operator+=(const float4& other)
			{
				x += other.x;
				y += other.y;
				z += other.z;
				w += other.w;
				return *this;
			}

			/**
			 * @brief Subtraction assignment operator.
			 * @param other The other float4 object to subtract.
			 * @return A reference to this object.
			 */
			float4& operator-=(const float4& other)
			{
				x -= other.x;
				y -= other.y;
				z -= other.z;
				w -= other.w;
				return *this;
			}

			/**
			 * @brief Multiplication assignment operator.
			 * @param other The other float4 object to multiply.
			 * @return A reference to this object.
			 */
			float4& operator*=(const float4& other)
			{
				x *= other.x;
				y *= other.y;
				z *= other.z;
				w *= other.w;
				return *this;
			}

			/**
			 * @brief Division assignment operator.
			 * @param other The other float4 object to divide.
			 * @return A reference to this object.
			 */
			float4& operator/=(const float4& other)
			{
				x /= other.x;
				y /= other.y;
				z /= other.z;
				w /= other.w;
				return *this;
			}

			/**
			 * @brief Addition assignment operator with a scalar.
			 * @param scalar The scalar value to add.
			 * @return A reference to this object.
			 */
			float4& operator+=(float scalar)
			{
				x += scalar;
				y += scalar;
				z += scalar;
				w += scalar;
				return *this;
			}

			/**
			 * @brief Subtraction assignment operator with a scalar.
			 * @param scalar The scalar value to subtract.
			 * @return A reference to this object.
			 */
			float4& operator-=(float scalar)
			{
				x -= scalar;
				y -= scalar;
				z -= scalar;
				w -= scalar;
				return *this;
			}

			/**
			 * @brief Multiplication assignment operator with a scalar.
			 * @param scalar The scalar value to multiply.
			 * @return A reference to this object.
			 */
			float4& operator*=(float scalar)
			{
				x *= scalar;
				y *= scalar;
				z *= scalar;
				w *= scalar;
				return *this;
			}

			/**
			 * @brief Division assignment operator with a scalar.
			 * @param scalar The scalar value to divide.
			 * @return A reference to this object.
			 */
			float4& operator/=(float scalar)
			{
				x /= scalar;
				y /= scalar;
				z /= scalar;
				w /= scalar;
				return *this;
			}

			/**
			 * @brief Equality operator.
			 * @param other The other float4 object to compare.
			 * @return True if this and other are equal, false otherwise.
			 */
			bool operator==(const float4& other) const
			{
				return x == other.x && y == other.y && z == other.z && w == other.w;
			}

			/**
			 * @brief Inequality operator.
			 * @param other The other float4 object to compare.
			 * @return True if this and other are not equal, false otherwise.
			 */
			bool operator!=(const float4& other) const
			{
				return x != other.x || y != other.y || z != other.z || w != other.w;
			}

			/**
			 * @brief Less than operator.
			 * @param other The other float4 object to compare.
			 * @return True if this is less than other, false otherwise.
			 */
			bool operator<(const float4& other) const
			{
				return x < other.x && y < other.y && z < other.z && w < other.w;
			}

			/**
			 * @brief Less than or equal to operator.
			 * @param other The other float4 object to compare.
			 * @return True if this is less than or equal to other, false otherwise.
			 */
			bool operator<=(const float4& other) const
			{
				return x <= other.x && y <= other.y && z <= other.z && w <= other.w;
			}

			/**
			 * @brief Greater than operator.
			 * @param other The other float4 object to compare.
			 * @return True if this is greater than other, false otherwise.
			 */
			bool operator>(const float4& other) const
			{
				return x > other.x && y > other.y && z > other.z && w > other.w;
			}

			/**
			 * @brief Greater than or equal to operator.
			 * @param other The other float4 object to compare.
			 * @return True if this is greater than or equal to other, false otherwise.
			 */
			bool operator>=(const float4& other) const
			{
				return x >= other.x && y >= other.y && z >= other.z && w >= other.w;
			}

			/**
			 * @brief Unary negation operator.
			 * @return A new float4 object that is the negation of this.
			 */
			float4 operator-() const
			{
				return float4(-x, -y, -z, -w);
			}

			/**
			 * @brief Subscript operator.
			 * @param index The index to access (0 for x, 1 for y, 2 for z, 3 for w).
			 * @return A reference to the element at the given index.
			 */
			float& operator[](int index)
			{
				return (&x)[index];
			}

			/**
			 * @brief Subscript operator (const).
			 * @param index The index to access (0 for x, 1 for y, 2 for z, 3 for w).
			 * @return A const reference to the element at the given index.
			 */
			const float& operator[](int index) const
			{
				return (&x)[index];
			}

			/**
			 * @brief Calculates dot product of two float4 vectors.
			 * @param a The first float4 vector.
			 * @param b The second float4 vector.
			 * @return The dot product of a and b.
			 */
			friend inline float dot(const float4& a, const float4& b)
			{
				return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
			}

			/**
			 * @brief Calculates cross product of two float4 vectors.
			 * @param a The first float4 vector.
			 * @param b The second float4 vector.
			 * @return The cross product of a and b.
			 */
			friend inline float4 cross(const float4& a, const float4& b)
			{
				return float4(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x, 0.0f);
			}
		};
	}
}