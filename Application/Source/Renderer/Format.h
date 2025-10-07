#pragma once

#include <cstdint>

namespace Renderer
{
	/*
	* @brief The different formats that can be used for textures.
	*/
	enum class Format : uint8_t
	{
		RGBA8
	};

	/*
	* @brief The size of each format in bytes.
	*/
	extern size_t FormatSize[];
}