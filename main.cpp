#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include <stdlib.h>
#include <windows.h>
#include <math.h>

float xRotated = 90.0, yRotated = 0.0, zRotated = 0.0,qx,qz;
//----------------------keyboard--------------------------
void keyboard(unsigned char Key,int x,int y)
    {
   if(Key=='w'){qz-=0.1;} if(Key=='s'){qz+=0.1;}//forward and back   moving
   if(Key=='a'){qx-=0.1;} if(Key=='d'){qx+=0.1;}//left and right    moving

    glutPostRedisplay();
    }
void onMouseClick(int button, int state, int x, int y)
{
    if(button==GLUT_LEFT_BUTTON&&state==GLUT_DOWN)
    {

        qx-=0.1;
    }
}

//------------------------------  reshapeFunc  ---------------------------------

void reshapeFunc (int w, int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective (40.0, (GLdouble)w / (GLdouble)h, 0.5, 20.0);
    glMatrixMode(GL_MODELVIEW);
}


void sky(){

   //moon
     glColor3f (0.79,0.75,0.73);
       glPushMatrix ();
       glTranslatef    (-8.9,5, 0.0);
        glRotatef       (90.0, 1,0,0);
       glRotatef       (zRotated, 0,0,1);

       glutSolidSphere (0.5, 30, 30);
       glPopMatrix ();


 //clouds//
//1
 glPushMatrix();
 glColor3f(0.94, 1.0, 1.0);
 glTranslatef(-4+qx,4.5,1+qz);
 glutSolidSphere(0.2,800,90);
 glPopMatrix();

//2
 glPushMatrix();
 glColor3f(0.94, 1.0, 1.0);
 glTranslatef(-4.3+qx,4.5,1+qz);
 glutSolidSphere(0.2,800,90);
 glPopMatrix();


//3
 glPushMatrix();
 glColor3f(0.94, 1.0, 1.0);
 glTranslatef(-4.6+qx,4.5,1+qz);
 glutSolidSphere(0.2,800,90);
 glPopMatrix();


//4
 glPushMatrix();
 glColor3f(0.94, 1.0, 1.0);
 glTranslatef(-4.3+qx,4.7,1+qz);
 glutSolidSphere(0.2,800,90);
 glPopMatrix();







 //clouds2
 //1
 glPushMatrix();
 glColor3f(0.94, 1.0, 1.0);
 glTranslatef(-2+qx,4.5,1+qz);
 glutSolidSphere(0.2,800,90);
 glPopMatrix();

//2
 glPushMatrix();
 glColor3f(0.94, 1.0, 1.0);
 glTranslatef(-2.3+qx,4.5,1+qz);
 glutSolidSphere(0.2,800,90);
 glPopMatrix();


//3
 glPushMatrix();
 glColor3f(0.94, 1.0, 1.0);
 glTranslatef(-2.6+qx,4.5,1+qz);
 glutSolidSphere(0.2,800,90);
 glPopMatrix();


//4
 glPushMatrix();
 glColor3f(0.94, 1.0, 1.0);
 glTranslatef(-2.3+qx,4.7,1+qz);
 glutSolidSphere(0.2,800,90);
 glPopMatrix();

}

