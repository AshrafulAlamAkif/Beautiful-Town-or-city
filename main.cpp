#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>

using namespace std;

float _angle1 = 0.0f;
float _move = 0.0f;
float _movef = 0.0f;
float _moveft = 0.0f;
float _movec = 0.0f;
float _movecb = 0.0f;
float _movew = 0.0f;
float _movefb = 0.0f;
float _move3 = 0.0f;
float speed = 0.0f;
float speedt = 0.0f;
float str=0.52;
float stg=0.80;
float stb=0.98;
float mr=0.98;
float mg=0.83;
float mb=0.25;
float br= 130;
float bg= 150;
float bb= 137;
float br1= 1;
float bg1= 1;
float bb1= 1;
float br11= 132.6;
float bg11= 204;
float bb11= 250;
float tr=0;
float tg=1;
float tb=0;
float tr2=0;
float tg2=0;
float tb2=0;
int csp=1;
int cspm=1;

int dcheck=0;


float getX(float x)
{
    return x/750.00;
}
float getY(float y)
{
    return y/400.00;
}
float getR(float x)
{
    return x/255.00;
}
float getG(float y)
{
    return y/255.00;
}

float getB(float x)
{
    return x/255.00;
}


    void drawDisplay(){
    glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);

                                    /// sky color///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.000, 0.749, 1.000);

    glVertex3f(1.00f,  getY(36), 0.0f);
    glVertex3f(1.00f, getY(400), 0.0f);
    glVertex3f(-1.00f,getY(400), 0.0f);
    glVertex3f(-1.00f, getY(36), 0.0f);
	glEnd();
    glPopMatrix();


                                    ///Sky of Stars///
    /// if we can see star night then undo the command

    /*glPushMatrix();
    for(float i=-1.0;i<1.00;i+=0.21){
        for(float j=.60;j<1.00;j+=0.15)
            {
                glPushMatrix();
                glColor3d(str,stg,stb);
                glTranslatef (i, j, 0.0f);
                glutSolidSphere(0.002, 50, 50);
                glPopMatrix();
            }
        }
    glPopMatrix();*/

                                    /// Make Moon//

    glPushMatrix();
    glTranslatef(0.75, 0.75, 0.0);
    glColor3f(mr,mg,mb);
    glBegin(GL_POLYGON);

	for(int i=0;i<500;i++)
	{
		float pi= 3.1416;
		float A=(i*2*pi)/100;
		float g= 0.07;
		float b = g*cos(A);
		float d = g*sin(A);
		glVertex2f(b,d );
	}
	glEnd();
	glPopMatrix();

                                /// Make Cloud//
        ///Cloud 1
        glPushMatrix();
        glTranslatef(-0.8,0.87,0.0);
        glColor3f(1,1,1);
        glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= .05;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.75,0.87,0.0);
        glColor3f(1,1,1);
        glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= .05;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.78,0.835,0.0);
        glColor3f(1,1,1);
        glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= .04;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.78,0.91,0.0);
        glColor3f(1,1,1);
        glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= .04;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();


        ///Cloud 2
        glPushMatrix();
        glTranslatef(-0.50,0.85,0.0);
        glColor3f(1,1,1);
        glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= .05;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.55,0.85,0.0);
        glColor3f(1,1,1);
        glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= .05;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.525,0.82,0.0);
        glColor3f(1,1,1);
        glBegin(GL_POLYGON);
            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= .04;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.525,0.89,0.0);
        glColor3f(1,1,1);
        glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= .04;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();


                                    ///Road///
    ///2nd road
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.753, 0.753, 0.753);

    glVertex3f(1.00f,  +0.03-0.16, 0.0f);
    glVertex3f(1.00f, +.03-0.30, 0.0f);
    glVertex3f(-1.00f, +0.03-0.30f, 0.0f);
    glVertex3f(-1.00f, +0.03-0.16f, 0.0f);
	glEnd();
    ///1st road
	glBegin(GL_POLYGON);
    glColor3d(0.502, 0.502, 0.502);

    glVertex3f(1.00f, -0.04+0.09, 0.0f);
    glVertex3f(1.00f, -0.04-0.05, 0.0f);
    glVertex3f(-1.00f, -0.04-0.05f, 0.0f);
    glVertex3f(-1.00f,-0.04+0.09f, 0.0f);
	glEnd();
    glPopMatrix();


    ///road white strips
    glPushMatrix();
    glColor3d(1,1,1);

    for(float i=-1;i<3;i+=0.08)
        {
        glBegin(GL_POLYGON);
        glVertex3f(i,+0.04-0.16, 0.0f);
        glVertex3f(i,+0.04 -0.14, 0.0f);
        glVertex3f(i+0.04f, +0.04-0.14f, 0.0f);
        glVertex3f(i+0.04f,+0.04-0.16f, 0.0f);
        glEnd();
    }
    glPopMatrix();




                            ///Upper Car 1 lane 1
    glPushMatrix();
    glTranslatef(_angle1, +0.35f, 0.0f);
    glPushMatrix();
    ///Upper Car 1 body///
    glBegin(GL_POLYGON);
    glColor3d(0.804, 0.361, 0.361);

    glVertex3f(-1.00f, -0.40f, 0.0f);
    glVertex3f(-0.99f, -0.34f, 0.0f);
    glVertex3f(-0.71f, -0.34f, 0.0f);
    glVertex3f(-0.70f, -0.40f, 0.0f);
	glEnd();
	///Upper car Body///
	glBegin(GL_POLYGON);
    glColor3d(1.000, 0.647, 0.000);

    glVertex3f(-0.92f, -0.34f, 0.0f);
    glVertex3f(-0.880f, -0.29f, 0.0f);
    glVertex3f(-0.820f, -0.29f, 0.0f);
    glVertex3f(-0.78f, -0.34f, 0.0f);
	glEnd();
	///car upper lane  B Window///
	glBegin(GL_POLYGON);
    glColor3d(0.502, 0.502, 0.502);

    glVertex3f(-0.915f, -0.34f, 0.0f);
    glVertex3f(-0.875f, -0.295f, 0.0f);
    glVertex3f(-0.852f, -0.295f, 0.0f);
    glVertex3f(-0.852f, -0.34f, 0.0f);
	glEnd();
	///car Middle Line///
	glBegin(GL_POLYGON);
    glColor3d(0.502, 0.000, 0.000);

    glVertex3f(-0.851f, -0.34f, 0.0f);
    glVertex3f(-0.851f, -0.295f, 0.0f);
    glVertex3f(-0.848f, -0.295f, 0.0f);
    glVertex3f(-0.848f, -0.34f, 0.0f);
	glEnd();
	///F Window///
	glBegin(GL_POLYGON);
    glColor3d(1.000, 0.894, 0.882);
    glVertex3f(-0.785f, -0.34f, 0.0f);
    glVertex3f(-0.825f, -0.295f, 0.0f);
    glVertex3f(-0.847f, -0.295f, 0.0f);
    glVertex3f(-0.847f, -0.34f, 0.0f);
	glEnd();
	glPopMatrix();
    ///car upper lane Wheal///
    glPushMatrix();
    glColor3d(0.627, 0.322, 0.176);
    glTranslatef (-0.95, -0.40f, 0.0f);
    glutSolidSphere(0.025, 50, 50);
    glPopMatrix();
    ///F Wheal///
    glPushMatrix();
    glColor3d(0.627, 0.322, 0.176);
    glTranslatef (-0.75, -0.40f, 0.0f);
    glutSolidSphere(0.025, 50, 50);
    glPopMatrix();
    glPopMatrix();



                                ///Drowing Car///

    glPushMatrix();
    glTranslatef(_movec, +0.20f, 0.0f);
    glPushMatrix();
    ///main Body
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.271, 0.000);

    glVertex3f(-1.00f, -0.40f, 0.0f);
    glVertex3f(-0.99f, -0.34f, 0.0f);
    glVertex3f(-0.71f, -0.34f, 0.0f);
    glVertex3f(-0.70f, -0.40f, 0.0f);
	glEnd();
	///D Body
	glBegin(GL_POLYGON);
    glColor3d(0.4,0.8,0.4);
    glVertex3f(-0.92f, -0.34f, 0.0f);
    glVertex3f(-0.880f, -0.29f, 0.0f);
    glVertex3f(-0.820f, -0.29f, 0.0f);
    glVertex3f(-0.78f, -0.34f, 0.0f);
	glEnd();
	///B Win
	glBegin(GL_POLYGON);
    glColor3d(1,1,1);
    glVertex3f(-0.915f, -0.34f, 0.0f);
    glVertex3f(-0.875f, -0.295f, 0.0f);
    glVertex3f(-0.852f, -0.295f, 0.0f);
    glVertex3f(-0.852f, -0.34f, 0.0f);
	glEnd();
	///Mid Line
	glBegin(GL_POLYGON);
    glColor3d(0,0,0);
    glVertex3f(-0.851f, -0.34f, 0.0f);
    glVertex3f(-0.851f, -0.295f, 0.0f);
    glVertex3f(-0.848f, -0.295f, 0.0f);
    glVertex3f(-0.848f, -0.34f, 0.0f);
	glEnd();
	///F Win
	glBegin(GL_POLYGON);
    glColor3d(1,1,1);
    glVertex3f(-0.785f, -0.34f, 0.0f);
    glVertex3f(-0.825f, -0.295f, 0.0f);
    glVertex3f(-0.847f, -0.295f, 0.0f);
    glVertex3f(-0.847f, -0.34f, 0.0f);
	glEnd();
	glPopMatrix();
    ///B Wheal
    glPushMatrix();
    glColor3d(0.0,0,0);
    glTranslatef (-0.95, -0.40f, 0.0f);
    glutSolidSphere(0.025, 50, 50);
    glPopMatrix();
    ///F Wheal
    glPushMatrix();
    glColor3d(0.0,0,0);
    glTranslatef (-0.75, -0.40f, 0.0f);
    glutSolidSphere(0.025, 50, 50);
    glPopMatrix();
    glPopMatrix();


                                    ///Grass Field///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.0,0.8,0.1);

    glVertex3f(1.0f,  -0.55f, 0.0f);
    glVertex3f(1.0f, -0.30f, 0.0f);
    glVertex3f(-1.00f, -0.30f, 0.0f);
    glVertex3f(-1.00f, -0.55f, 0.0f);
	glEnd();
    glPopMatrix();



                                ///Right building 1///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.4f);

    glVertex3f(getX(720), getY(36), 0.0f);
    glVertex3f(getX(720), getY(300), 0.0f);
    glVertex3f(getX(600), getY(300), 0.0f);
    glVertex3f(getX(600), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    ///buildings1.1
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.0, 1.0, 0.8);

    glVertex3f(getX(740), getY(36), 0.0f);
    glVertex3f(getX(740), getY(250), 0.0f);
    glVertex3f(getX(720), getY(300), 0.0f);
    glVertex3f(getX(720), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    ///b1 gate
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.737, 0.561, 0.561);

    glVertex3f(getX(690), getY(36), 0.0f);
    glVertex3f(getX(690), getY(72), 0.0f);
    glVertex3f(getX(630), getY(72), 0.0f);
    glVertex3f(getX(630), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
     ///b1 R4 window
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.722, 0.525, 0.043);

    glVertex3f(getX(700), getY(100), 0.0f);
    glVertex3f(getX(700), getY(125), 0.0f);
    glVertex3f(getX(680), getY(125), 0.0f);
    glVertex3f(getX(680), getY(100), 0.0f);
	glEnd();
    glPopMatrix();
    ///L4win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.627, 0.322, 0.176);

    glVertex3f(getX(620), getY(100), 0.0f);
    glVertex3f(getX(620), getY(125), 0.0f);
    glVertex3f(getX(640), getY(125), 0.0f);
    glVertex3f(getX(640), getY(100), 0.0f);
	glEnd();
    glPopMatrix();
        ///L3win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(br),getG(bg),getB(bb));

    glVertex3f(getX(620), getY(155), 0.0f);
    glVertex3f(getX(620), getY(180), 0.0f);
    glVertex3f(getX(640), getY(180), 0.0f);
    glVertex3f(getX(640), getY(155), 0.0f);
	glEnd();
    glPopMatrix();
       ///R3win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.5f, 0.5f);

    glVertex3f(getX(700), getY(155), 0.0f);
    glVertex3f(getX(700), getY(180), 0.0f);
    glVertex3f(getX(680), getY(180), 0.0f);
    glVertex3f(getX(680), getY(155), 0.0f);
	glEnd();
    glPopMatrix();
     ///R2win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(br),getG(bg),getB(bb));

    glVertex3f(getX(700), getY(205), 0.0f);
    glVertex3f(getX(700), getY(230), 0.0f);
    glVertex3f(getX(680), getY(230), 0.0f);
    glVertex3f(getX(680), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
    ///L2win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(2.0f, 0.5f, 1.0f);//Bronze

    glVertex3f(getX(620), getY(205), 0.0f);
    glVertex3f(getX(620), getY(230), 0.0f);
    glVertex3f(getX(640), getY(230), 0.0f);
    glVertex3f(getX(640), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
    ///L1win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(br),getG(bg),getB(bb));

    glVertex3f(getX(620), getY(255), 0.0f);
    glVertex3f(getX(620), getY(280), 0.0f);
    glVertex3f(getX(640), getY(280), 0.0f);
    glVertex3f(getX(640), getY(255), 0.0f);
	glEnd();
    glPopMatrix();

  ///R1win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.647, 0.000);

    glVertex3f(getX(700), getY(255), 0.0f);
    glVertex3f(getX(700), getY(280), 0.0f);
    glVertex3f(getX(680), getY(280), 0.0f);
    glVertex3f(getX(680), getY(255), 0.0f);
	glEnd();
    glPopMatrix();


                                    ///building 2///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.55, 0.35, 0.0);
    glVertex3f(getX(550), getY(36), 0.0f);
    glVertex3f(getX(550), getY(300), 0.0f);
    glVertex3f(getX(400), getY(300), 0.0f);
    glVertex3f(getX(400), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    ///buildings2.1
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.40, 0.20, 0.0);

    glVertex3f(getX(565), getY(36), 0.0f);
    glVertex3f(getX(565), getY(250), 0.0f);
    glVertex3f(getX(550), getY(300), 0.0f);
    glVertex3f(getX(550), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    ///b2 gate
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(3.0f,0.6f, 2.0f);

    glVertex3f(getX(540), getY(36), 0.0f);
    glVertex3f(getX(540), getY(72), 0.0f);
    glVertex3f(getX(500), getY(72), 0.0f);
    glVertex3f(getX(500), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    /// b2 R4 win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.871, 0.722, 0.529);

    glVertex3f(getX(520), getY(90), 0.0f);
    glVertex3f(getX(520), getY(115), 0.0f);
    glVertex3f(getX(500), getY(115), 0.0f);
    glVertex3f(getX(500), getY(90), 0.0f);
	glEnd();
    glPopMatrix();
    /// b2 L4 win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.980, 0.922, 0.843);

    glVertex3f(getX(430), getY(90), 0.0f);
    glVertex3f(getX(430), getY(115), 0.0f);
    glVertex3f(getX(450), getY(115), 0.0f);
    glVertex3f(getX(450), getY(90), 0.0f);
	glEnd();
    glPopMatrix();
    /// b2 L3 win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.753, 0.753, 0.753);

    glVertex3f(getX(430), getY(145), 0.0f);
    glVertex3f(getX(430), getY(170), 0.0f);
    glVertex3f(getX(450), getY(170), 0.0f);
    glVertex3f(getX(450), getY(145), 0.0f);
	glEnd();
    glPopMatrix();
     /// b2 R3 win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(br),getG(bg),getB(bb));

    glVertex3f(getX(520), getY(145), 0.0f);
    glVertex3f(getX(520), getY(170), 0.0f);
    glVertex3f(getX(500), getY(170), 0.0f);
    glVertex3f(getX(500), getY(145), 0.0f);
	glEnd();
    glPopMatrix();
    /// b2 R2 win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.0,1.0,0.4);

    glVertex3f(getX(520), getY(200), 0.0f);
    glVertex3f(getX(520), getY(225), 0.0f);
    glVertex3f(getX(500), getY(225), 0.0f);
    glVertex3f(getX(500), getY(200), 0.0f);
	glEnd();
    glPopMatrix();
    /// b2 L2 win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.824, 0.706, 0.549);

    glVertex3f(getX(430), getY(200), 0.0f);
    glVertex3f(getX(430), getY(225), 0.0f);
    glVertex3f(getX(450), getY(225), 0.0f);
    glVertex3f(getX(450), getY(200), 0.0f);
	glEnd();
    glPopMatrix();
    /// b2 L1 win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.678, 0.847, 0.902);

    glVertex3f(getX(430), getY(250), 0.0f);
    glVertex3f(getX(430), getY(275), 0.0f);
    glVertex3f(getX(450), getY(275), 0.0f);
    glVertex3f(getX(450), getY(250), 0.0f);
	glEnd();
    glPopMatrix();
    /// b2 R1 win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.894, 0.882);

    glVertex3f(getX(520), getY(250), 0.0f);
    glVertex3f(getX(520), getY(275), 0.0f);
    glVertex3f(getX(500), getY(275), 0.0f);
    glVertex3f(getX(500), getY(250), 0.0f);
	glEnd();
    glPopMatrix();



    ///grass 1
    glPushMatrix();
    glBegin(GL_POLYGON);
	glColor3f(0.000, 1.000, 0.498);
    glVertex3f(getX(-740+20),getY(-200),0.0f);
    glVertex3f(getX(-750+20),getY(-170+10),0.0f);
    glVertex3f(getX(-736+20),getY(-185+10),0.0f);
    glVertex3f(getX(-725+20),getY(-150+10),0.0f);
    glVertex3f(getX(-710+20),getY(-185+10),0.0f);
    glVertex3f(getX(-695+20),getY(-175+10),0.0f);
    glVertex3f(getX(-710+20),getY(-200),0.0f);

	glEnd();
    glPopMatrix();

                        ///buildings 3 left ///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.871, 0.722, 0.529);

    glVertex3f(getX(-720), getY(36), 0.0f);
    glVertex3f(getX(-720), getY(300), 0.0f);
    glVertex3f(getX(-600), getY(300), 0.0f);
    glVertex3f(getX(-600), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
///shadow building 3
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.294, 0.000, 0.510);

    glVertex3f(getX(-420), getY(36), 0.0f);
    glVertex3f(getX(-420), getY(250), 0.0f);
    glVertex3f(getX(-300), getY(250), 0.0f);
    glVertex3f(getX(-300), getY(36), 0.0f);
	glEnd();
    glPopMatrix();

    ///building 3.1
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.25, 0.15, 0.15);

    glVertex3f(getX(-585), getY(36), 0.0f);
    glVertex3f(getX(-585), getY(250), 0.0f);
    glVertex3f(getX(-600), getY(300), 0.0f);
    glVertex3f(getX(-600), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    ///b3 gate
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.957, 0.643, 0.376);

    glVertex3f(getX(-690), getY(36), 0.0f);
    glVertex3f(getX(-690), getY(72), 0.0f);
    glVertex3f(getX(-630), getY(72), 0.0f);
    glVertex3f(getX(-630), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    ///Left b3 l4 win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.980, 0.980);

    glVertex3f(getX(-700), getY(100), 0.0f);
    glVertex3f(getX(-700), getY(125), 0.0f);
    glVertex3f(getX(-680), getY(125), 0.0f);
    glVertex3f(getX(-680), getY(100), 0.0f);
	glEnd();
    glPopMatrix();
    /// Left b3 R4 win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.722, 0.525, 0.043);

    glVertex3f(getX(-620), getY(100), 0.0f);
    glVertex3f(getX(-620), getY(125), 0.0f);
    glVertex3f(getX(-640), getY(125), 0.0f);
    glVertex3f(getX(-640), getY(100), 0.0f);
	glEnd();
    glPopMatrix();
    /// Left b3 R3 win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.647, 0.000);

    glVertex3f(getX(-620), getY(155), 0.0f);
    glVertex3f(getX(-620), getY(180), 0.0f);
    glVertex3f(getX(-640), getY(180), 0.0f);
    glVertex3f(getX(-640), getY(155), 0.0f);
	glEnd();
    glPopMatrix();
    /// Left b3 L3 win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.275, 0.510, 0.706);

    glVertex3f(getX(-700), getY(155), 0.0f);
    glVertex3f(getX(-700), getY(180), 0.0f);
    glVertex3f(getX(-680), getY(180), 0.0f);
    glVertex3f(getX(-680), getY(155), 0.0f);
	glEnd();
    glPopMatrix();
    ///Left b3 L2 win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(br),getG(bg),getB(bb));

    glVertex3f(getX(-700), getY(205), 0.0f);
    glVertex3f(getX(-700), getY(230), 0.0f);
    glVertex3f(getX(-680), getY(230), 0.0f);
    glVertex3f(getX(-680), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
    /// Left b3 R2 win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.722, 0.525, 0.043);

    glVertex3f(getX(-620), getY(205), 0.0f);
    glVertex3f(getX(-620), getY(230), 0.0f);
    glVertex3f(getX(-640), getY(230), 0.0f);
    glVertex3f(getX(-640), getY(205), 0.0f);
	glEnd();
    glPopMatrix();
    /// Left b3 R1 win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.941, 1.000, 0.941);

    glVertex3f(getX(-620), getY(255), 0.0f);
    glVertex3f(getX(-620), getY(280), 0.0f);
    glVertex3f(getX(-640), getY(280), 0.0f);
    glVertex3f(getX(-640), getY(255), 0.0f);
	glEnd();
    glPopMatrix();
    ///Left b3 L1 win
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(br),getG(bg),getB(bb));

    glVertex3f(getX(-700), getY(255), 0.0f);
    glVertex3f(getX(-700), getY(280), 0.0f);
    glVertex3f(getX(-680), getY(280), 0.0f);
    glVertex3f(getX(-680), getY(255), 0.0f);
	glEnd();
    glPopMatrix();



                                ///building front size 4
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.18, 0.38, 0.28);

    glVertex3f(getX(-550), getY(36), 0.0f);
    glVertex3f(getX(-550), getY(300), 0.0f);
    glVertex3f(getX(-400), getY(300), 0.0f);
    glVertex3f(getX(-400), getY(36), 0.0f);
	glEnd();
    glPopMatrix();

    ///buildings4.1
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.1, 0.30, 0.219);

    glVertex3f(getX(-385), getY(36), 0.0f);
    glVertex3f(getX(-385), getY(250), 0.0f);
    glVertex3f(getX(-400), getY(300), 0.0f);
    glVertex3f(getX(-400), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    ///b4 door
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.690, 0.769, 0.871);
    glVertex3f(getX(-540), getY(36), 0.0f);
    glVertex3f(getX(-540), getY(72), 0.0f);
    glVertex3f(getX(-500), getY(72), 0.0f);
    glVertex3f(getX(-500), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
    /// 4th house R win4
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.722, 0.525, 0.043);

    glVertex3f(getX(-520), getY(90), 0.0f);
    glVertex3f(getX(-520), getY(115), 0.0f);
    glVertex3f(getX(-500), getY(115), 0.0f);
    glVertex3f(getX(-500), getY(90), 0.0f);
	glEnd();
    glPopMatrix();
    /// 4th house L win4
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.957, 0.643, 0.376);

    glVertex3f(getX(-430), getY(90), 0.0f);
    glVertex3f(getX(-430), getY(115), 0.0f);
    glVertex3f(getX(-450), getY(115), 0.0f);
    glVertex3f(getX(-450), getY(90), 0.0f);
	glEnd();
    glPopMatrix();
    /// 4th house R win3
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.843, 0.000);

    glVertex3f(getX(-430), getY(145), 0.0f);
    glVertex3f(getX(-430), getY(170), 0.0f);
    glVertex3f(getX(-450), getY(170), 0.0f);
    glVertex3f(getX(-450), getY(145), 0.0f);
	glEnd();
    glPopMatrix();
    /// 4th house L win3
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.843, 0.000);

    glVertex3f(getX(-520), getY(145), 0.0f);
    glVertex3f(getX(-520), getY(170), 0.0f);
    glVertex3f(getX(-500), getY(170), 0.0f);
    glVertex3f(getX(-500), getY(145), 0.0f);
	glEnd();
    glPopMatrix();

    /// 4th house L win2
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.922, 0.804);

    glVertex3f(getX(-520), getY(200), 0.0f);
    glVertex3f(getX(-520), getY(225), 0.0f);
    glVertex3f(getX(-500), getY(225), 0.0f);
    glVertex3f(getX(-500), getY(200), 0.0f);
	glEnd();
    glPopMatrix();
    /// 4th house R win2
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.922, 0.804);

    glVertex3f(getX(-430), getY(200), 0.0f);
    glVertex3f(getX(-430), getY(225), 0.0f);
    glVertex3f(getX(-450), getY(225), 0.0f);
    glVertex3f(getX(-450), getY(200), 0.0f);
	glEnd();
    glPopMatrix();
    /// 4th house R win1
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.690, 0.769, 0.871);
    glVertex3f(getX(-430), getY(250), 0.0f);
    glVertex3f(getX(-430), getY(275), 0.0f);
    glVertex3f(getX(-450), getY(275), 0.0f);
    glVertex3f(getX(-450), getY(250), 0.0f);
	glEnd();
    glPopMatrix();
    /// 4th house L win1
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.678, 0.847, 0.902);
    glVertex3f(getX(-520), getY(250), 0.0f);
    glVertex3f(getX(-520), getY(275), 0.0f);
    glVertex3f(getX(-500), getY(275), 0.0f);
    glVertex3f(getX(-500), getY(250), 0.0f);
	glEnd();
    glPopMatrix();


                                    ///Flag
    /// Flag pillar
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1,1,1);

    glVertex3f(getX(250), getY(160), 0.0f);
    glVertex3f(getX(250), getY(100), 0.0f);
    glVertex3f(getX(245), getY(100), 0.0f);
    glVertex3f(getX(245), getY(160), 0.0f);
	glEnd();
    glPopMatrix();
    /// flag green
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0,1,0);

    glVertex3f(getX(280), getY(135), 0.0f);
    glVertex3f(getX(280), getY(155), 0.0f);
    glVertex3f(getX(250), getY(155), 0.0f);
    glVertex3f(getX(250), getY(135), 0.0f);
	glEnd();
    glPopMatrix();
    /// flag red
    glPushMatrix();
    glColor3d(1,0,0);
    glTranslatef (.35, .36, 0.0f);
    glutSolidSphere(0.01, 50, 50);
    glPopMatrix();


                                ///School building///
    /// School building wall
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.980, 0.502, 0.447);

    glVertex3f(getX(250), getY(36), 0.0f);
    glVertex3f(getX(250), getY(133), 0.0f);
    glVertex3f(getX(50), getY(133), 0.0f);
    glVertex3f(getX(50), getY(36), 0.0f);
	glEnd();
    glPopMatrix();

    /// School building behind wall attach
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.804, 0.361, 0.361);

    glVertex3f(getX(265), getY(36), 0.0f);
    glVertex3f(getX(265), getY(118), 0.0f);
    glVertex3f(getX(250), getY(130), 0.0f);
    glVertex3f(getX(250), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
     /// School building  win1
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.855, 0.439, 0.839);

    glVertex3f(getX(230), getY(70), 0.0f);
    glVertex3f(getX(230), getY(90), 0.0f);
    glVertex3f(getX(200), getY(90), 0.0f);
    glVertex3f(getX(200), getY(70), 0.0f);
	glEnd();
    glPopMatrix();
    /// School building  win2
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.580, 0.000, 0.827);

    glVertex3f(getX(180), getY(70), 0.0f);
    glVertex3f(getX(180), getY(90), 0.0f);
    glVertex3f(getX(150), getY(90), 0.0f);
    glVertex3f(getX(150), getY(70), 0.0f);
	glEnd();
    glPopMatrix();
     /// School building  win3
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.502, 0.000, 0.502);

    glVertex3f(getX(130), getY(70), 0.0f);
    glVertex3f(getX(130), getY(90), 0.0f);
    glVertex3f(getX(100), getY(90), 0.0f);
    glVertex3f(getX(100), getY(70), 0.0f);
	glEnd();
    glPopMatrix();
     /// School building  window 4
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.416, 0.353, 0.804);

    glVertex3f(getX(80), getY(70), 0.0f);
    glVertex3f(getX(80), getY(90), 0.0f);
    glVertex3f(getX(55), getY(90), 0.0f);
    glVertex3f(getX(55), getY(70), 0.0f);
	glEnd();
    glPopMatrix();
     /// School building  window 2.1
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.416, 0.353, 0.804);

    glVertex3f(getX(230), getY(100), 0.0f);
    glVertex3f(getX(230), getY(120), 0.0f);
    glVertex3f(getX(200), getY(120), 0.0f);
    glVertex3f(getX(200), getY(100), 0.0f);
	glEnd();
    glPopMatrix();
    /// field building  window 2.2
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.502, 0.000, 0.502);

    glVertex3f(getX(180), getY(100), 0.0f);
    glVertex3f(getX(180), getY(120), 0.0f);
    glVertex3f(getX(150), getY(120), 0.0f);
    glVertex3f(getX(150), getY(100), 0.0f);
	glEnd();
    glPopMatrix();
     /// School building  window 2.3
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.580, 0.000, 0.827);

    glVertex3f(getX(130), getY(100), 0.0f);
    glVertex3f(getX(130), getY(120), 0.0f);
    glVertex3f(getX(100), getY(120), 0.0f);
    glVertex3f(getX(100), getY(100), 0.0f);
	glEnd();
    glPopMatrix();
    /// School building  window 2.4
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.855, 0.439, 0.839);

    glVertex3f(getX(80), getY(100), 0.0f);
    glVertex3f(getX(80), getY(120), 0.0f);
    glVertex3f(getX(55), getY(120), 0.0f);
    glVertex3f(getX(55), getY(100), 0.0f);
	glEnd();
    glPopMatrix();


                            ///traffic light Pillar//
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.741, 0.718, 0.420);

    glVertex3f(getX(-100), getY(35), 0.0f);
    glVertex3f(getX(-100), getY(-36), 0.0f);
    glVertex3f(getX(-70), getY(-36), 0.0f);
    glVertex3f(getX(-70), getY(35), 0.0f);
	glEnd();
    glPopMatrix();

    /// traffic green light
    glPushMatrix();
    glTranslatef(-.11,-0.02,0.0);
    glColor3f(tr,tg,tb);
    glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.015;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y);
            }
            glEnd();
            glPopMatrix();

    /// traffic red light
       glPushMatrix();
       glTranslatef(-.11,0.05,0.0);
         //glColor3d(1,0,0);
       glColor3f(1.0,0.0,0.0);
       glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= .015;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y);
            }
            glEnd();
            glPopMatrix();



                                /// Mosque side pillar///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(130),getG(150),getB(137));

    glVertex3f(getX(-50), getY(200), 0.0f);
    glVertex3f(getX(-50), getY(36), 0.0f);
    glVertex3f(getX(-30), getY(36), 0.0f);
    glVertex3f(getX(-30), getY(200), 0.0f);
	glEnd();
    glPopMatrix();

    /// Mosque side pillar instrument
        glPushMatrix();
        glTranslatef(-0.03,-0.08,0.0);
        glPushMatrix();
        glTranslatef(-.007,0.53,0.0);
        glColor3d(1.000, 1.000, 0.878);
        glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi = 3.1416;
                float A =(i*2*pi)/50;
                float r = 0.009;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
            glEnd();
            glPopMatrix();
