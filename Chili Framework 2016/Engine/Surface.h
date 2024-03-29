#pragma once

#include "Colors.h"
#include <string>

class Surface
{
public:
	Surface(const std::string& filename,const bool& IN_inverseY);
	Surface(int width, int height);
	Surface(const Surface&);
	~Surface();
	Surface& operator=(const Surface&);
	void PutPixel(int x, int y, Color c);
	Color GetPixel(int x, int y) const;
	int GetWidth() const;
	int GetHeight() const;
private:
	Color* pPixels = nullptr;
	int width;
	int height;
	bool inverseY = true;
};