void house(){

//ground
   glPushMatrix();
   glColor3f(0.94, 0.86, 0.51);
   glTranslatef(9,-4,-16);
   glutSolidSphere(7.8,500,30);
   glPopMatrix();


//house

     glLoadIdentity();
     glTranslatef(3.8,0,-5.9);
     glBegin(GL_QUADS);
      // Top face

      glColor3f(0.69, 0.25, 0.21);
      glVertex3f( 0.3f, 0.3f, -0.3f);
      glVertex3f(-0.3f, 0.3f, -0.3f);
      glVertex3f(-0.3f, 0.3f,  0.3f);
      glVertex3f( 0.3f, 0.3f,  0.3f);

      // Bottom face
      glColor3f(0.69, 0.25, 0.21);
      glVertex3f( 0.3f, -0.3f,  0.3f);
      glVertex3f(-0.3f, -0.3f,  0.3f);
      glVertex3f(-0.3f, -0.3f, -0.3f);
      glVertex3f( 0.3f, -0.3f, -0.3f);

      // Front face
      glColor3f(0.69, 0.25, 0.21);
      glVertex3f( 0.3f,  0.3f, 0.3f);
      glVertex3f(-0.3f,  0.3f, 0.3f);
      glVertex3f(-0.3f, -0.3f, 0.3f);
      glVertex3f( 0.3f, -0.3f, 0.3f);

      // Back face
      glColor3f(0.69, 0.25, 0.21);
      glVertex3f( 0.3f, -0.3f, -0.3f);
      glVertex3f(-0.3f, -0.3f, -0.3f);
      glVertex3f(-0.3f,  0.3f, -0.3f);
      glVertex3f( 0.3f,  0.3f, -0.3f);

      // Left face
      glColor3f(0.69, 0.25, 0.21);
      glVertex3f(-0.3f,  0.3f,  0.3f);
      glVertex3f(-0.3f,  0.3f, -0.3f);
      glVertex3f(-0.3f, -0.3f, -0.3f);
      glVertex3f(-0.3f, -0.3f,  0.3f);

      // Right face
      glColor3f(0.69, 0.25, 0.21);
      glVertex3f(0.3f,  0.3f, -0.3f);
      glVertex3f(0.3f,  0.3f,  0.3f);
      glVertex3f(0.3f, -0.3f,  0.3f);
      glVertex3f(0.3f, -0.3f, -0.3f);
   glEnd();






   glLoadIdentity();
   glTranslatef(3.8,0.5, -5.9);

   glBegin(GL_TRIANGLES);
      // Front
      glColor3f(0.9f, 0.75f, 0.54f);
      glVertex3f( 0.0f, 0.4f, 0.0f);
      glColor3f(0.9f, 0.75f, 0.54f);
      glVertex3f(-0.4f, -0.4f, 0.4f);
      glColor3f(0.9f, 0.75f, 0.54f);
      glVertex3f(0.4f, -0.4f, 0.4f);

      // Right
      glColor3f(0.9f, 0.75f, 0.54f);
      glVertex3f(0.0f, 0.4f, 0.0f);
      glColor3f(0.9f, 0.75f, 0.54f);
      glVertex3f(0.4f, -0.4f, 0.4f);
      glColor3f(0.9f, 0.75f, 0.54f);
      glVertex3f(0.4f, -0.4f, -0.4f);

      // Back
      glColor3f(0.9f, 0.75f, 0.54f);
      glVertex3f(0.0f, 0.4f, 0.0f);
      glColor3f(0.9f, 0.75f, 0.54f);
      glVertex3f(0.4f, -0.4f, -0.4f);
      glColor3f(0.9f, 0.75f, 0.54f);
      glVertex3f(-0.4f, -0.4f, -0.4f);

      // Left
      glColor3f(0.9f, 0.75f, 0.54f);
      glVertex3f( 0.0f, 0.4f, 0.0f);
      glColor3f(0.9f, 0.75f, 0.54f);
      glVertex3f(-0.4f,-0.4f,-0.4f);
      glColor3f(0.9f, 0.75f, 0.54f);
      glVertex3f(-0.4f,-0.4f, 0.4f);
   glEnd();

}

   void stars(){
//--
//star1
    glColor3f (1.0, 1.0, 0.19);
    glPushMatrix ();
    glTranslatef (-1,0,-10);
    glRotatef(90.0, 1,0,0);
    glRotatef(zRotated, 0,0,1);
    glutSolidSphere (0.1, 5, 30);
    glPopMatrix ();



//star2
     glColor3f (1.0, 1.0, 0.19);
     glPushMatrix ();
     glTranslatef    (-4,-1,-10);
     glRotatef       (90.0, 1,0,0);
     glRotatef       (zRotated, 0,0,1);
     glutSolidSphere (0.1, 5, 30);
     glPopMatrix ();


//star3
    glColor3f (1.0, 1.0, 0.19);
    glPushMatrix ();
    glTranslatef    (-8,1,-10);
    glRotatef       (90.0, 1,0,0);
    glRotatef       (zRotated, 0,0,1);
    glutSolidSphere (0.1, 5, 30);
    glPopMatrix ();


//star4
     glColor3f (1.0, 1.0, 0.19);
     glPushMatrix ();
     glTranslatef    (-10,2,-10);
     glRotatef       (90.0, 1,0,0);
     glRotatef       (zRotated, 0,0,1);
     glutSolidSphere (0.1, 5, 30);
     glPopMatrix ();

//star5
     glColor3f (1.0, 1.0, 0.19);
     glPushMatrix ();
     glTranslatef    (7,2,-10);
     glRotatef       (90.0, 1,0,0);
     glRotatef       (zRotated, 0,0,1);
     glutSolidSphere (0.1, 5, 30);
     glPopMatrix ();


//star6
     glColor3f (1.0, 1.0, 0.19);
     glPushMatrix ();
     glTranslatef    (5,4.5,-10);
     glRotatef       (90.0, 1,0,0);
     glRotatef       (zRotated, 0,0,1);
     glutSolidSphere (0.1, 5, 30);
     glPopMatrix ();

   glutSwapBuffers();

}


