// #include <windows.h>
// #include <gl/gl.h>
// #include <gl/glu.h>
// #include <gl/glut.h>

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/freeglut.h>

void renderFunction()
{
   glClearColor(0.0,0.0,0.0,0.0);
   glClear(GL_COLOR_BUFFER_BIT);
   glBegin(GL_POINTS);
      glVertex2i (100, 50);
      glVertex2i (100, 130);
      glVertex2i (150, 130);
   glEnd();
   glFlush();
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
   glutInitWindowSize(600, 600);
   glutInitWindowPosition(100,100);
   glutCreateWindow("OpenGl - Kenya map");
   glutDisplayFunc(renderFunction);
   glutMainLoop();
   return 0;
}