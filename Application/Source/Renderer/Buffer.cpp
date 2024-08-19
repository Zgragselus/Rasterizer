#include "Buffer.h"
#include <stdlib.h>

namespace Renderer
{
	Buffer::Buffer(uint32_t elementSize, uint32_t elementCount)
		: mElementSize(elementSize), mElementCount(elementCount)
	{
		mSize = mElementSize * mElementCount;
		mData = new uint8_t[mSize];
	}

	Buffer::~Buffer()
	{
		delete[] mData;
	}

	void Buffer::Clear()
	{
		for (uint32_t i = 0; i < mSize; i++)
		{
			((uint8_t*)mData)[i] = rand() % 255;
		}
	}
}