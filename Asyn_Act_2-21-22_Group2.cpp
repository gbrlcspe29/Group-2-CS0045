#include <iostream>
#include <GL/glut.h>
#include <GL/freeglut_ext.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
//Caspe
void Render1();
void display();
void points();


//Cordero
int main(int argc, char **argv){

	glutInit(&argc, argv);
	glutInitWindowSize(500,350);
	glutInitWindowPosition(200,50);
	glutCreateWindow("My First OpenGL");
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}
