#include<graphics.h>
#include<windows.h>
#include <cstdlib>
#include <ctime>
#include<string>


void subscribe()
{
	setcolor(LIGHTGREEN);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(50,150,"STICK BOY AND GIRL");
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
	setcolor(LIGHTBLUE);
	outtextxy(100,230,"TECHTALK SONU");
//	mciSendString("pause mp3", NULL, 0, NULL);
//	mciSendString("close mp3", NULL, 0, NULL);
}

//Music 
void music()
{
	
	mciSendString("open \"Kaun Tujhe.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
	mciSendString("play mp3", NULL, 0, NULL);
  
  
		
}	
// heart
void heart(int speed)
{
	int s = speed;
	
	setcolor(12);
	
	circle(50, 50, 40);
	
	circle(110, 50, 40);
	
	line(22, 80, 80, 140);
	line(80, 140, 138, 80);
	setfillstyle(SOLID_FILL, 12);
	floodfill(110, 50, 12);
	floodfill(50, 50, 12);
	floodfill(80, 50, 12);
	floodfill(80,100,12);
}
// stickman final chat
void stickman_chat2(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,-40+s,270,-40+s,200,70+s,200,70+s,270,60+s,270,50+s,280};
	drawpoly(8,points);

   setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(-20+s,210,"It's Ok!'");
	outtextxy(-5+s,240," ");
	
}

//stickman open legs with left hand up
void stickman_open_leftup(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
		line(20+s+i, 400, 5+s+i, 361);
	//right hand
		line(50+s,360+i,80+s,400+i);

	
	}
	
}


// Stick women last chat
void stickwomen_chat3(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,30+s,270,30+s,200,140+s+50,200,140+s+50,270,60+s,270,50+s,280};
	drawpoly(8,points);
   setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(45+s,210,"I am");
	outtextxy(100+s,240,"sorry...");
	
}
// Stick women call shree
void stickwomen_chat2(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,30+s,270,30+s,200,140+s+50,200,140+s+50,270,60+s,270,50+s,280};
	drawpoly(8,points);
   setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(45+s,210,"Shree");
	outtextxy(100+s,240,"wait....");
	
}
// stickwomen open legs with rose

void stickwomen_open_rose(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	//dress
	line(50+i+s,350,40+i+s,400);
	line(50+i+s,350,60+i+s,400);
	line(40+s,400-i,60+s,400-i);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,350,20+s+i,400);
	//right hand
		line(50+s,360+i,80+s,380+i);
		line(80+i+s,380,100+i+s,360);

	
	}
	// rose
	setcolor(LIGHTGREEN);
	for(int i=0;i<2;i++)
	line(100+i+s,360,100+i+s,345);
	setcolor(LIGHTRED);
	for(int i=10,h=0;i>=0;i--,h++)
	{
		line(90+i+s,345-h,110-i+s,345-h);
	}
	
}

// stickwomen close legs with rose

void stickwomen_close_rose(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	//dress
	line(50+i+s,350,40+i+s,400);
	line(50+i+s,350,60+i+s,400);
	line(40+s,400-i,60+s,400-i);
	//legs
	line(50-i+s,400,50-i+s,450);
	line(50+i+s,400,50+i+s,450);
	//left hand
		line(50+s+i,350,20+s+i,400);
	//right hand
		line(50+s,360+i,80+s,380+i);
		line(80+i+s,380,100+i+s,360);

	
	}
	// rose
	setcolor(LIGHTGREEN);
	for(int i=0;i<2;i++)
	line(100+i+s,360,100+i+s,345);
	setcolor(LIGHTRED);
	for(int i=10,h=0;i>=0;i--,h++)
	{
		line(90+i+s,345-h,110-i+s,345-h);
	}
	
}


// rose

void rose(int speed)
{
	int s = speed;
	for (int i=0; i<3; i++)
	{
		setcolor(LIGHTGREEN);
		line(50+s, 466+i, 60+s, 466+i);
	}
	setcolor(LIGHTRED);
	for(int i=10,h=0;i<=20;i++,h++)
	{
		line(50+i+s, 466-h, 50+i+s, 466+h);
	}
}
// rain 

void rain(int speed,int drop_size)
{

   setcolor(LIGHTCYAN);

	for(int i=0;i<30;i++)
	{
		settextstyle(0,HORIZ_DIR,drop_size);
		outtextxy(speed+rand()%150,100+rand()%345,"| ");
	}
	setcolor(WHITE);
}