/// Mosque side pillar instrument 2nd
        glPushMatrix();
        glTranslatef(-.009,0.50,0.0);
        glColor3d(1.000, 1.000, 0.878);
        glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi = 3.1416;
                float A =(i*2*pi)/50;
                float r = 0.007;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
            glEnd();
            glPopMatrix();
/// Mosque side pillar instrument 3rd
         glPushMatrix();
         glTranslatef(-.01,0.47,0.0);
         glColor3d(1.000, 1.000, 0.878);
         glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi = 3.1416;
                float A =(i*2*pi)/50;
                float r = 0.009;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
            glEnd();
            glPopMatrix();

/// Mosque jate road a chole na ashe or line er bditor thake
glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3d(getR(br11),getG(bg11),getB(bb11));
    glVertex3f(getX(-10), getY(200), 0.0f);
    glVertex3f(getX(20), getY(230), 0.0f);
    glVertex3f(getX(20), getY(180), 0.0f);
	glEnd();
    glPopMatrix();
    glPopMatrix();


                                    ///Tree///

     /// middle
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.3843,0.305,0.1725);

    glVertex3f(getX(-30), getY(-210), 0.0f);
    glVertex3f(getX(-25), getY(-100), 0.0f);
    glVertex3f(getX(-15), getY(-100), 0.0f);
    glVertex3f(getX(-10), getY(-200), 0.0f);
	glEnd();
    glPopMatrix();
    ///tree up
       glPushMatrix();
       glTranslatef(0.02,-0.25,1.0);
       glColor3f(0,0.8,0.1);
       glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi = 3.1416;
                float A =(i*2*pi)/50;
                float r = 0.05;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.023,-0.195,0.0);
        glColor3f(0,0.8,0.1);
        glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi = 3.1416;
                float A =(i*2*pi)/50;
                float r = 0.04;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-.065,-0.25,0.0);
        glColor3f(0,0.8,0.1);
        glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.04;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

                                        ///tree3//
    ///middle left 1
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(.3843,.305,.1725);

    glVertex3f(getX(-35-340), getY(-180), 0.0f);
    glVertex3f(getX(-30-335), getY(-100), 0.0f);
    glVertex3f(getX(-10-345), getY(-100), 0.0f);
    glVertex3f(getX(-10-340), getY(-180), 0.0f);
	glEnd();
    glPopMatrix();
    ///tree up
    glPushMatrix();
    glTranslatef(-0.45,-0.25,0.1);
    glColor3f(0,0.8,0.1);
    glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= 0.04;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.48,-0.195,0.0);
        glColor3f(0,0.8,0.1);
        glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= 0.04;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-.51,-0.25,0.0);
        glColor3f(0,0.8,0.1);
        glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= 0.04;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
            glEnd();
            glPopMatrix();

                                        ///tree4///

    ///middle left side 2
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(.3843,.305,.1725);

    glVertex3f(getX(-30-530), getY(-200), 0.0f);
    glVertex3f(getX(-29-529), getY(-100), 0.0f);
    glVertex3f(getX(-12-532), getY(-100), 0.0f);
    glVertex3f(getX(-10-530), getY(-200), 0.0f);
	glEnd();
    glPopMatrix();
    ///tree up
    glPushMatrix();
    glTranslatef(-0.7,-0.25,0.0);
    glColor3f(0,0.8,0.1);
    glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= 0.04;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-0.73,-0.195,0.0);
        glColor3f(0,0.8,0.1);
        glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= 0.04;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(-.77,-0.25,0.40);
        glColor3f(0,0.8,0.1);
        glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= 0.04;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

                                     ///tree5///
    ///middle right side 1
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(.3843,.305,.1725);

    glVertex3f(getX(370), getY(-180), 0.0f);
    glVertex3f(getX(365), getY(-100), 0.0f);
    glVertex3f(getX(355), getY(-100), 0.0f);
    glVertex3f(getX(350), getY(-180), 0.0f);
	glEnd();
    glPopMatrix();
    ///tree up
    glPushMatrix();
    glTranslatef(.45,-0.25,0.0);
    glColor3f(0,0.8,0.1);
    glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= 0.04;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.48,-0.195,0.0);
        glColor3f(0,0.8,0.1);
        glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= 0.04;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(.51,-0.25,0.0);
        glColor3f(0,0.8,0.1);
        glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= 0.04;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();


                                        ///Tree 6///
  ///Middle right side 2 number
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(.3843,.305,.1725);

    glVertex3f(getX(560), getY(-200), 0.0f);
    glVertex3f(getX(555), getY(-100), 0.0f);
    glVertex3f(getX(545), getY(-110), 0.0f);
    glVertex3f(getX(540), getY(-200), 0.0f);
	glEnd();
    glPopMatrix();
    ///tree up

    glPushMatrix();
    glTranslatef(0.7,-0.25,0.0);
    glColor3f(0,0.8,0.1);
    glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= 0.04;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(0.73,-0.195,0.0);
        glColor3f(0,0.8,0.1);
        glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= 0.04;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(.77,-0.25,0.0);
        glColor3f(0,0.8,0.1);
        glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= 0.04;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();


                                        /// Mosque///

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.824, 0.706, 0.549);

    glVertex3f(getX(-350), getY(36), 0.0f);
    glVertex3f(getX(-350), getY(150), 0.0f);
    glVertex3f(getX(-100), getY(150), 0.0f);
    glVertex3f(getX(-100), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
///mosque behind wall
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.737, 0.561, 0.561);

    glVertex3f(getX(-100), getY(36), 0.0f);
    glVertex3f(getX(-100), getY(150), 0.0f);
    glVertex3f(getX(-80), getY(120), 0.0f);
    glVertex3f(getX(-80), getY(36), 0.0f);
	glEnd();
    glPopMatrix();
