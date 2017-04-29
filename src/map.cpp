// includes GL/gl.h, GL/glu.h, GL/glx.h
#include <GL/glut.h>

void renderFunction()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glClearColor(0.0, 0.0, 0.0, 0.0);
   glColor3f(0.0, 0.0, 0.0);
   glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
   glBegin(GL_POLYGON);
      glVertex3f (0.25, 0.25, 0.0);
      glVertex3f (0.75, 0.25, 0.0);
      glVertex3f (0.75, 0.75, 0.0);
      glVertex3f (0.25, 0.75, 0.0);
   glEnd();
   glFlush();
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
   glutInitWindowSize(600, 600);
   glutInitWindowPosition(100,100);
   glutCreateWindow("OpenGl - Kenya map");
   glutDisplayFunc(renderFunction);
   glutMainLoop();
   return 0;
}