// cloud
void cloud(int speed,int cloud_color)
{setcolor(LIGHTGRAY);
 int a=speed;
    int i=2;
		//up
		arc(50+a,50+2,20,160,25+i);
		arc(100-2+a,50+2,20,160,25+i);
		//down
		arc(50+a,80-4,180+20,360-20,25+i);
		arc(100-2+a,80-4,180+20,360-20,25+i);
	    //left
		arc(25+5+a,65,90+10,270-10,20+i);     
	    // right  
		arc(125-5+a,65,270,90,20+i);              
		
	
	setfillstyle(1,cloud_color);
	floodfill(50+a,75,LIGHTGRAY);
}

// stick man chats (think)
void stickman_chat(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,30+s,270,30+s,158,140+s+50,158,140+s+50,270,60+s,270,50+s,280};
	drawpoly(8,points);
   	setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(45+s,180,"I have to die");
	outtextxy(45+s,210,"   no anyone");
	outtextxy(90+s,240,"love me");
	
}
// Stick women thinking
void stickwomen_chat(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,30+s,270,30+s,200,140+s+50,200,140+s+50,270,60+s,270,50+s,280};
	drawpoly(8,points);
   setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(45+s,210,"I have done");
	outtextxy(100+s,240,"wrong");
	
}

// Stick women thinking next
void stickwomen_chat1(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,30+s,270,30+s,158,140+s+50,158,140+s+50,270,60+s,270,50+s,280};
	drawpoly(8,points);
   	setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(45+s,180,"I have to go");
	outtextxy(45+s,210,"to say sorry");
	outtextxy(100+s,240,"to him");
	
}
//home

void home(int color)
{
	for (int i = 0; i<3; i++)
	{
		setcolor(color);
		// rectanglular part of home
		rectangle(524+i, 362+i, 670+i, 453+i);
		rectangle(477+i, 363+i, 524+i, 453+i);
		rectangle(493+i, 404+i, 510+i, 453+i);
		// lines to draw roof triangle
		line(477+i, 362+i, 500+i, 316+i);
		line(500+i, 316+i, 524+i, 362+i);
		line(477+i, 362+i, 524+i, 362+i);
		// roof right side
		line(670+i, 362+i, 640+i, 316+i);
		line(640, 316+i, 500, 316+i);
		// Home window (circle)
		circle(602, 402, 17+i);
		
		
	}
}
//Road

void road(int color)
{
	setcolor(color);
	for(int i=0;i<3;i++)
	{
		line(0,450+i,700,450+i);
	}
	setcolor(WHITE);
}

//stickman open legs
void stickman_open(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
	//right hand
		line(50+s,360+i,80+s,400+i);

	
	}
	
}

// stickman close legs 

void stickman_close(int speed,int color)
{	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50-i+s,400,50-i+s,450);
	line(50+i+s,400,50+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
;
	//right hand
		line(50+s,360+i,80+s,400+i);


	}
	
	
}

// stickwomen open legs 

void stickwomen_open(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	//dress
	line(50+i+s,350,40+i+s,400);
	line(50+i+s,350,60+i+s,400);
	line(40+s,400-i,60+s,400-i);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,350,20+s+i,400);
	//right hand
		line(50+s+i,350,80+s+i,400);

	
	}
	
}
// stick womrn close leg
void stickwomen_close(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	//dress
	line(50+i+s,350,40+i+s,400);
	line(50+i+s,350,60+i+s,400);
	line(40+s,400-i,60+s,400-i);
	//legs
	line(50-i+s,400,50-i+s,450);
	line(50+i+s,400,50+i+s,450);
	//left hand
		line(50+s+i,350,20+s+i,400);
	//right hand
		line(50+s+i,350,80+s+i,400);

	
	}
	
}

