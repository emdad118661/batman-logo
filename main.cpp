/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

static int slices = 16;
static int stacks = 16;

/* GLUT callback Handlers */

/*static void resize(int width, int height)
{
    const float ar = (float) width / (float) height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;
}

static void display(void)
{
    const double t = glutGet(GLUT_ELAPSED_TIME) / 1000.0;
    const double a = t*90.0;

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3d(1,0,0);

    glPushMatrix();
        glTranslated(-2.4,1.2,-6);
        glRotated(60,1,0,0);
        glRotated(a,0,0,1);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,1.2,-6);
        glRotated(60,1,0,0);
        glRotated(a,0,0,1);
        glutSolidCone(1,1,slices,stacks);
    glPopMatrix();

    glPushMatrix();
        glTranslated(2.4,1.2,-6);
        glRotated(60,1,0,0);
        glRotated(a,0,0,1);
        glutSolidTorus(0.2,0.8,slices,stacks);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-2.4,-1.2,-6);
        glRotated(60,1,0,0);
        glRotated(a,0,0,1);
        glutWireSphere(1,slices,stacks);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0,-1.2,-6);
        glRotated(60,1,0,0);
        glRotated(a,0,0,1);
        glutWireCone(1,1,slices,stacks);
    glPopMatrix();

    glPushMatrix();
        glTranslated(2.4,-1.2,-6);
        glRotated(60,1,0,0);
        glRotated(a,0,0,1);
        glutWireTorus(0.2,0.8,slices,stacks);
    glPopMatrix();

    glutSwapBuffers();
}


static void key(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 27 :
        case 'q':
            exit(0);
            break;

        case '+':
            slices++;
            stacks++;
            break;

        case '-':
            if (slices>3 && stacks>3)
            {
                slices--;
                stacks--;
            }
            break;
    }

    glutPostRedisplay();
}

static void idle(void)
{
    glutPostRedisplay();
}

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

/* Program entry point */

/*int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("GLUT Shapes");

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);

    glClearColor(1,1,1,1);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

    glutMainLoop();

    return EXIT_SUCCESS;
}*/
void Display(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255, 255, 255);
glBegin(GL_QUADS);
glVertex2i(0, 0);
glVertex2i(640, 0);
glVertex2i(640, 480);
glVertex2i(0, 480);
glEnd();

glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(427, 440);
glVertex2i(427, 460);
glVertex2i(212, 460);
glVertex2i(212, 440);
glEnd();


glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(212, 414);
glVertex2i(212, 440);
glVertex2i(148, 440);
glVertex2i(148, 414);
glEnd();


glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(148, 390);
glVertex2i(148, 414);
glVertex2i(118, 414);
glVertex2i(118, 390);
glEnd();


glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(118, 362);
glVertex2i(118,390);
glVertex2i(90, 390);
glVertex2i(90, 362);



glEnd();

glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(90, 337);



glVertex2i(90,362);



glVertex2i(55, 362);



glVertex2i(55, 337);



glEnd();






glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(55, 156);



glVertex2i(55,337);



glVertex2i(25, 337);



glVertex2i(25, 156);



glEnd();







glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(82, 130);



glVertex2i(82,156);



glVertex2i(55, 156);



glVertex2i(55, 130);



glEnd();







glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(114, 105);



glVertex2i(114,130);



glVertex2i(82, 130);



glVertex2i(82, 105);



glEnd();







glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(145, 80);



glVertex2i(145,105);



glVertex2i(114, 105);



glVertex2i(114, 80);



glEnd();







glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(210, 55);



glVertex2i(210,80);



glVertex2i(145, 80);



glVertex2i(145, 55);



glEnd();







glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(427, 30);



glVertex2i(427,55);



glVertex2i(212, 55);



glVertex2i(212, 30);



glEnd();







glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(490, 55);



glVertex2i(490,80);



glVertex2i(427, 80);



glVertex2i(427, 55);



glEnd();







glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(520, 80);



glVertex2i(520,102);



glVertex2i(490, 102);



glVertex2i(490, 80);



glEnd();






glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(550, 102);



glVertex2i(550,128);



glVertex2i(520, 128);



glVertex2i(520, 102);



glEnd();





glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(580, 128);



glVertex2i(580,156);



glVertex2i(550, 156);



glVertex2i(550, 128);



glEnd();






glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(610, 156);



glVertex2i(610,337);



glVertex2i(580, 337);



glVertex2i(580, 156);



glEnd();


glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(580, 337);



glVertex2i(580,360);



glVertex2i(555, 360);



glVertex2i(555, 337);



glEnd();





glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(555, 360);



glVertex2i(555,385);



glVertex2i(523, 385);



glVertex2i(523, 360);



glEnd();





glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(523, 385);



glVertex2i(523,410);



glVertex2i(490, 410);



glVertex2i(490, 385);



glEnd();


glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(490, 410);



glVertex2i(490,440);



glVertex2i(427, 440);



glVertex2i(427, 410);



glEnd();


