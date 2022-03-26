#include <iostream>
#include "GL/glut.h";
//include "GL/glew.h";
//include "GL/freeglut.h";

void RenderSceneOB() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glutSwapBuffers();
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(1024, 768);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Tutorial 01");
	glutDisplayFunc(RenderSceneOB);
	glutMainLoop();

}