// Driver code
int main()
{
	initwindow(700, 550, "Stickman Next Day", 150, 50);
	int page=0;
	int speedMan=6;
	int speedWomen=6;
	int n=0;
	int cs=650;
	int rf=300;
	road(13);
	home(14);
	music();
	while (n<=822)
	{
		setactivepage(page);
		setvisualpage(1-page);
		cleardevice();
		
		//position outside window
		if (n<15)
		{
			road(13);
			home(15);
			stickwomen_open(-90, 15);
		}
		// move stickwomen forward
		if (n>=15 && n<=66)
		{
			road(13);
			home(15);
			if (n%2==0)
			stickwomen_open(-90+speedWomen, 15);
			else
			stickwomen_close(-90+speedWomen, 15);			
			speedWomen+=6;			
		}
		
		// stickwomen think
		if (n>66 && n<=112)
		{
			road(13);
			home(15);
			stickwomen_open(250, 15);
			if (n>68 && n<88)
			stickwomen_chat(speedWomen,15, 15);
			if (n>=88 && n<= 92);
			if (n>=92 && n<=112)
			stickwomen_chat1(speedWomen, 15, 15);
			
		}
		
		// Stick women moving back 
		if (n>112 && n<=186)
		{
			road(13);
			home(15);
			if (n%2==0)
			stickwomen_open(speedWomen, 15);
			else
			stickwomen_close(speedWomen, 15);			
			speedWomen-=6;			
		}
		// stick man go forward
		if (n>186 && n<=237)
		{
			cloud(-100+speedMan, 15);
			rain(-100+speedMan, 2);
			road(13);
			if (n%2==0)
			stickman_open(-90+speedMan, 14);
			else
			stickman_close(-90+speedMan, 14);			
			speedMan+=6;			
		}
		
		// stickman think
		if (n>237 && n<=287)
		{
			cloud(-100+speedMan, 15);
			rain(-100+speedMan, 2);
			road(13);
			stickman_open(speedMan-90, 14);
			stickman_chat(speedMan-90, 14, 14);			
		}
		
		// stickman go forward after thinking
		if (n>287 && n<=370)
		{
			cloud(-100+speedMan, 15);
			rain(-100+speedMan, 2);
			road(13);
			if (n%2==0)
			stickman_open(-90+speedMan, 14);
			else
			stickman_close(-90+speedMan, 14);			
			speedMan+=6;		
		}
		//rose and stickwomen walk forward to pick rose
		if (n>370 && n<=434)
		{
			road(13);
			rose(rf);
			if (n%2==0)
			stickwomen_open(speedWomen, 15);
			else
			stickwomen_close(speedWomen, 15);
			speedWomen+=6;	
		}
		
		// stickwomen stop to pick rose
		if (n>434 && n<=449)
		{
			road(13);
			rose(rf);
			stickwomen_open(speedWomen, 15);
		}
		// stickwomen pick rose
		if (n>449 & n<=480)
		{
			road(13);
			stickwomen_open_rose(speedWomen, 15);
			
		}
		// stickwomen pick rose and move foward
		if (n>480 && n<=558)
		{
			road(13);
			if (n%2==0)
			stickwomen_open_rose(speedWomen, 15);
			else
			stickwomen_close_rose(speedWomen, 15);
			speedWomen+=6;
		}
		// stickwomen and stickman meet
		if (n>558 && n<=616)
		{
			road(13);
			if (n%2==0)
			{
				stickman_open(speedMan-550, 14);
				stickwomen_open_rose(speedWomen-730, 15);
				speedWomen+=6;
				speedMan+=6;
			}
				
			else
				{
				stickman_close(speedMan-550, 14);
				stickwomen_close_rose(speedWomen-730, 15);
				speedWomen+=6;
				speedMan+=6;
				}
			
		}
		
		// stickwomen call stickman
		if (n>616 && n<=631)
		{
			road(13);
			if (n%2==0)
			{
				stickman_open(speedMan-550, 14);
				speedMan+=6;
			}
				
			else
				{
				stickman_close(speedMan-550, 14);
				speedMan+=6;
				}
			stickwomen_open_rose(speedWomen-730, 15);
			stickwomen_chat2(speedWomen-730,15,2);
		}
		
		// stickman come back
		if (n>631 && n<=671)
		{
			road(13);
			stickwomen_open_rose(speedWomen-730, 15);
			stickwomen_chat2(speedWomen-730,15,2);
			if (n%2==0)
			{
				stickman_open(speedMan-550, 14);
				speedMan-=6;
			}
				
			else
				{
				stickman_close(speedMan-550, 14);
				speedMan-=6;
				}
		}
		
		// meet
		if (n>671 && n<=710)
		{
			road(13);
			stickwomen_open_rose(speedWomen-730,15);
			stickman_open(speedMan-550, 14);
		}
		
		// stickwomen saying sorry
		if (n>710 && n<=760)
		{
			road(13);
			stickwomen_open_rose(speedWomen-730,15);
			stickwomen_chat3(speedWomen-730,15,2);
			stickman_open(speedMan-550, 14);
		}
		// stickman hand up
		if (n>760 && n<=820)
		{
			road(13);
			stickwomen_open_rose(speedWomen-730,15);
			stickman_open_leftup(speedMan-550, 14);
			stickman_chat2(speedMan-550, 14,2);
			
		}
		page = 1- page;
		delay(100);
		n++;
	}
	cleardevice();
	setactivepage(1);
	
	subscribe();
	

	getch();
	closegraph();
	return 0;
	
}
