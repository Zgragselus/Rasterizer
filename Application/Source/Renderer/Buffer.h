#pragma once

#include <cstdint>

namespace Renderer
{
	class Buffer
	{
	protected:
		void* mData;

		uint32_t mSize;
		uint32_t mElementSize;
		uint32_t mElementCount;

		uint32_t mStride;

	public:
		/**
		* @brief Constructs a buffer with the specified element size and count. Aligned at 64-byte boundaries for AVX-512 friendliness.
		* @param elementSize The size of each element in bytes.
		* @param elementCount The number of elements in the buffer.
		*/
		Buffer(uint32_t elementSize, uint32_t elementCount);

		Buffer(uint32_t elementSize, uint32_t width , uint32_t height) : Buffer(elementSize, width * height)
		{
			mStride = width * elementSize;
		}

		/**
		 * @brief Destructor. Frees the allocated memory.
		 */
		virtual ~Buffer();

		/**
		 * @brief Get pointer to buffer data.
		 * @return Pointer to buffer data.
		 */
		void* GetData() const { return mData; }

		/**
		 * @brief Get buffer size in bytes.
		 * @return Size of the buffer in bytes.
		 */
		uint32_t GetSize() const { return mSize; }

		/**
		* @brief Gets the size of each element in bytes.
		* @return The size of each element in bytes.
		*/
		uint32_t GetElementSize() const { return mElementSize; }

		/**
		* @brief Get number of elements in the buffer.
		* @return Number of elements in the buffer.
		*/
		uint32_t GetElementCount() const { return mElementCount; }
		
		/**
		 * @brief Get the stride (width in bytes) of the buffer.
		 * @return The stride of the buffer in bytes.
		 */
		uint32_t GetStride() const { return mStride; }

		/**
		 * @brief Fills the buffer with random data.
		 */
		void Clear();
	};
}