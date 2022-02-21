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

//Cutaran
void triangle(){
	GLfloat triangleVertex[] = {
		//x	y      z
		0.0f, 0.75f, 0.0f,
		-0.75f, 0.0f, 0.0f,
		0.75f, 0.0f, 0.0f
	};
	
	glEnableClientState(GL_VERTEX_ARRAY);
	glVertexPointer(3, GL_FLOAT, 0, triangleVertex);
	glDrawArrays(GL_TRIANGLES, 0, 3);
	glDisableClientState(GL_VERTEX_ARRAY);
}