///mosque door
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1,1,1);

    glVertex3f(getX(-320-10), getY(38), 0.0f);
    glVertex3f(getX(-320-10), getY(85), 0.0f);
    glVertex3f(getX(-280-10), getY(85), 0.0f);
    glVertex3f(getX(-280-10), getY(38), 0.0f);
	glEnd();
    glPopMatrix();
    ///mosque door2
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1,1,1);

    glVertex3f(getX(-320+70), getY(38), 0.0f);
    glVertex3f(getX(-320+70), getY(85), 0.0f);
    glVertex3f(getX(-280+70), getY(85), 0.0f);
    glVertex3f(getX(-280+70), getY(38), 0.0f);
	glEnd();
    glPopMatrix();
    ///line
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(getR(205),getG(133),getB(63));

    glVertex3f(getX(-228), getY(38), 0.0f);
    glVertex3f(getX(-228), getY(85), 0.0f);
    glVertex3f(getX(-232), getY(85), 0.0f);
    glVertex3f(getX(-232), getY(38), 0.0f);
	glEnd();
    glPopMatrix();
/// mosque main door of curve line
    glPushMatrix();
    glTranslatef(-.305,0.23,0.0);
    glColor3d(0.824, 0.706, 0.549);
    glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= 0.03;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();
///mos door3
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1,1,1);

    glVertex3f(getX(-320+150), getY(38), 0.0f);
    glVertex3f(getX(-320+150), getY(85), 0.0f);
    glVertex3f(getX(-280+150), getY(85), 0.0f);
    glVertex3f(getX(-280+150), getY(38), 0.0f);
	glEnd();
    glPopMatrix();
