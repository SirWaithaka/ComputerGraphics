#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>


void dots()
{  
   // clear screen to background color
   glClear(GL_COLOR_BUFFER_BIT);
   glBegin(GL_POINTS);
      glVertex2i(100, 50);
      glVertex2i(100, 130);
      glVertex2i(150, 130);
   glEnd();
   glFlush();
}

void paired_lines()
{
   // clear screen to background color
   glClear(GL_COLOR_BUFFER_BIT);
   glBegin(GL_LINES);
      glVertex2i(100, 50);
      glVertex2i(100, 130);
      glVertex2i(100, 130);
      glVertex2i(150, 130);
   glEnd();
   glFlush();

}

void line_strip()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glBegin(GL_LINE_STRIP);
      glVertex2i(20,10);
      glVertex2i(50,10);
      glVertex2i(20,80);
      glVertex2i(50,80);
   glEnd();
   glFlush();
}

void house()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glBegin(GL_LINE_LOOP);
      // draw the shell of the house
      glVertex2i(40, 40);
      glVertex2i(40, 90);
      glVertex2i(70, 120);
      glVertex2i(100, 90);
      glVertex2i(100, 40);
   glEnd();
   glFlush();
}

void rectangle()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(0.6,0.6,0.6);
   // bright gray
   glRecti(20,20,100,70);
   glColor3f(0.2,0.2,0.2);
   // dark gray
   glRecti(70, 50, 150, 130);
   glFlush();
}

void triangle()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glBegin(GL_TRIANGLES);
      glVertex2i(70, 120);
      glVertex2i(40, 80);
      glVertex2i(100, 80);
   glEnd();
   glFlush();
}

void quad()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glBegin(GL_QUADS);
      glVertex2i(100, 200);
      glVertex2i(200, 200);
      glVertex2i(200, 100);
      glVertex2i(100, 100);
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
   glLineWidth(1.0);
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
   glutDisplayFunc(quad);
   glutMainLoop();
}