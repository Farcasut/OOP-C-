#include "iostream"
#include <ctime>
#include "Canvas.h"
#include <math.h>

int draw(int i, int j, int x0, int y0, int r) {
	return pow((i - x0), 2) + pow((j - y0), 2) - pow(r, 2);
};

Canvas::Canvas(int width, int height)
{

	this->height = height;
	this->width  = width;
	this->canvas = new char*[height];
	for (int i = 0; i < height; i++)
	{
		canvas[i] = new char [width];
	}

	for(int i=0; i<height; i++)
		for (int j = 0; j < width; j++)
		{
			canvas[i][j] = ' ';
		}

}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	if(x-ray>=0 && y-ray>=0)
	for (int i = x - ray; i <= x + ray; i++)
	{
		for (int j = y - ray; j <= y + ray; j++)
		{
			int cerc = draw(i, j, x, y, ray);
			if (-1<=cerc && cerc<=1)
			{
				canvas[i][j] = ch;
			}
		}
	}
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	if (x - ray >= 0 && y - ray >= 0)
	for (int i = x - ray; i <= x + ray; i++)
	{
		for (int j = y - ray; j <= y + ray; j++)
		{
			if (draw(i, j, x, y, ray) <= 0)
			{
				canvas[i][j] = ch;
			}
		}
	}
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int j = left, k = right; j <= right; j++, k--)
	{
		canvas[top][j] = ch;
		canvas[bottom][k] = ch;
	
	}
	for (int j = top, k = bottom; j<= bottom; j++, k--)
	{
		canvas[j][left] = ch;
		canvas[k][right] = ch;
	}
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = top; i <= bottom; i++)
	{
	
		for (int j = left; j <= right; j++)
			canvas[i][j] = ch;
	}

}

void Canvas::SetPoint(int x, int y, char ch)
{
	canvas[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	int x = x1;
	int y = y1;
	int dx = x2 - x1, dy = y2 - y1;
	int p = 2*dy - dx;
	while (x <= x2)
	{
		this->canvas[x][y] = ch;
		x++;
		if (p < 0)
			p = p + 2 * dy;
		else
		{
			p = p + 2 * dy - 2 * dx;
			y++;
		}
	}


}



void Canvas::Print()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
			std::cout << canvas[i][j];
		std::cout << '\n';
	}
}

void Canvas::Clear()
{
	system("CLS");

	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
		{
		
			canvas[i][j] = ' ';
		}

	
}
