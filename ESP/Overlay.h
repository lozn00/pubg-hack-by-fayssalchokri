// Copyright 2022 Fayssal Chokri
// Hacked Using Fayssal Os(RevonsOs)
// Contact the programmer : contact.fayssal.chokri@developer.me
#pragma once
#include "pch.h"


class Overlay{
public:
	Overlay();
	~Overlay();

	int left;
	int top;
	int width;
	int height;



	sf::RenderWindow window;



	void createWindow();
	void init();
};

extern Overlay* g_pOverlay;