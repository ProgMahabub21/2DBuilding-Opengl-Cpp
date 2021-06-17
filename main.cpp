#include <windows.h>  // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(2);

    glBegin(GL_QUADS);
    glColor3ub(255, 153, 153);
    glVertex2f(-40,-70);
    glVertex2f(-20,-70);
    glVertex2f(-20,70);
    glVertex2f(-40,70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 153, 153);
    glVertex2f(10,-70);
    glVertex2f(30,-70);
    glVertex2f(30,70);
    glVertex2f(10,70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 204, 204);
    glVertex2f(-20,-70);
    glVertex2f(10,-70);
    glVertex2f(10,75);
    glVertex2f(-20,75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(-42,74);
    glVertex2f(-42,70);
    glVertex2f(-20,70);
    glVertex2f(-20,74);
    glEnd();


    glBegin(GL_QUADS);      //door in
    glColor3ub(255, 255, 204);
    glVertex2f(-9,-70);
    glVertex2f(-1,-70);
    glVertex2f(-1,-53);
    glVertex2f(-9,-53);

    glEnd();

    glBegin(GL_QUADS);      //door out
    glColor3ub(102, 204, 255);
    glVertex2f(-8,-70);
    glVertex2f(-2,-70);
    glVertex2f(-2,-55);
    glVertex2f(-8,-55);
    glEnd();

    glBegin(GL_QUADS);      //middle teris
    glColor3ub(255, 153, 153);
    glVertex2f(-22,79);
    glVertex2f(12,79);
    glVertex2f(12,75);
    glVertex2f(-22,75);
    glEnd();

    glBegin(GL_TRIANGLES);      //roof design
    glColor3ub(102, 204, 255);
    glVertex2f(-18,79);
    glVertex2f(-5,90);
    glVertex2f(8,79);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 204, 255);
    glVertex2f(-18,79);
    glVertex2f(-5,90);
    glVertex2f(8,79);
    glEnd();
  glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char **argv)
{
    glutInit(&argc, argv);            // Initialize GLUT
    glutInitWindowSize(1080, 600);    // Set the window's initial width & height
    glutCreateWindow("Lamppost"); // Create a window with the given title
    gluOrtho2D(-100.0, 100.0, -100.0, 100.0);
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