void ground(){


// first tree from the right

  glPushMatrix();
  glTranslatef(9.5,-5.5, 0.0);

  glColor3f(0.7f, 0.5f, 0.2f);
  glRotatef(270.0, 1.0, 0.0, 0.0);
  glutSolidCone(0.3, 2.0, 70, 12);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(9.5,-4.5, 0.0);
  glColor3f(0.7f, 0.5f, 0.2f);
  glRotatef(270.0, 1.0, 0.0, 0.0);
  glutSolidCone(0.3, 2.0, 70, 12);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(9.5,-3.5, 0.0);

  glColor3f(0.3f,0.7f,0.3f);
  glRotatef(270.0, 1.0, 0.0, 0.0);
  glutSolidCone(0.8, 2.0, 70, 12);
  glPopMatrix();
// second tree from the right
 glPushMatrix();
  glTranslatef(8.3,-5.5, 0.0);
  glColor3f(0.7f, 0.5f, 0.2f);
  glRotatef(270.0, 1.0, 0.0, 0.0);
  glutSolidCone(0.3, 2.0, 70, 12);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(8.3,-4.5, 0.0);
  glColor3f(0.7f, 0.5f, 0.2f);
  glRotatef(270.0, 1.0, 0.0, 0.0);
  glutSolidCone(0.3, 2.0, 70, 12);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(8.3,-3.5, 0.0);
  glColor3f(0.3f,0.7f,0.3f);
  glRotatef(270.0, 1.0, 0.0, 0.0);
  glutSolidCone(0.8, 2.0, 70, 12);
  glPopMatrix();




// first tree from the left

  glPushMatrix();
  glTranslatef(-9.5,-5.5, 0.0);
  glColor3f(0.7f, 0.5f, 0.2f);
  glRotatef(270.0, 1.0, 0.0, 0.0);
  glutSolidCone(0.3, 2.0, 70, 12);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(-9.5,-4.5, 0.0);
  glColor3f(0.7f, 0.5f, 0.2f);
  glRotatef(270.0, 1.0, 0.0, 0.0);
  glutSolidCone(0.3, 2.0, 70, 12);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(-9.5,-3.5, 0.0);
  glColor3f(0.3f,0.7f,0.3f);
  glRotatef(270.0, 1.0, 0.0, 0.0);
  glutSolidCone(0.8, 2.0, 70, 12);
  glPopMatrix();



// third pyramid from left
  glPushMatrix();
  glTranslatef(-8.3,-5.5, 0.0);
  glColor3f(0.7f, 0.5f, 0.2f);
  glRotatef(270.0, 1.0, 0.0, 0.0);
  glutSolidCone(0.3, 2.0, 70, 12);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(-8.3,-4.5, 0.0);
  glColor3f(0.7f, 0.5f, 0.2f);
  glRotatef(270.0, 1.0, 0.0, 0.0);
  glutSolidCone(0.3, 2.0, 70, 12);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(-8.3,-3.5, 0.0);
  glColor3f(0.3f,0.7f,0.3f);
  glRotatef(270.0, 1.0, 0.0, 0.0);
  glutSolidCone(0.8, 2.0, 70, 12);
  glPopMatrix();


//middle tree from the left

  glPushMatrix();
  glTranslatef(-8.8,-5.5, 0.0);
  glColor3f(0.7f, 0.5f, 0.2f);
  glRotatef(270.0, 1.0, 0.0, 0.0);
  glutSolidCone(0.3, 2.0, 70, 12);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(-8.8,-4.5, 0.0);
  glColor3f(0.7f, 0.5f, 0.2f);
  glRotatef(270.0, 1.0, 0.0, 0.0);
  glutSolidCone(0.3, 2.0, 70, 12);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(-8.8,-3.5, 0.0);
  glColor3f(0.3f,0.7f,0.3f);
  glRotatef(270.0, 1.0, 0.0, 0.0);
  glutSolidCone(0.8, 2.0, 70, 12);
  glPopMatrix();





      // the middle pyramids


   glLoadIdentity();
   glTranslatef(-0.5f, -0.6f, -5.0f);
   glBegin(GL_TRIANGLES);
      // Front
      glColor3f(0.5f, 0.3f, 0.0f);
      glVertex3f( 0.0f, 0.99f, 0.0f);
      glColor3f(0.5f, 0.3f, 0.0f);
      glVertex3f(-0.99f, -0.99f, 0.99f);
      glColor3f(0.5f, 0.3f, 0.0f);
      glVertex3f(0.99f, -0.99f, 0.99f);

      // Right
      glColor3f(0.7f, 0.5f, 0.0f);
      glVertex3f(0.0f, 0.99f, 0.0f);
      glColor3f(0.7f, 0.5f, 0.0f);
      glVertex3f(0.99f, -0.99f, 0.99f);
      glColor3f(0.7f, 0.5f, 0.0f);
      glVertex3f(0.99f, -0.99f, -0.99f);

      // Back
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(0.0f, 0.99f, 0.0f);
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(0.99f, -0.99f, -0.99f);
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(-0.99f, -0.99f, -0.99f);

      // Left
      glColor3f(1.0f,0.88f,0.21f);
      glVertex3f( 0.0f, 0.99f, 0.0f);
      glColor3f(1.0f,0.88f,0.21f);
      glVertex3f(-0.99f,-0.99f,-0.99f);
      glColor3f(1.0f,0.88f,0.21f);
      glVertex3f(-0.99f,-0.99f, 0.99f);
   glEnd();

       // right pyramids

    glLoadIdentity();
    glTranslatef(1.5f, -0.85f, -6.0f);
    glBegin(GL_TRIANGLES);
      // Front
      glColor3f(0.5f, 0.3f, 0.0f);
      glVertex3f( 0.0f, 0.99f, 0.0f);
      glColor3f(0.5f, 0.3f, 0.0f);
      glVertex3f(-0.99f, -0.99f, 0.99f);
      glColor3f(0.5f, 0.3f, 0.0f);
      glVertex3f(0.99f, -0.99f, 0.99f);

      // Right
      glColor3f(0.94f, 0.86f, 0.51f);
      glVertex3f(0.0f, 0.99f, 0.0f);
      glColor3f(0.94f, 0.86f, 0.51f);
      glVertex3f(0.99f, -0.99f, 0.99f);
      glColor3f(0.94f, 0.86f, 0.51f);
      glVertex3f(0.99f, -0.99f, -0.99f);

      // Back
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(0.0f, 0.99f, 0.0f);
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(0.99f, -0.99f, -0.99f);
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(-0.99f, -0.99f, -0.99f);

      // Left
      glColor3f(0.7f, 0.5f, 0.0f);
      glVertex3f( 0.0f, 0.99f, 0.0f);
      glColor3f(0.7f, 0.5f, 0.0f);
      glVertex3f(-0.99f,-0.99f,-0.99f);
      glColor3f(0.7f, 0.5f, 0.0f);
      glVertex3f(-0.99f,-0.99f, 0.99f);
   glEnd();



            // left pyramids

    glLoadIdentity();
    glTranslatef(-3.0f, -1.3f, -7.0f);

   glBegin(GL_TRIANGLES);
      // Front
      glColor3f(0.5f, 0.3f, 0.0f);
      glVertex3f( 0.0f, 0.99f, 0.0f);
      glColor3f(0.5f, 0.3f, 0.0f);
      glVertex3f(-0.99f, -0.99f, 0.99f);
      glColor3f(0.5f, 0.3f, 0.0f);
      glVertex3f(0.99f, -0.99f, 0.99f);

      // Right
      glColor3f(0.7f, 0.5f, 0.0f);
      glVertex3f(0.0f, 0.99f, 0.0f);
      glColor3f(0.7f, 0.5f, 0.0f);
      glVertex3f(0.99f, -0.99f, 0.99f);
      glColor3f(0.7f, 0.5f, 0.0f);
      glVertex3f(0.99f, -0.99f, -0.99f);

      // Back
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(0.0f, 0.99f, 0.0f);
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(0.99f, -0.99f, -0.99f);
      glColor3f(1.0f, 0.88f, 0.21f);
      glVertex3f(-0.99f, -0.99f, -0.99f);

      // Left
      glColor3f(1.0f,1.0f,0.5f);
      glVertex3f( 0.0f, 0.99f, 0.0f);
      glColor3f(1.0f,1.0f,0.5f);
      glVertex3f(-0.99f,-0.99f,-0.99f);
      glColor3f(1.0f,1.0f,0.5f);
      glVertex3f(-0.99f,-0.99f, 0.99f);

   glEnd();






 //brick

     glLoadIdentity();
     glTranslatef(4.0f, -2.8f, -8.0f);
     glBegin(GL_QUADS);
      // Top face

      glColor3f(0.7f, 0.5f, 0.2f);
      glVertex3f( 0.2f, 0.2f, -0.2f);
      glVertex3f(-0.2f, 0.2f, -0.2f);
      glVertex3f(-0.2f, 0.2f,  0.2f);
      glVertex3f( 0.2f, 0.2f,  0.2f);

      // Bottom face
      glColor3f(1.0f, 0.5f, 0.0f);
      glVertex3f( 0.2f, -0.2f,  0.2f);
      glVertex3f(-0.2f, -0.2f,  0.2f);
      glVertex3f(-0.2f, -0.2f, -0.2f);
      glVertex3f( 0.2f, -0.2f, -0.2f);

      // Front face
      glColor3f(0.7f, 0.5f, 0.2f);
      glVertex3f( 0.2f,  0.2f, 0.2f);
      glVertex3f(-0.2f,  0.2f, 0.2f);
      glVertex3f(-0.2f, -0.2f, 0.2f);
      glVertex3f( 0.2f, -0.2f, 0.2f);

      // Back face
      glColor3f(1.0f, 1.0f, 0.0f);
      glVertex3f( 0.2f, -0.2f, -0.2f);
      glVertex3f(-0.2f, -0.2f, -0.2f);
      glVertex3f(-0.2f,  0.2f, -0.2f);
      glVertex3f( 0.2f,  0.2f, -0.2f);

      // Left face
      glColor3f(0.7f, 0.5f, 0.2f);
      glVertex3f(-0.2f,  0.2f,  0.2f);
      glVertex3f(-0.2f,  0.2f, -0.2f);
      glVertex3f(-0.2f, -0.2f, -0.2f);
      glVertex3f(-0.2f, -0.2f,  0.2f);

      // Right face
      glColor3f(1.0f, 0.0f, 1.0f);
      glVertex3f(0.2f,  0.2f, -0.2f);
      glVertex3f(0.2f,  0.2f,  0.2f);
      glVertex3f(0.2f, -0.2f,  0.2f);
      glVertex3f(0.2f, -0.2f, -0.2f);
   glEnd();

}




//------------------------------  display   -------------------------------

   void display (void)
     {

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity ();
    glTranslatef(0.0, 0.0, -15.0);
    ground ();
    sky();
    house();
    stars ();
   }

//--------------------------------  idleFunc  ----------------------------------

    void idleFunc (void)
    {
    zRotated += 1;
    glutPostRedisplay();
    }

    void texture (void){

   const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
   const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
   const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
   const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

   const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
   const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
   const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
   const GLfloat high_shininess[] = { 100.0f };

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


}


//----------------------------------  main  ------------------------------------


int main (int argc, char **argv)
{
    glutInit               (&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize     (1500, 1500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow       ("20109806");

    glClearColor (1.0, 1.0, 1.0, 0.0);
glutDisplayFunc (display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(onMouseClick);
    glutReshapeFunc (reshapeFunc);
    glutIdleFunc    (idleFunc);

    glClearColor(0.0f,0.2f,0.4f,0.0f);
    texture();

    glutMainLoop();
}