///mosque 3 number line
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.000, 1.000);

    glVertex3f(getX(-350), getY(105), 0.0f);
    glVertex3f(getX(-350), getY(108), 0.0f);
    glVertex3f(getX(-100), getY(108), 0.0f);
    glVertex3f(getX(-100), getY(105), 0.0f);
	glEnd();
	glPopMatrix();
///mosque 2 number line
	glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.541, 0.169, 0.886);

    glVertex3f(getX(-350), getY(105+10), 0.0f);
    glVertex3f(getX(-350), getY(109+10), 0.0f);
    glVertex3f(getX(-100), getY(109+10), 0.0f);
    glVertex3f(getX(-100), getY(105+10), 0.0f);
	glEnd();
    glPopMatrix();
/// mosque 1 number line
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.000, 1.000);

    glVertex3f(getX(-350), getY(105+10+10), 0.0f);
    glVertex3f(getX(-350), getY(108+10+10), 0.0f);
    glVertex3f(getX(-100), getY(108+10+10), 0.0f);
    glVertex3f(getX(-100), getY(105+10+10), 0.0f);
	glEnd();
    glPopMatrix();
    ///dome
    glPushMatrix();
    glTranslatef(-.305,0.37,0.0);
    glColor3d(0.824, 0.706, 0.549);
    glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= 0.03;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
            glEnd();
            glPopMatrix();
    ///mosque upper 2nd gomboje
    glPushMatrix();
    glTranslatef(-.20,0.37,0.0);
    glColor3d(0.824, 0.706, 0.549);
    glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.03;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();
    /// Mosque 1st gomboje
    glPushMatrix();
    glTranslatef(-.40,0.37,0.0);
    glColor3d(0.824, 0.706, 0.549);
    glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi=3.1416;
                float A=(i*2*pi)/50;
                float r=.03;
                float x = r * cos(A);
                float y = r * sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();
    /// Main Gomboje or main pillar
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.894, 0.710);

    glVertex3f(getX(-245), getY(155), 0.0f);
    glVertex3f(getX(-245), getY(180), 0.0f);
    glVertex3f(getX(-215), getY(180), 0.0f);
    glVertex3f(getX(-215), getY(155), 0.0f);
	glEnd();
    glPopMatrix();
    /// dome
    glPushMatrix();
    glTranslatef(-.308,0.45,0.0);
    glColor3d(0.824, 0.706, 0.549);
    glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= 0.025;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();
