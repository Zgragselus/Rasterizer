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

	public:
		Buffer(uint32_t elementSize, uint32_t elementCount);
		virtual ~Buffer();

		void Clear();

		void* GetData() const { return mData; }
		uint32_t GetSize() const { return mSize; }
		uint32_t GetElementSize() const { return mElementSize; }
		uint32_t GetElementCount() const { return mElementCount; }
	};
}