#pragma once

#include "EngineComponent.h"
#include <SFML/Window.hpp>
#include <iostream>

class InputProcessor :
	public EngineComponent
{
public:
	InputProcessor();
	~InputProcessor();

	void Start();
};

