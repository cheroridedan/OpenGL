#include <GL/glut.h>
int main(int argc, char** agrv)
/*{
    glutInit(& argc, argv);
    glutInitWindowSize(800,800);
    glutInitWindowPosition(50,50);
    glClearColor(0.9,0.9,0.9,0.0);
    glutClear(GL_COLOR_BUFFER_BIT);
    glCreateWindow("Cyan Triangle");
    glBegin(GL_TRIANGLES);
    glColor(1.0,0.0,1.0);


    glVertex3f(-0.3,-0.3,0.0);
    glVertex3f(0.3,0.3,0.0);
    glVertex3f(0.3,-0.3,0.0);

    glEnd();
    glFlush();
    glutMainLoop();
    return 0;
}*/

glutInit(& argc, argv);
glutInitWindowSize(600,500);
glutInitWindowPosition(100,100);
glutCreateWindow("Red Triangle");
glClearColor(0.9,0.9,0.9,0.0);
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,0.0,0.0);
glBegin(GL_TRIANGLES);
glVertex3f(-0.3,-0.3,0.0);
glVertex3f(0.3,0.3,0.0);
glVertex3f(0.3,-0.3,0.0);
glEnd();
glFlush();
glutMainLoop();
return 0;