/// main pillar part 2
    glPushMatrix();
    glBegin(GL_POLYGON);

    glColor3d(1.000, 0.894, 0.710);

    glVertex3f(getX(-243), getY(185), 0.0f);
    glVertex3f(getX(-243), getY(215), 0.0f);
    glVertex3f(getX(-218), getY(215), 0.0f);
    glVertex3f(getX(-218), getY(185), 0.0f);
	glEnd();
    glPopMatrix();
    ///dome
    glPushMatrix();
    glTranslatef(-.308,0.53,0.0);
    glColor3d(0.824, 0.706, 0.549);
    glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= 0.023;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();
    /// mosque main pillar part 3
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.894, 0.710);

    glVertex3f(getX(-240), getY(215), 0.0f);
    glVertex3f(getX(-240), getY(245), 0.0f);
    glVertex3f(getX(-220), getY(245), 0.0f);
    glVertex3f(getX(-220), getY(215), 0.0f);
	glEnd();
    glPopMatrix();
    ///dome
    glPushMatrix();
    glTranslatef(-.3065,0.60,0.0);
    glColor3d(0.824, 0.706, 0.549);
    glBegin(GL_POLYGON);

            for(int i=0;i<60;i++)
            {
                float pi= 3.1416;
                float A=(i*2*pi)/50;
                float r= 0.0205;
                float x = r*cos(A);
                float y = r*sin(A);
                glVertex2f(x,y);
            }
        glEnd();
        glPopMatrix();
    /// mosque pillar
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(1.000, 0.894, 0.710);

    glVertex3f(getX(-238), getY(245), 0.0f);
    glVertex3f(getX(-238), getY(275), 0.0f);
    glVertex3f(getX(-223), getY(275), 0.0f);
    glVertex3f(getX(-223), getY(245), 0.0f);
	glEnd();
    glPopMatrix();
    /// mosque last pillar
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.824, 0.706, 0.549);

    glVertex3f(getX(-235), getY(275), 0.0f);
    glVertex3f(getX(-235), getY(285), 0.0f);
    glVertex3f(getX(-228), getY(285), 0.0f);
    glVertex3f(getX(-228), getY(275), 0.0f);
	glEnd();
    glPopMatrix();




                                    ///grass 3///
    glPushMatrix();
    glBegin(GL_POLYGON);
	glColor3f(0,90.8,0.1);

    glVertex3f(getX(740-20),getY(-200),0.0f);
    glVertex3f(getX(750-20),getY(-170+10),0.0f);
    glVertex3f(getX(736-20),getY(-185+10),0.0f);
    glVertex3f(getX(725-20),getY(-150+10),0.0f);
    glVertex3f(getX(710-20),getY(-185+10),0.0f);
    glVertex3f(getX(695-20),getY(-175+10),0.0f);
    glVertex3f(getX(710-20),getY(-200),0.0f);

	glEnd();
    glPopMatrix();

    ///grass 2///
    glPushMatrix();
    glBegin(GL_POLYGON);
	glColor3f(0,90.8,0.1);
    glVertex3f(getX(740-20-50),getY(-200),0.0f);
    glVertex3f(getX(750-20-50),getY(-170+10),0.0f);
    glVertex3f(getX(736-20-50),getY(-185+10),0.0f);
    glVertex3f(getX(725-20-50),getY(-150+10),0.0f);
    glVertex3f(getX(710-20-50),getY(-185+10),0.0f);
    glVertex3f(getX(695-20-50),getY(-175+10),0.0f);
    glVertex3f(getX(710-20-50),getY(-200),0.0f);

	glEnd();
    glPopMatrix();

    ///grass 1///
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,90.8,0.1);

    glVertex3f(getX(-740+70),getY(-200),0.0f);
    glVertex3f(getX(-750+70),getY(-170+10),0.0f);
    glVertex3f(getX(-736+70),getY(-185+10),0.0f);
    glVertex3f(getX(-725+70),getY(-150+10),0.0f);
    glVertex3f(getX(-710+70),getY(-185+10),0.0f);
    glVertex3f(getX(-695+70),getY(-175+10),0.0f);
    glVertex3f(getX(-710+70),getY(-200),0.0f);

	glEnd();
    glPopMatrix();



                                        ///River///

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3d(0.000, 0.000, 1.000);

    glVertex3f(1.00f,  -0.58, 0.0f);
    glVertex3f(1.00f, -1.0f, 0.0f);
    glVertex3f(-1.00f, -1.00f, 0.0f);
    glVertex3f(-1.00f, -0.58f, 0.0f);
	glEnd();
    glPopMatrix();



                                        ///Boat///

    glPushMatrix();
     glTranslatef(_move3, -0.1f, -0.1f);
     ///boat base
     glBegin(GL_POLYGON);
     glColor3f(0.1f, 0.1f, 0.1f);
     glVertex3f(-0.833f, -0.70f, 0.0);
     glVertex3f(-0.33f, -0.70f, 0.0);
     glVertex3f(-0.25f, -0.590f, 0.0);
     glVertex3f(-0.916f, -0.590f, 0.0);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.000, 0.749, 1.000);

     glVertex3f(-0.820f, -0.600f, 0.0);
     glVertex3f(-0.40f, -0.600f, 0.0);
     glVertex3f(-0.465f, -0.5f, 0.0);
     glVertex3f(-0.82f, -0.5f, 0.0);
     glEnd();


     ///Boat windows
     glBegin(GL_POLYGON);
     glColor3f(0.000, 0.392, 0.000);

     glVertex3f(-0.75f,-0.566f,0.0f);
     glVertex3f(-0.7f,-0.566f,0.0f);
     glVertex3f(-0.7,-0.516f,0.0f);
     glVertex3f(-0.75f,-0.516f,0.0f);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.5f, 1.0f, 1.0f);

     glVertex3f(-0.633f,-0.566f,0.0f);
     glVertex3f(-0.583f,-0.566f,0.0f);
     glVertex3f(-0.583,-0.516f,0.0f);
     glVertex3f(-0.633f,-0.516f,0.0f);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3f(0.000, 0.392, 0.000);

     glVertex3f(-0.516f,-0.566f,0.0f);
     glVertex3f(-0.46f,-0.566f,0.0f);
     glVertex3f(-0.46f,-0.516f,0.0f);
     glVertex3f(-0.516f,-0.516f,0.0f);
     glEnd();

     glPopMatrix();
     glutSwapBuffers();
}

void display(int id){

	switch (id)
	{
	case 1:
		break;
	case 2: glutIdleFunc(drawDisplay);
		break;
    case 3: exit(0);
	}
}

void Keypress(unsigned char keys,int x,int y) {

    switch(keys){
        case 27:
            exit(0);
        default:
            break;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE );
	glutInitWindowSize(1500,1000);
	glutCreateWindow("182-15-2225 Beautiful Town ");
	glutDisplayFunc(drawDisplay);
	glutMainLoop();

	return 0;
}
