#pragma once

#include "button.h"

class CircleButton : public Button
{
	private: 
		bool isDrawing;

	protected:
		virtual void onClick();

	public:
		CircleButton(float x, float y, float width, float height);
		virtual void draw();
		virtual ~CircleButton() {}
};

