// EmojiMaker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include "pch.h"
#include <iostream>
#include <GL/glew.h> 
#include <GLFW/glfw3.h>
#include <math.h>
#include <stdio.h>
#include "Happy.h"
#include "Angry.h"
#include "Surprise.h"
#include "Disgust.h"
#include "Sad.h"
#include "Neutral.h"
using namespace std;

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
#define M_PI 3.14159265

int main(void)
{

	Happy khushi;
	Angry gussa;
	Surprise achambhit;
	Disgust ghrna;
	Sad dukhi;
	Neutral tatasth;

	GLFWwindow *window, *window2;
	// Initialize the library
	if (!glfwInit())
	{
		return -1;
	}


	window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "EMOJI ^_^  RUN", NULL, NULL);



	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	glViewport(0.0f, 0.0f, SCREEN_WIDTH, SCREEN_HEIGHT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0, 1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();


	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);
		//glfwMaximizeWindow(window);

		//khushi.happyFace_3();
		gussa.angryFace_1();
		//achambhit.SurpriseFace_1();
		//ghrna.disgustface_1();
		//dukhi.sadFace_1();
		//tatasth.neutralFace_2();

		// ---->>>>Swap front and back buffers
		glfwSwapBuffers(window);

		// ----->>>Poll for and process events
		glfwPollEvents();
	}

	glfwTerminate();

	return 0;
}

