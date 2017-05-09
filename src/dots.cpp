#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>


void display()
{  
   glClear(GL_COLOR_BUFFER_BIT);
   glBegin(GL_POINTS);
      glVertex2i(100, 50);
      glVertex2i(100, 130);
      glVertex2i(150, 130);
   glEnd();
   glFlush();
}

void init()
{
   // set the background color
   glClearColor(1.0, 1.0, 1.0, 0.0);
   // set the drawing color
   glColor3f(0.0f, 0.0f, 0.0f);
   // set the dot size
   glPointSize(4.0);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluOrtho2D(0.0, 600.0, 0.0, 480.0);

}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE);
   glutInitWindowPosition(100, 100);
   glutInitWindowSize(600, 480);
   glutCreateWindow("Big Dots");
   init();
   glutDisplayFunc(display);
   glutMainLoop();
}