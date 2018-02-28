#pragma once

#include "button.h"

class SquareButton : public Button
{
	private: 
		bool isDrawing;

	protected:
		virtual void onClick();


	public:
		SquareButton(float x, float y, float width, float height);		
		virtual void draw();
		virtual ~SquareButton() {}
};