glColor3ub (255, 255, 0);



glBegin(GL_QUADS);



glVertex2i(580, 156);



glVertex2i(580,337);



glVertex2i(555, 337);



glVertex2i(550, 156);



glEnd();


glColor3ub (255, 255, 0);



glBegin(GL_QUADS);



glVertex2i(550, 128);



glVertex2i(556,360);



glVertex2i(523, 360);



glVertex2i(520, 128);



glEnd();


glColor3ub (255, 255, 0);



glBegin(GL_QUADS);



glVertex2i(520, 102);



glVertex2i(524,385);



glVertex2i(490, 385);



glVertex2i(490, 102);



glEnd();

glColor3ub (255, 255, 0);



glBegin(GL_QUADS);



glVertex2i(490, 80);



glVertex2i(490,410);



glVertex2i(427, 410);



glVertex2i(427, 80);



glEnd();


glColor3ub (255, 255, 0);



glBegin(GL_QUADS);



glVertex2i(427, 440);



glVertex2i(427,55);



glVertex2i(212, 55);



glVertex2i(212, 440);



glEnd();



glColor3ub (255, 255, 0);



glBegin(GL_QUADS);



glVertex2i(212, 80);



glVertex2i(212,414);



glVertex2i(145, 414);



glVertex2i(145, 80);



glEnd();






glColor3ub (255, 255, 0);



glBegin(GL_QUADS);



glVertex2i(145, 105);



glVertex2i(148,390);



glVertex2i(118, 390);



glVertex2i(114, 105);



glEnd();




glColor3ub (255, 255, 0);



glBegin(GL_QUADS);



glVertex2i(115, 130);



glVertex2i(118,362);



glVertex2i(90, 362);



glVertex2i(82, 130);



glEnd();




glColor3ub (255, 255, 0);



glBegin(GL_QUADS);



glVertex2i(83, 156);



glVertex2i(90,337);



glVertex2i(55, 337);



glVertex2i(55, 156);



glEnd();





glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(550, 182);



glVertex2i(550, 306);



glVertex2i(523, 306);



glVertex2i(523, 182);



glEnd();


glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(523, 157);



glVertex2i(523, 334);



glVertex2i(490, 334);



glVertex2i(490, 157);



glEnd();


glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(490, 130);



glVertex2i(490, 360);



glVertex2i(460, 360);



glVertex2i(460, 130);



glEnd();


glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(460, 180);



glVertex2i(460, 310);



glVertex2i(430, 310);



glVertex2i(430, 180);



glEnd();


glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(430, 155);



glVertex2i(430, 280);



glVertex2i(400, 280);



glVertex2i(400, 155);



glEnd();


glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(400, 205);



glVertex2i(400, 310);



glVertex2i(365, 310);



glVertex2i(365, 205);



glEnd();


glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(365, 155);



glVertex2i(365, 360);



glVertex2i(275, 360);



glVertex2i(275, 155);



glEnd();


glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(275, 205);



glVertex2i(275, 310);



glVertex2i(245, 310);



glVertex2i(245, 205);



glEnd();


glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(245, 155);



glVertex2i(245, 280);



glVertex2i(215, 280);



glVertex2i(215, 155);



glEnd();


glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(215, 180);



glVertex2i(215, 310);



glVertex2i(185, 310);



glVertex2i(185, 180);



glEnd();


glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(185, 130);



glVertex2i(185, 360);



glVertex2i(155, 360);



glVertex2i(155, 130);



glEnd();


glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(155, 157);



glVertex2i(155, 334);



glVertex2i(125, 334);



glVertex2i(125, 157);



glEnd();


glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(125, 182);



glVertex2i(125, 306);



glVertex2i(95, 306);



glVertex2i(95, 182);



glEnd();

glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(350, 105);



glVertex2i(350, 360);



glVertex2i(290, 360);



glVertex2i(290, 105);



glEnd();

glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(335, 80);

glVertex2i(335, 105);

glVertex2i(305, 105);

glVertex2i(305, 80);


glEnd();



glColor3ub (0, 0, 0);

glBegin(GL_QUADS);

glVertex2i(365, 360);

glVertex2i(365, 385);

glVertex2i(335, 385);

glVertex2i(335, 360);



glEnd();


glColor3ub (0, 0, 0);

glBegin(GL_QUADS);

glVertex2i(305, 360);

glVertex2i(305, 385);

glVertex2i(275, 385);

glVertex2i(275, 360);
glEnd();


glColor3ub (0, 0, 0);

glBegin(GL_QUADS);

glVertex2i(460, 345);

glVertex2i(460, 370);

glVertex2i(430, 370);

glVertex2i(430, 345);

glEnd();


glColor3ub (0, 0, 0);



glBegin(GL_QUADS);



glVertex2i(210, 345);



glVertex2i(210, 370);



glVertex2i(180, 370);



glVertex2i(180, 345);



glEnd();



glFlush ();



}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);

}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("Batman");
glutDisplayFunc(Display);
myInit ();
glutMainLoop();
return 0;
}
