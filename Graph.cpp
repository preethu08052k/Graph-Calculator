#include<iostream>
#include<cstdio>
#include<graphics.h>
#include<cmath>
#include<cstring>
#define WIDTH 800
#define HEIGHT 700
using namespace std;
void axes()
{
	line(0,HEIGHT/2,WIDTH,HEIGHT/2);
	line(WIDTH/2,0,WIDTH/2,HEIGHT);
	outtextxy(WIDTH-25,HEIGHT/2+15,"X");
	outtextxy(WIDTH/2-25,10,"Y");
}
void point(int xd,int yd)
{
	while(!kbhit())
	{
		char xs[10],ys[5];
		int x=(mousex()-400)/xd;
		sprintf(xs,"(%d,",x);
		int y=(350-mousey())/yd;
		sprintf(ys,"%d)",y);
		strcat(xs,ys);
		setcolor(15);
		outtextxy(700,600,xs);
	}
} 
int choosecolor()
{
	char ch;
	int choice;
	cout<<"Default graph colour is WHITE. Do you want to change? Y/N : "; cin>>ch;
	if(ch=='y'||ch=='Y')
	{
		cout<<"1.BLACK\n2.BLUE\n3.GREEN\n4.CYAN\n5.RED\n6.MAGENTA\n7.BROWN\n8.LIGHTGRAY\n9.DARKGRAY\n10.LIGHTBLUE\n11.LIGHTGREEN\n12.LIGHTCYAN\n13.LIGHTRED\n14.LIGHTMAGENTA\n15.YELLOW\n16.WHITE\nChoose a colour: ";
		cin>>choice;
		return choice-1;
	}
	else return 15;
}
void sine(int color)
{
	initwindow(800,700);
	axes();
	delay(500);
	int x,y;
	moveto(WIDTH/2,HEIGHT/2);
	for(int i=-360;i<=360;i++)
	{
		x=WIDTH/2+i;
		y=HEIGHT/2-sin(i*3.14/180.0)*75;
		putpixel(x,y,color);
	}
	point(1,75);
	closegraph();
}
void asine(int color)
{
	initwindow(800,700);
	axes();
	delay(500);
	int x,y;
	moveto(WIDTH/2,HEIGHT/2);
	for(int i=-360;i<=360;i++)
	{
		x=WIDTH/2+i;
		y=HEIGHT/2-asin(i*3.14/180.0)*75;
		putpixel(x,y,color);
	}
	point(1,75);
	closegraph();
}
void sineh(int color)
{
	initwindow(800,700);
	axes();
	delay(500);
	int x,y;
	moveto(0,HEIGHT);
	setcolor(color);
	for(int i=-360;i<=360;i++)
	{
		x=WIDTH/2+i;
		y=HEIGHT/2-sinh(i*3.14/180.0)*75;
		lineto(x,y);
	}
	point(1,75);
	closegraph();
}
void asineh(int color)
{
	initwindow(800,700);
	axes();
	delay(500);
	int x,y;
	moveto(WIDTH/2,HEIGHT/2);
	for(int i=-360;i<=360;i++)
	{
		x=WIDTH/2+i;
		y=HEIGHT/2-asinh(i*3.14/180.0)*75;
		putpixel(x,y,color);
	}
	point(1,75);
	closegraph();
}
void cosine(int color)
{
	initwindow(800,700);
	axes();
	delay(500);
	int x,y;
	moveto(WIDTH/2,HEIGHT/2);
	for(int i=-360;i<=360;i++)
	{
		x=WIDTH/2+i;
		y=HEIGHT/2-cos(i*3.14/180.0)*75;
		putpixel(x,y,color);
	}
	point(1,75);
	closegraph();
}
void acosine(int color)
{
	initwindow(800,700);
	axes();
	delay(500);
	int x,y;
	moveto(WIDTH/2,HEIGHT/2);
	for(int i=-360;i<=360;i++)
	{
		x=WIDTH/2+i;
		y=HEIGHT/2-acos(i*3.14/180.0)*75;
		putpixel(x,y,color);
	}
	point(1,75);
	closegraph();
}
void cosineh(int color)
{
	initwindow(800,700);
	axes();
	delay(500);
	int x,y;
	moveto(0,HEIGHT);
	setcolor(color);
	for(int i=-360;i<=360;i++)
	{
		x=WIDTH/2+i;
		y=HEIGHT/2-cosh(i*3.14/180.0)*75;
		lineto(x,y);
	}
	point(1,75);
	closegraph();
}
void acosineh(int color)
{
	initwindow(800,700);
	axes();
	delay(500);
	int x,y;
	moveto(WIDTH/2,HEIGHT/2);
	for(int i=-360;i<=360;i++)
	{
		x=WIDTH/2+i;
		y=HEIGHT/2-acosh(i*3.14/180.0)*75;
		putpixel(x,y,color);
	}
	point(1,75);
	closegraph();
}
void tangent(int color)
{
	initwindow(800,700);
	axes();
	delay(500);
	int x,y;
	moveto(WIDTH/2,HEIGHT/2);
	setcolor(color);
	for(int i=-360;i<=360;i++)
	{
		if(i==-270) moveto(130,HEIGHT);
		if(i==-90) moveto(310,HEIGHT);
		if(i==91) moveto(490,HEIGHT);
		if(i==271) moveto(670,HEIGHT);
		x=WIDTH/2+i;
		y=HEIGHT/2-tan(i*3.14/180.0)*75;
		lineto(x,y);
	}
	point(1,75);
	closegraph();
}
void atangent(int color)
{
	initwindow(800,700);
	axes();
	delay(500);
	int x,y;
	moveto(WIDTH/2,HEIGHT/2);
	for(int i=-360;i<=360;i++)
	{
		x=WIDTH/2+i;
		y=HEIGHT/2-atan(i*3.14/180.0)*75;
		putpixel(x,y,color);
	}
	point(1,75);
	closegraph();
}
void tangenth(int color)
{
	initwindow(800,700);
	axes();
	delay(500);
	int x,y;
	moveto(WIDTH/2,HEIGHT/2);
	for(int i=-360;i<=360;i++)
	{
		x=WIDTH/2+i;
		y=HEIGHT/2-tanh(i*3.14/180.0)*75;
		putpixel(x,y,color);
	}
	point(1,75);
	closegraph();
}
void atangenth(int color)
{
	initwindow(800,700);
	axes();
	delay(500);
	int x,y;
	moveto(WIDTH/2-58,HEIGHT-100);
	setcolor(color);
	for(int i=-360;i<=360;i++)
	{
		x=WIDTH/2+i;
		y=HEIGHT/2-atanh(i*3.14/180.0)*75;
		lineto(x,y);
	}
	point(1,75);
	closegraph();
}
void Sqrt(int color)
{
	initwindow(800,700);
	axes();
	delay(500);
	int x,y;
	moveto(WIDTH/2,HEIGHT/2);
	setcolor(color);
	for(int i=0;i<=20;i++)
	{
		x=WIDTH/2+i*20;
		y=HEIGHT/2-sqrt(i)*20;
		lineto(x,y);
	}
	point(20,20);
	closegraph();
}
void Cbrt(int color)
{
	initwindow(800,700);
	axes();
	delay(500);
	int x,y;
	moveto(WIDTH/2,HEIGHT/2);
	setcolor(color);
	for(int i=0;i<=20;i++)
	{
		x=WIDTH/2+i*20;
		y=HEIGHT/2-cbrt(i)*20;
		lineto(x,y);
	}
	point(20,20);
	closegraph();
}
void Log(int color)
{
	initwindow(800,700);
	axes();	
	delay(500);
	int x,y;
	moveto(WIDTH/2+5,HEIGHT-20);
	setcolor(color);
	for(int i=0;i<=10;i++)
	{
		x=WIDTH/2+i*40;
		y=HEIGHT/2-log10(i)*40;
		lineto(x,y);
	}
	point(40,40);
	closegraph();
}
void ln(int color)
{
	initwindow(800,700);
	axes();
	delay(500);
	int x,y;
	moveto(WIDTH/2+5,HEIGHT-20);
	setcolor(color);
	for(int i=0;i<=10;i++)
	{
		x=WIDTH/2+i*40;
		y=HEIGHT/2-log(i)*40;
		lineto(x,y);
	}
	point(40,40);
	closegraph();
}
void Exp(int color)
{
	initwindow(800,700);
	axes();
	delay(500);
	int x,y;
	moveto(0,HEIGHT/2);
	setcolor(color);
	for(int i=-10;i<=10;i++)
	{
		x=WIDTH/2+i*40;
		y=HEIGHT/2-exp(i)*40;
		lineto(x,y);
	} 
	point(40,40);
	closegraph();
}
void Pow(int k,int color)
{
	initwindow(800,700);
	axes();
	delay(500);
	int x,y;
	moveto(0,0);
	setcolor(color);
	for(int i=-20;i<=20;i++)
	{
		x=WIDTH/2+i*20;
		y=HEIGHT/2-pow(i,k)*20;
		lineto(x,y);
	}
	point(20,20);
	closegraph();
}
void lin(int color)
{
	int x,y,a,b;
	char ch;
	cout<<"Enter the coefficeient of x : ";
	cin>>a;
	cout<<"Enter the constant : ";
	cin>>b;
	initwindow(800,700);
	axes();
	delay(500);
	setcolor(color);
	for(int i=-20;i<=20;i++)
	{
		x=WIDTH/2+i*20;
		y=HEIGHT/2-(a*i+b)*20;
		lineto(x,y);	
	}
	point(20,20);
	closegraph();
}
void quad(int color)
{
	int x,y,a,b,c;
	char ch;
	cout<<"Enter the coefficeient of x^2 : ";
	cin>>a;
	cout<<"Enter the coefficeient of x : ";
	cin>>b;
	cout<<"Enter the constant : ";
	cin>>c;
	initwindow(800,700);
	axes();
	delay(500);
	setcolor(color);
	for(int i=-40;i<=40;i++)
	{
		x=WIDTH/2+i*10;
		y=HEIGHT/2-(a*i*i+b*i+c)*10;
		lineto(x,y);	
	}
	point(10,10);
	closegraph();
}
void cub(int color)
{
	int x,y,a,b,c,d;
	char ch;
	cout<<"Enter the coefficeient of x^3 : ";
	cin>>a;
	cout<<"Enter the coefficeient of x^2 : ";
	cin>>b;
	cout<<"Enter the coefficeient of x : ";
	cin>>c;
	cout<<"Enter the constant : ";
	cin>>d;
	initwindow(800,700);
	axes();
	delay(500);
	setcolor(color);
	for(int i=-40;i<=40;i++)
	{
		x=WIDTH/2+i*10;
		y=HEIGHT/2-(a*i*i*i+b*i*i+c*i+d)*10;
		lineto(x,y);	
	}
	point(10,10);
	closegraph();
}
int main()
{ 
	int c1,c2,c3;
	while(1)
	{
		system("CLS");
		cout<<"GRAPH CALCULATOR\n1.DRAW\n2.EXIT\nEnter your choice:";
		cin>>c1;
		system("CLS");
		switch(c1)
		{
			case 1:
				cout<<"DRAW\n1.Linear\n2.Quadratic\n3.Cubic\n4.Trigonometric\n5.Exponential\n6.Logorithmic\nEnter your choice:";
				cin>>c2;
				system("CLS");
				switch(c2)
				{
					case 1: lin(choosecolor()); break;
					case 2: quad(choosecolor()); break;
					case 3: cub(choosecolor()); break;
					case 4:
						cout<<"TRIGONOMETRIC FUNCTIONS\n1.sin(x)\n2.cos(x)\n3.tan(x)\n4.sinh(x)\n5.cosh(x)\n6.tanh(x)\n7.asin(x)\n8.acos(x)\n9.atan(x)\n10.asinh(x)\n11.acosh(x)\n12.atanh(x)\nEnter your choice:";
						cin>>c3;
						system("CLS");
						switch(c3)
						{
							case 1: sine(choosecolor()); break;
							case 2: cosine(choosecolor()); break;
							case 3: tangent(choosecolor()); break;
							case 4: sineh(choosecolor()); break;
							case 5: cosineh(choosecolor()); break;
							case 6: tangenth(choosecolor()); break;
							case 7: asine(choosecolor()); break;
							case 8: acosine(choosecolor()); break;
							case 9: atangent(choosecolor()); break;
							case 10: asineh(choosecolor()); break;
							case 11: acosineh(choosecolor()); break;
							case 12: atangenth(choosecolor()); break;
							default: cout<<"Invalid Choice\nRedirecting to Main Menu\n"; system("PAUSE");					
						}
						break;
					case 5:
						cout<<"EXPONENTIAL FUNCTIONS\n1.e^x\n2.SquareRoot(x)\n3.CubeRoot(x)\n4.x^k\nEnter your choice:";
						cin>>c3;
						system("CLS");
						switch(c3)
						{
							case 1: Exp(choosecolor()); break;
							case 2: Sqrt(choosecolor()); break;
							case 3: Cbrt(choosecolor()); break;
							case 4:
								int k;
								cout<<"Enter Power:";
								cin>>k;
								Pow(k,choosecolor());
								break;
							default: cout<<"Invalid Choice\nRedirecting to Main Menu\n"; system("PAUSE");
						}
						break;
					case 6:
						cout<<"LOGORITHMIC FUNCTIONS\n1.log_e(x)\n2.log_10(x)\nEnter your choice:";
						cin>>c3;
						system("CLS");
						switch(c3)
						{
							case 1: Log(choosecolor()); break;
							case 2: ln(choosecolor()); break;
							default: cout<<"Invalid Choice\nRedirecting to Main Menu\n"; system("PAUSE");
						}
						break;
					default: cout<<"Invalid Choice\nRedirecting to Main Menu\n"; system("PAUSE");
				}
				break;
			case 2: return 0;
			default: cout<<"Invalid Choice\nRedirecting to Main Menu\n"; system("PAUSE");
		}
	}
}
