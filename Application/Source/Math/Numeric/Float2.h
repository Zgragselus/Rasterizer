#pragma once

namespace Math
{
	namespace Numeric
	{
		/**
		 * @class float2
		 * @brief A class representing a 2D float vector.
		 */
		class float2
		{
		public:
			/** @brief The x coordinate. */
			float x;
			/** @brief The y coordinate. */
			float y;

			/**
			 * @brief Default constructor. Initializes x and y to 0.0f.
			 */
			float2() : x(0.0f), y(0.0f) {}

			/**
			 * @brief Parameterized constructor.
			 * @param x The x coordinate.
			 * @param y The y coordinate.
			 */
			float2(float x, float y) : x(x), y(y) {}

			/**
			 * @brief Copy constructor.
			 * @param other The other float2 object to copy from.
			 */
			float2(const float2& other) : x(other.x), y(other.y) {}

			/**
			 * @brief Addition operator.
			 * @param other The other float2 object to add.
			 * @return A new float2 object that is the sum of this and other.
			 */
			float2 operator+(const float2& other) const
			{
				return float2(x + other.x, y + other.y);
			}

			/**
			 * @brief Subtraction operator.
			 * @param other The other float2 object to subtract.
			 * @return A new float2 object that is the difference of this and other.
			 */
			float2 operator-(const float2& other) const
			{
				return float2(x - other.x, y - other.y);
			}

			/**
			 * @brief Multiplication operator.
			 * @param other The other float2 object to multiply.
			 * @return A new float2 object that is the product of this and other.
			 */
			float2 operator*(const float2& other) const
			{
				return float2(x * other.x, y * other.y);
			}

			/**
			 * @brief Division operator.
			 * @param other The other float2 object to divide.
			 * @return A new float2 object that is the quotient of this and other.
			 */
			float2 operator/(const float2& other) const
			{
				return float2(x / other.x, y / other.y);
			}

			/**
			 * @brief Addition operator with a scalar.
			 * @param scalar The scalar value to add.
			 * @return A new float2 object that is the sum of this and the scalar.
			 */
			float2 operator+(float scalar) const
			{
				return float2(x + scalar, y + scalar);
			}

			/**
			 * @brief Subtraction operator with a scalar.
			 * @param scalar The scalar value to subtract.
			 * @return A new float2 object that is the difference of this and the scalar.
			 */
			float2 operator-(float scalar) const
			{
				return float2(x - scalar, y - scalar);
			}

			/**
			 * @brief Multiplication operator with a scalar.
			 * @param scalar The scalar value to multiply.
			 * @return A new float2 object that is the product of this and the scalar.
			 */
			float2 operator*(float scalar) const
			{
				return float2(x * scalar, y * scalar);
			}

			/**
			 * @brief Division operator with a scalar.
			 * @param scalar The scalar value to divide.
			 * @return A new float2 object that is the quotient of this and the scalar.
			 */
			float2 operator/(float scalar) const
			{
				return float2(x / scalar, y / scalar);
			}

			/**
			 * @brief Addition assignment operator.
			 * @param other The other float2 object to add.
			 * @return A reference to this object.
			 */
			float2& operator+=(const float2& other)
			{
				x += other.x;
				y += other.y;
				return *this;
			}

			/**
			 * @brief Subtraction assignment operator.
			 * @param other The other float2 object to subtract.
			 * @return A reference to this object.
			 */
			float2& operator-=(const float2& other)
			{
				x -= other.x;
				y -= other.y;
				return *this;
			}

			/**
			 * @brief Multiplication assignment operator.
			 * @param other The other float2 object to multiply.
			 * @return A reference to this object.
			 */
			float2& operator*=(const float2& other)
			{
				x *= other.x;
				y *= other.y;
				return *this;
			}

			/**
			 * @brief Division assignment operator.
			 * @param other The other float2 object to divide.
			 * @return A reference to this object.
			 */
			float2& operator/=(const float2& other)
			{
				x /= other.x;
				y /= other.y;
				return *this;
			}

			/**
			 * @brief Addition assignment operator with a scalar.
			 * @param scalar The scalar value to add.
			 * @return A reference to this object.
			 */
			float2& operator+=(float scalar)
			{
				x += scalar;
				y += scalar;
				return *this;
			}

			/**
			 * @brief Subtraction assignment operator with a scalar.
			 * @param scalar The scalar value to subtract.
			 * @return A reference to this object.
			 */
			float2& operator-=(float scalar)
			{
				x -= scalar;
				y -= scalar;
				return *this;
			}

			/**
			 * @brief Multiplication assignment operator with a scalar.
			 * @param scalar The scalar value to multiply.
			 * @return A reference to this object.
			 */
			float2& operator*=(float scalar)
			{
				x *= scalar;
				y *= scalar;
				return *this;
			}

			/**
			 * @brief Division assignment operator with a scalar.
			 * @param scalar The scalar value to divide.
			 * @return A reference to this object.
			 */
			float2& operator/=(float scalar)
			{
				x /= scalar;
				y /= scalar;
				return *this;
			}

			/**
			 * @brief Equality operator.
			 * @param other The other float2 object to compare.
			 * @return True if this and other are equal, false otherwise.
			 */
			bool operator==(const float2& other) const
			{
				return x == other.x && y == other.y;
			}

			/**
			 * @brief Inequality operator.
			 * @param other The other float2 object to compare.
			 * @return True if this and other are not equal, false otherwise.
			 */
			bool operator!=(const float2& other) const
			{
				return x != other.x || y != other.y;
			}

			/**
			 * @brief Less than operator.
			 * @param other The other float2 object to compare.
			 * @return True if this is less than other, false otherwise.
			 */
			bool operator<(const float2& other) const
			{
				return x < other.x && y < other.y;
			}

			/**
			 * @brief Less than or equal to operator.
			 * @param other The other float2 object to compare.
			 * @return True if this is less than or equal to other, false otherwise.
			 */
			bool operator<=(const float2& other) const
			{
				return x <= other.x && y <= other.y;
			}

			/**
			 * @brief Greater than operator.
			 * @param other The other float2 object to compare.
			 * @return True if this is greater than other, false otherwise.
			 */
			bool operator>(const float2& other) const
			{
				return x > other.x && y > other.y;
			}

			/**
			 * @brief Greater than or equal to operator.
			 * @param other The other float2 object to compare.
			 * @return True if this is greater than or equal to other, false otherwise.
			 */
			bool operator>=(const float2& other) const
			{
				return x >= other.x && y >= other.y;
			}

			/**
			 * @brief Unary negation operator.
			 * @return A new float2 object that is the negation of this.
			 */
			float2 operator-() const
			{
				return float2(-x, -y);
			}

			/**
			 * @brief Subscript operator.
			 * @param index The index to access (0 for x, 1 for y).
			 * @return A reference to the element at the given index.
			 */
			float& operator[](int index)
			{
				return index == 0 ? x : y;
			}

			/**
			 * @brief Subscript operator (const).
			 * @param index The index to access (0 for x, 1 for y).
			 * @return A const reference to the element at the given index.
			 */
			const float& operator[](int index) const
			{
				return index == 0 ? x : y;
			}
		};
	}
}