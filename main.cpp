#ifdef __APPLE__

#include <GLUT/glut.h>

#else

#include <GL/glut.h>

#endif

#include <stdlib.h>

void display()

{

    glClear(GL_COLOR_BUFFER_BIT);

    //Right Shoes

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_POLYGON);

    glVertex2f(0.10f, -0.40f);  // B

    glVertex2f(0.16f, -0.40f);  // C

    glVertex2f(0.16f, -0.45f);  // D

    glVertex2f(0.04f, -0.45f);  // E

    glVertex2f(0.04f, -0.34f);  // F

    glVertex2f(0.10f, -0.34f);  // A

    glEnd();

    //Left Shoes

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_POLYGON);

    glVertex2f(-0.10f, -0.40f);  // B

    glVertex2f(-0.16f, -0.40f);  // C

    glVertex2f(-0.16f, -0.45f);  // D

    glVertex2f(-0.04f, -0.45f);  // E

    glVertex2f(-0.04f, -0.34f);  // F

    glVertex2f(-0.10f, -0.34f);  // A

    glEnd();



    //pant stripe

    glColor3f(0.60f, 0.73f, 0.89f);

    glBegin(GL_POLYGON);

    glVertex2f(0.10f, -0.34f);  // A

    glVertex2f(0.04f, -0.34f);  // F

    glVertex2f(0.04f, -0.30f);  // H

    glVertex2f(0.10f, -0.30f);  // G

    glEnd();

    glColor3f(0.60f, 0.73f, 0.89f);

    glBegin(GL_POLYGON);

    glVertex2f(-0.10f, -0.34f);  // A

    glVertex2f(-0.04f, -0.34f);  // F

    glVertex2f(-0.04f, -0.30f);  // H

    glVertex2f(-0.10f, -0.30f);  // G

    glEnd();

    //Pant

    glColor3f(0.18f, 0.41f, 0.69f);

    glBegin(GL_POLYGON);

    glVertex2f(0.04f, -0.06f);// B

    glVertex2f(0.04f, -0.32f);// H

    glVertex2f(0.10f, -0.32f);// G

    glVertex2f(0.10f,-0.00f); // C

    glVertex2f(0.0f, -0.0f);  // D

    glVertex2f(0.00f, -0.06f);// A

    glEnd();



    glColor3f(0.18f, 0.41f, 0.69f);

    glBegin(GL_POLYGON);

    glVertex2f(-0.04f, -0.06f);// B

    glVertex2f(-0.04f, -0.32f);// H

    glVertex2f(-0.10f, -0.32f);// G

    glVertex2f(-0.10f,-0.00f); // C

    glVertex2f(-0.0f, -0.0f);  // D

    glVertex2f(-0.00f, -0.06f);// A

    glEnd();

    //Neck

    glColor3f(0.92f, 0.89f, 0.78f);

    glBegin(GL_POLYGON);

    glVertex2f(0.08f, 0.30f);//E

    glVertex2f(-0.12f, 0.30f);//D

    glVertex2f(-0.12f, 0.15f);//A

    glVertex2f(0.12f, 0.15f);//B

    glEnd();

    //white Shirt

    glColor3f(1.0f, 1.0f, 1.0f);

    glBegin(GL_POLYGON);

    glVertex2f(-0.05f, 0.26f);//F

    glVertex2f(0.05f, 0.26f);//F

    glVertex2f(0.05f, 0.20f);//G

    glVertex2f(0.03f, 0.04f);//B

    glVertex2f(-0.03f, 0.22f);//G

    glVertex2f(-0.03f, 0.04f);//B

    glVertex2f(0.10f,  0.04f);//A

    glEnd();

    //Grey Jacket

    glColor3f(0.39f, 0.39f, 0.36f);

    glBegin(GL_POLYGON);

    glVertex2f(-0.01f, 0.04f);// B

    glVertex2f(-0.01f, 0.10f);// C

    glVertex2f(0.02f,  0.10f);//D

    glVertex2f(0.02f,  0.04f);// E

    glVertex2f(0.10f,  0.04f);// F

    glVertex2f(0.10f,  0.00f);// C

    glVertex2f(-0.10f,  0.00f);// -C

    glVertex2f(-0.1f, 0.04f);// A

    glEnd();



    //Right Hand

    glColor3f(0.92f, 0.89f, 0.78f);

    glBegin(GL_POLYGON);

    glVertex2f(0.16f, -0.04f);// A

    glVertex2f(0.08f, -0.04f);// B

    glVertex2f(0.08f, -0.06f); //C

    glVertex2f(0.10f, -0.06f);// F

    glVertex2f(0.10f, -0.10f);// D

    glVertex2f(0.16f,  -0.10f);// E

    glEnd();

    glColor3f(0.92f, 0.89f, 0.78f);

    glBegin(GL_POLYGON);

    glVertex2f(-0.16f, -0.04f);// A

    glVertex2f(-0.08f, -0.04f);// B

    glVertex2f(-0.08f, -0.06f); //C

    glVertex2f(-0.10f, -0.06f);// F

    glVertex2f(-0.10f, -0.10f);// D

    glVertex2f(-0.16f,  -0.10f);// E

    glEnd();

    //Black Shirt Left

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_POLYGON);

    glVertex2f(-0.12f, 0.28f);//C

    glVertex2f(-0.12f, 0.30f);// D

    glVertex2f(-0.05f, 0.30f);// E

    glVertex2f(-0.05f, 0.04f);//G

    glVertex2f(-0.10f,  0.04f);//A

    glVertex2f(-0.10f, -0.04f);//K

    glVertex2f(-0.16f, -0.04f);// A

    glVertex2f(-0.16f, 0.28f);// B

    glEnd();





    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_POLYGON);

    glVertex2f(0.12f, 0.28f);//C

    glVertex2f(0.12f, 0.30f);// D

    glVertex2f(0.05f, 0.30f);// E

    glVertex2f(0.05f, 0.04f);//G

    glVertex2f(0.10f,  0.04f);//A

    glVertex2f(0.10f, -0.04f);//K

    glVertex2f(0.16f, -0.04f);// A

    glVertex2f(0.16f, 0.28f);// B

    glEnd();



     //Black shirt middle part

     glColor3f(0.0f, 0.0f, 0.0f);

     glBegin(GL_POLYGON);

     glVertex2f(-0.05f, 0.22f);//F

     glVertex2f(-0.03f, 0.22f);//G

     glVertex2f(-0.03f, 0.04f);//B

     glVertex2f(-0.10f,  0.04f);//A

     glEnd();



     glColor3f(0.0f, 0.0f, 0.0f);

     glBegin(GL_POLYGON);

     glVertex2f(0.05f, 0.22f);//F

     glVertex2f(0.03f, 0.22f);//G

     glVertex2f(0.03f, 0.04f);//B

     glVertex2f(0.10f,  0.04f);//A

     glEnd();



     glColor3f(0.0f, 0.0f, 0.0f);

     glBegin(GL_POLYGON);

     glVertex2f(-0.03f, 0.15f);//H

     glVertex2f(-0.01f, 0.15f);//I

     glVertex2f(-0.01f, 0.04f);//

     glVertex2f(-0.10f,  0.04f);//A

     glEnd();



     glColor3f(0.0f, 0.0f, 0.0f);

     glBegin(GL_POLYGON);

     glVertex2f(0.03f, 0.15f);//H

     glVertex2f(0.01f, 0.15f);//I

     glVertex2f(0.01f, 0.04f);//

     glVertex2f(0.10f,  0.04f);//A

     glEnd();

     //Face

     glColor3f(0.92f, 0.89f, 0.78f);

     glBegin(GL_POLYGON);

     glVertex2f(-0.12f, 0.30f);//D

     glVertex2f(-0.14f, 0.30f);//A

     glVertex2f(-0.14f,  0.50f);//B

     glVertex2f(0.08f,  0.50f);//C

     glVertex2f(0.08f,  0.30f);//E

     glEnd();

    //Hair

     glColor3f(0.0f, 0.0f, 0.0f);

     glBegin(GL_POLYGON);

     glVertex2f(0.06f,  0.50f);//C

     glVertex2f(0.02f,  0.50f);//M

     glVertex2f(-0.14f, 0.50f);//B

     glVertex2f(-0.14f, 0.58f);//B

     glVertex2f(-0.10f,  0.58f);//E

     glVertex2f(0.12f,  0.58f);//F

     glVertex2f(0.12f,  0.40f);//G

     glVertex2f(0.06f,  0.40f);//H

     glEnd();



     glColor3f(0.0f, 0.0f, 0.0f);

     glBegin(GL_POLYGON);

     glVertex2f(-0.14f, 0.50f);//B

     glVertex2f(-0.20f, 0.50f);//A

     glVertex2f(-0.20f,  0.64f);//C

     glVertex2f(-0.10f,  0.64f);//D

     glVertex2f(-0.10f,  0.58f);//E

     glEnd();



     glColor3f(0.0f, 0.0f, 0.0f);

     glBegin(GL_POLYGON);

     glVertex2f(0.04f,  0.44f);//J

     glVertex2f(0.04f,  0.34f);//K

     glVertex2f(0.02f,  0.34f);//L

     glVertex2f(0.02f,  0.50f);//M

     glVertex2f(0.06f,  0.50f);//N

     glVertex2f(0.06f,  0.44f);//I

     glEnd();

     //SunGlass

     glColor3f(0.0f, 0.0f, 0.0f);

     glBegin(GL_POLYGON);

     glVertex2f(-0.20f,  0.46f);//A

     glVertex2f(-0.14f,  0.46f);//X

     glVertex2f(-0.14f,  0.40f);//G

     glVertex2f(-0.20f,  0.40f);//H

     glEnd();

     glColor3f(0.0f, 0.0f, 0.0f);

     glBegin(GL_POLYGON);

     glVertex2f(-0.10f,  0.42f);//E

     glVertex2f(-0.14f,  0.42f);//F

     glVertex2f(-0.14f,  0.46f);//X

     glVertex2f(-0.02f,  0.46f);//B

     glVertex2f(-0.02f,  0.40f);//C

     glVertex2f(-0.10f,  0.40f);//D

     glEnd();

     glFlush();

}

int main(int argc, char** argv)

{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(640, 480);

    glutInitWindowPosition(80, 50);

    glutCreateWindow("OpenGL Setup Test");

    glClearColor(0.73f, 0.77f, 0.81f, 1.0f);

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;

}

