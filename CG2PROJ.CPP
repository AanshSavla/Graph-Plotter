#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>

int quadi,scalei,yText=60,xScalei,yScalei;
char xLabel[10],yLabel[10],xScale[2],yScale[2];

void drawgraph()
{
	int count,i;
	char quad[1],a[100],scale[100];
	outtextxy(225,30,"Enter Quadrant:");
	scanf("%s",&quad);
	outtextxy(350,30,quad);
	outtextxy(450,30,"1 unit = ");
	scanf("%s",&scale);
	scalei=atoi(scale);
	if(scalei<=20)
	{
		scalei=20;
	}
	outtextxy(525,30,scale);
	outtextxy(550,30,"pixels");
	quadi=atoi(quad);

	outtextxy(225,50,"xLabel:");
	scanf("%s",&xLabel);
	outtextxy(300,50,xLabel);

	outtextxy(225,70,"yLabel:");
	scanf("%s",&yLabel);
	outtextxy(300,70,yLabel);

	outtextxy(475,50,"1x Unit=");
	scanf("%s",&xScale);
	outtextxy(550,50,xScale);
	xScalei=atoi(xScale);

	outtextxy(475,70,"1y Unit=");
	scanf("%s",&yScale);
	outtextxy(550,70,yScale);
	yScalei=atoi(yScale);


	setcolor(YELLOW);

 //	for(i=200;i<=600;i=i+scalei)
 //	{
 //		line(i,100,i,400);
 //	}

 //	for(i=100;i<=400;i=i+scalei)
 //	{
 //		line(200,i,600,i);
 //	}

	switch(quadi)
	{
		case 1:
		{
			count=0;
			for(i=200;i<=600;i=i+scalei)
			{
				itoa(count,a,10);
				outtextxy(i,420,a);
				count+=xScalei;
				line(i,100,i,400);
			}
			count=0;
			for(i=400;i>=100;i=i-scalei)
			{
				itoa(count,a,10);
				outtextxy(180,i,a);
				count+=yScalei;
				line(200,i,600,i);
			}
			break;
		}
		case 2:
		{
			count=0;
			for(i=600;i>=200;i=i-scalei)
			{
				itoa(count,a,10);
				outtextxy(i,420,a);
				count-=xScalei;
				line(i,100,i,400);
			}
			count=0;
			for(i=400;i>=100;i=i-scalei)
			{
				itoa(count,a,10);
				outtextxy(610,i,a);
				count+=yScalei;
				line(200,i,600,i);
			}
			break;
		}
		case 3:
		{
			count=0;
			for(i=600;i>=200;i=i-scalei)
			{
				itoa(count,a,10);
				outtextxy(i,80,a);
				count-=xScalei;
				line(i,100,i,400);
			}
			count=0;
			for(i=100;i<=400;i=i+scalei)
			{
				itoa(count,a,10);
				outtextxy(610,i,a);
				count-=yScalei;
				line(200,i,600,i);

			}
			break;
		}
		case 4:
		{
			count=0;
			for(i=200;i<=600;i=i+scalei)
			{
				itoa(count,a,10);
				outtextxy(i,80,a);
				count+=xScalei;
				line(i,100,i,400);
			}
			count=0;
			for(i=100;i<=400;i=i+scalei)
			{
				itoa(count,a,10);
				outtextxy(170,i,a);
				count-=yScalei;
				line(200,i,600,i);
			}
			break;
		}
		default:
		{
			count=0;
			for(i=200;i<=600;i=i+scalei)
			{
				itoa(count,a,10);
				outtextxy(i,420,a);
				count+=xScalei;
				line(i,100,i,400);
			}
			count=0;
			for(i=400;i>=100;i=i-scalei)
			{
				itoa(count,a,10);
				outtextxy(180,i,a);
				count+=yScalei;
				line(200,i,600,i);
			}
			break;

		}
	}
}


void linegraph()
{
	char x1[3],x2[3],y1[3],y2[3];
	int xi1,xi2,yi1,yi2;
	yText+=20;
	outtextxy(40,yText,"Enter x1:");
	scanf("%s",&x1);
	outtextxy(150,yText,x1);
	xi1=atoi(x1);
	yText+=20;

	outtextxy(40,yText,"Enter y1:");
	scanf("%s",&y1);
	outtextxy(150,yText,y1);
	yi1=atoi(y1);
	yText+=20;

	outtextxy(40,yText,"Enter x2:");
	scanf("%s",&x2);
	outtextxy(150,yText,x2);
	xi2=atoi(x2);
	yText+=20;

	outtextxy(40,yText,"Enter y2:");
	scanf("%s",&y2);
	outtextxy(150,yText,y2);
	yi2=atoi(y2);

	setcolor(RED);

	switch(quadi)
	{
		case 1:
		{
			xi1=(scalei*xi1)/xScalei+200;
			yi1=400-(scalei*yi1)/yScalei;
			xi2=(scalei*xi2)/xScalei+200;
			yi2=400-(scalei*yi2)/yScalei;
			break;
		}
		case 2:
		{
			xi1=(scalei*xi1)/xScalei+600;
			yi1=400-(scalei*yi1)/yScalei;
			xi2=(scalei*xi2)/xScalei+600;
			yi2=400-(scalei*yi2)/yScalei;
			break;
		}
		case 3:
		{
			xi1=(scalei*xi1)/xScalei+600;
			yi1=100+(scalei*yi1*(-1))/yScalei;
			xi2=(scalei*xi2)/xScalei+600;
			yi2=100+(scalei*yi2*(-1))/yScalei;
			break;
		}
		case 4:
		{
			xi1=(scalei*xi1)/xScalei+200;
			yi1=100+(scalei*yi1*(-1))/yScalei;
			xi2=(scalei*xi2)/xScalei+200;
			yi2=100+(scalei*yi2*(-1))/yScalei;
			break;
		}
		default:
		{
			xi1=(scalei*xi1)/xScalei+200;
			yi1=400-(scalei*yi1)/yScalei;
			xi2=(scalei*xi2)/xScalei+200;
			yi2=400-(scalei*yi2)/yScalei;
			break;
		}
	}
	line(xi1,yi1,xi2,yi2);
}

