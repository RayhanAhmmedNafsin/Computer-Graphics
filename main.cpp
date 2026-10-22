#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void renderBitmapString(float x, float y, float z, void *font, char *string)
{
    char *c;

    glRasterPos3f(x, y, z);

    for (c = string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}


void display()
{
    glClearColor(1.25f, 1.52f, 0.96f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //Vertical  Axis
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(0.0f,  1.0f);
    glEnd();

    // Horizontal axis
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f( 1.0f, 0.0f);
    glEnd();

    // Morocco Flag
    glBegin(GL_POLYGON);
    glColor3f(0.929f, 0.082f, 0.082f); // Red colour

    glVertex2f(-0.6f,  0.5f);  // A
    glVertex2f(-0.1f, 0.5f);  // B
    glVertex2f(-0.1f, 0.14f); // D
    glVertex2f(-0.6f,  0.14f); // C
    glEnd();


    // Morocco Flag Star

    glColor3f(0.0f, 0.40f, 0.15f);

    glLineWidth(2.5f);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.35f,  0.40f);  // A
    glVertex2f(-0.26f,  0.24f);  // E
    glVertex2f(-0.44f,  0.34f);  // I
    glVertex2f(-0.26f,  0.34f);  // C
    glVertex2f(-0.44f,  0.24f);  // G

    glEnd();

     // Togo Flag Green Background
    glBegin(GL_POLYGON);
    glColor3f(0.16f, 0.39f, 0.24f); // Green

    glVertex2f(0.6f,  0.5f);  // A
    glVertex2f(0.1f, 0.5f);  // B
    glVertex2f(0.1f, 0.14f); // D
    glVertex2f(0.6f,  0.14f); // C
    glEnd();

    //Yellow Stripe

    glBegin(GL_POLYGON);
    glColor3f(0.89f, 0.78f, 0.11f); // Yellow

    glVertex2f(0.1f,  0.42f);  // A
    glVertex2f(0.6f, 0.42f);  // B
    glVertex2f(0.6f, 0.36f); // D
    glVertex2f(0.1f,  0.36f); // C
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.89f, 0.78f, 0.11f); // Green

    glVertex2f(0.1f, 0.3f);  // A
    glVertex2f(0.6f, 0.30f); // B
    glVertex2f(0.6f, 0.24f); // D
    glVertex2f(0.1f, 0.24f); // C
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.929f, 0.082f, 0.082f);// Red

    glVertex2f(0.1f,  0.5f);  // A
    glVertex2f(0.3f,  0.5f);  // B
    glVertex2f(0.3f,  0.3f); // D
    glVertex2f(0.1f,  0.3f); // C
    glEnd();


    // Star
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.22f,  0.40f); //B
    glVertex2f(0.26f,  0.40f); //C
    glVertex2f(0.23f,  0.38f); //D
    glVertex2f(0.26f,  0.34f); //E
    glVertex2f(0.20f,  0.37f); //F
    glVertex2f(0.14f,  0.34f); //G
    glVertex2f(0.17f,  0.38f); //H
    glVertex2f(0.14f,  0.40f); //I
    glVertex2f(0.18f,  0.40f); //J
    glVertex2f (0.20f,  0.46f);//A


    glEnd();

    //Scotland

    glBegin(GL_POLYGON);
    glColor3f(0.13f, 0.36f, 0.71f); // Green

    glVertex2f(0.6f, -0.5f);  // A
    glVertex2f(0.1f, -0.5f);  // B
    glVertex2f(0.1f, -0.14f); // D
    glVertex2f(0.6f, -0.14f); // C
    glEnd();

    //White Stripe
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f); // White

    glVertex2f(0.11f, -0.12f);  // A
    glVertex2f(0.64f, -0.48f);  // B
    glVertex2f(0.57f, -0.52f); // C
    glVertex2f(0.08f, -0.18f); // D
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f); // White

    glVertex2f(0.57f, -0.12f);  // A
    glVertex2f(0.08f, -0.46f);  // B
    glVertex2f(0.10f, -0.52f); // C
    glVertex2f(0.64f, -0.16f); // D
    glEnd();


    //Saint Kitts


    // Red background
    glBegin(GL_POLYGON);
    glColor3f(0.929f, 0.082f, 0.082f);

    glVertex2f(-0.6f, -0.5f);
    glVertex2f(-0.1f, -0.5f);
    glVertex2f(-0.1f, -0.14f);
    glVertex2f(-0.6f, -0.14f);
    glEnd();

    // Green triangle
    glBegin(GL_POLYGON);
    glColor3f(0.13f, 0.71f, 0.38f);

    glVertex2f(-0.6f, -0.5f);
    glVertex2f(-0.6f, -0.14f);
    glVertex2f(-0.1f, -0.14f);
    glEnd();

    // Yellow diagonal border - lower side
    glBegin(GL_POLYGON);
    glColor3f(0.89f, 0.78f, 0.11f); // Yellow

    glVertex2f(-0.60f, -0.38f);//A
    glVertex2f(-0.24f, -0.14f); //B
    glVertex2f(-0.10f, -0.14f); //C
    glVertex2f(-0.10f, -0.22f); //D
    glVertex2f(-0.48f, -0.50f); //E
    glVertex2f(-0.60f, -0.50f); //F
    glEnd();



    // Black diagonal band
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.60f, -0.40f);//A
    glVertex2f(-0.22f, -0.14f); //B
    glVertex2f(-0.10f, -0.14f); //C
    glVertex2f(-0.10f, -0.20f); //D
    glVertex2f(-0.50f, -0.50f); //E
    glVertex2f(-0.60f, -0.50f); //F
    glEnd();

     // Star
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.46f, -0.38f); //B
    glVertex2f(-0.43f, -0.36f); //C
    glVertex2f(-0.44f, -0.39f); //D
    glVertex2f(-0.40f, -0.40f); //E
    glVertex2f(-0.46f, -0.41f); //F
    glVertex2f(-0.48f, -0.46f); //G
    glVertex2f(-0.48f, -0.42f); //H
    glVertex2f(-0.52f, -0.42f); //I
    glVertex2f(-0.49f, -0.40f); //J
    glVertex2f(-0.50f, -0.36f);//A
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.26f, -0.24f); //B
    glVertex2f(-0.23f, -0.21f); //C
    glVertex2f(-0.24f, -0.25f); //D
    glVertex2f(-0.20f, -0.26f); //E
    glVertex2f(-0.26f, -0.27f); //F
    glVertex2f(-0.28f, -0.32f); //G
    glVertex2f(-0.28f, -0.28f); //H
    glVertex2f(-0.32f, -0.28f); //I
    glVertex2f(-0.28f, -0.26f); //J
    glVertex2f(-0.30f, -0.21f);//A
    glEnd();















    glFlush();
}


/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv)
{
    glutInit(&argc, argv);

    glutInitWindowSize(640, 480); // Set the window's initial width & height

    glutInitWindowPosition(80, 50); // Set the window's initial position according to the monitor

    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title

    glutDisplayFunc(display); // Register display callback handler for window re-paint

    glutMainLoop(); // Enter the event-processing loop

    return 0;
}