void circlegraph()
{
	char xc[3],yc[3],r[3];
	int xci,yci,ri;
	yText+=20;
	outtextxy(40,yText,"Enter Xcenter:");
	scanf("%s",&xc);
	outtextxy(150,yText,xc);
	xci=atoi(xc);
	yText+=20;

	outtextxy(40,yText,"Enter Ycenter");
	scanf("%s",&yc);
	outtextxy(150,yText,yc);
	yci=atoi(yc);
	yText+=20;

	outtextxy(40,yText,"Enter radius:");
	scanf("%s",&r);
	outtextxy(150,yText,r);
	ri=atoi(r);
	ri=ri*scalei;
	yText+=20;

	setcolor(RED);
	switch(quadi)
	{
		case 1:
		{
			xci=(scalei*xci)/xScalei+200;
			yci=400-(scalei*yci)/yScalei;
			circle(xci,yci,ri);
			break;
		}
		case 2:
		{
			xci=(scalei*xci)/xScalei+600;
			yci=400-(scalei*yci)/yScalei;
			circle(xci,yci,ri);
			break;
		}
		case 3:
		{
			xci=(scalei*xci)/xScalei+600;
			yci=100+(scalei*yci*(-1))/yScalei;
			circle(xci,yci,ri);
			break;
		}
		case 4:
		{
			xci=(scalei*xci)/xScalei+200;
			yci=100+(scalei*yci*(-1))/yScalei;
			circle(xci,yci,ri);
			break;
		}
		default:
		{
			xci=(scalei*xci)/xScalei+200;
			yci=400-(scalei*yci)/yScalei;
			circle(xci,yci,ri);
			break;
		}


	}


}

void bargraph()
{
	char x1[3],x2[3],y[3],n[3];
	int x1i,x2i,yi,i,ni;
	outtextxy(40,yText,"n(max4):");
	scanf("%s",&n);
	outtextxy(150,yText,n);
	ni=atoi(n);
	yText+=20;
	if(ni>4)
	{
		ni=4;
	}

	for(i=1;i<=ni;i++)
	{

		outtextxy(40,yText,"Enter x1:");
		scanf("%s",&x1);
		outtextxy(150,yText,x1);
		x1i=atoi(x1);
		yText+=20;

		outtextxy(40,yText,"Enter x2:");
		scanf("%s",&x2);
		outtextxy(150,yText,x2);
		x2i=atoi(x2);
		yText+=20;

		outtextxy(40,yText,"Enter y:");
		scanf("%s",&y);
		outtextxy(150,yText,y);
		yi=atoi(y);
		yText+=20;

		setfillstyle(SOLID_FILL,RED);
		bar(200+(scalei*x1i)/xScalei,400-(scalei*yi)/yScalei,200+(scalei*x2i)/xScalei,400);
	}

}



void main()
{
 int i,oi=0;
 char o[1];
  clrscr();
 int gd=DETECT,gm,x,y,r;
 initgraph(&gd,&gm,"");
// printf("Enter center and radius:\n");
// scanf("%d %d %d",&x,&y,&r);
 setbkcolor(WHITE);
 setcolor(RED);
 outtextxy(225,20,"WELCOME TO THE GRAPHS");
 drawgraph();


	setcolor(RED);
	yText+=20;
	outtextxy(40,yText,"1:Line");
	yText+=20;
	outtextxy(40,yText,"2:Circle");
	yText+=20;
	outtextxy(40,yText,"3:BarGraph(Quad1)");
	yText+=20;
	outtextxy(40,yText,"4:Exit");
	yText+=20;
	outtextxy(40,yText,"Enter option:");
	scanf("%s",&o);
	outtextxy(150,yText,o);
	oi=atoi(o);
	yText+=20;
	switch(oi)
	{
		case 1:
			linegraph();
			break;
		case 2:
			circlegraph();
			break;
		case 3:
			bargraph();
			break;
		default:
			outtextxy(40,yText,"EXIT");
			break;
	}


 getch();
 closegraph();
}