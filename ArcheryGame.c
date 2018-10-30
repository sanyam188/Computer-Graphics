#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
int i=0,j=300,m=0,k=0,maxx,maxy,arrows=0,ll,snd=0;
double score=0;
char a[4];

gameover()
{
 setcolor(0);
 setfillstyle(SOLID_FILL,0);
 bar(11,11,maxx-11,maxy-11);
 setcolor(BROWN);
 setfillstyle(SOLID_FILL,1);
 bar(maxx/2-100,maxy/2-50,maxx/2+100,maxy/2+50);
 outtextxy(maxx/2-50,maxy/2-20,"Game Over..!");
 outtextxy(maxx/2-70,maxy/2,"Your score is:");
 outtextxy(maxx/2-200,maxy/2+90,"Press `Space Bar' to Contuinue and `Esc' to Exit.");
 gcvt(score,4,a);
 outtextxy(maxx/2+60,maxy/2,a);
 if(getch()==32)
 {
  arrows=0;
  score=0;
  main();
 }
 closegraph();
 clrscr();
 exit(0);
 return 0;
}

stick1(loc)
{
 snd=0;
 setcolor(0);
 gcvt(score,4,a);
 outtextxy(330,40,a);

 setcolor(LIGHTGRAY);
 if(loc>=130 && loc<=140)
 {
  score=score+100;
  outtextxy(250,60,"Points: 100");
 }
 if(loc>=120 && loc<130)
 {
  score=score+70;
  outtextxy(250,60,"Points: 70");
 }
 if(loc>140 && loc<=150)
 {
  score=score+70;
  outtextxy(250,60,"Points: 70");
 }
 if(loc>=110 && loc<120)
 {
  score=score+50;
  outtextxy(250,60,"Points: 50");
 }
 if(loc>150 && loc<=160)
 {
  score=score+50;
  outtextxy(250,60,"Points: 50");
 }
 if(loc>=100 && loc<110)
 {
  score=score+40;
  outtextxy(250,60,"Points: 40");
 }
 if(loc>160 && loc<=170)
 {
  score=score+40;
  outtextxy(250,60,"Points: 40");
 }
 if(loc>=90 && loc<100)
 {
  score=score+35;
  outtextxy(250,60,"Points: 35");
 }
 if(loc>170 && loc<=180)
 {
  score=score+35;
  outtextxy(250,60,"Points: 35");
 }

 outtextxy(230,40,"Total Score:");
 gcvt(score,4,a);
 outtextxy(330,40,a);

 for(i=i;i<300;i++)
 {
  snd=snd+1;
  setfillstyle(1,8);
  setcolor(2);
  bar(20,20+i,25,110+i);
  setfillstyle(1,7);
  bar(27,30+i,30,100+i);
  setfillstyle(1,9);
  bar(32,40+i,35,90+i);
  setfillstyle(1,14);
  bar(37,50+i,40,80+i);
  setfillstyle(1,4);
  bar(42,60+i,45,70+i);

  setcolor(BROWN);

  if(loc>=130 && loc<=140)
  {
   line(46,i-loc+200,66,i-loc+200);
   if(snd==1)
    sound(1500);
   if(snd==3)
    nosound();
   if(snd==5)
    sound(1500);
   if(snd==15)
    nosound();
  }
  if(loc>=120 && loc<130)
  {
   line(41,i-loc+200,61,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==15)
    nosound();
  }
  if(loc>140 && loc<=150)
  {
   line(41,i-loc+200,61,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==15)
    nosound();
  }
  if(loc>=110 && loc<120)
  {
   line(36,i-loc+200,56,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==10)
    sound(900);
   if(snd==20)
    nosound();
  }
  if(loc>150 && loc<=160)
  {
   line(36,i-loc+200,56,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==10)
    sound(900);
   if(snd==20)
    nosound();
  }
  if(loc>=100 && loc<110)
  {
   line(31,i-loc+200,51,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==10)
    sound(900);
   if(snd==15)
    sound(800);
   if(snd==20)
    nosound();
  }
  if(loc>160 && loc<=170)
  {
   line(31,i-loc+200,51,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==10)
    sound(900);
   if(snd==15)
    sound(800);
   if(snd==20)
    nosound();
  }
  if(loc>=90 && loc<100)
  {
   line(26,i-loc+200,46,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==10)
    sound(900);
   if(snd==15)
    sound(800);
   if(snd==20)
    sound(700);
   if(snd==25)
    nosound();
  }
  if(loc>170 && loc<=180)
  {
   line(26,i-loc+200,46,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==10)
    sound(900);
   if(snd==15)
    sound(800);
   if(snd==20)
    sound(700);
   if(snd==25)
    nosound();
  }

  delay(20);
  setcolor(0);
  setfillstyle(SOLID_FILL,0);
  bar(20,20+i,25,110+i);
  bar(27,30+i,30,100+i);
  bar(32,40+i,35,90+i);
  bar(37,50+i,40,80+i);
  bar(42,60+i,45,70+i);

  if(loc>=130 && loc<=140)
  line(46,i-loc+200,66,i-loc+200);
  if(loc>=120 && loc<130)
  line(41,i-loc+200,61,i-loc+200);
  if(loc>140 && loc<=150)
  line(41,i-loc+200,61,i-loc+200);
  if(loc>=110 && loc<120)
  line(36,i-loc+200,56,i-loc+200);
  if(loc>150 && loc<=160)
  line(36,i-loc+200,56,i-loc+200);
  if(loc>=100 && loc<110)
  line(31,i-loc+200,51,i-loc+200);
  if(loc>160 && loc<=170)
  line(31,i-loc+200,51,i-loc+200);
  if(loc>=90 && loc<100)
  line(26,i-loc+200,46,i-loc+200);
  if(loc>170 && loc<=180)
  line(26,i-loc+200,46,i-loc+200);

  if(kbhit())
  {
   int ch=getch();
   if(ch==27)
   {
    closegraph();
    exit(0);
   }
  }
 }
 i=0;j=300;k=0;

 setcolor(0);
 if(loc>=130 && loc<=140)
  outtextxy(250,60,"Points: 100");
 if(loc>=120 && loc<130)
  outtextxy(250,60,"Points: 70");
 if(loc>140 && loc<=150)
  outtextxy(250,60,"Points: 70");
 if(loc>=110 && loc<120)
  outtextxy(250,60,"Points: 50");
 if(loc>150 && loc<=160)
  outtextxy(250,60,"Points: 50");
 if(loc>=100 && loc<110)
  outtextxy(250,60,"Points: 40");
 if(loc>160 && loc<=170)
  outtextxy(250,60,"Points: 40");
 if(loc>=90 && loc<100)
  outtextxy(250,60,"Points: 35");
 if(loc>170 && loc<=180)
  outtextxy(250,60,"Points: 35");
 if(arrows==10)
 {
  gameover();
 }
 dartboard();
 return 0;
}

shoot()
{
 if(arrows==10)
 {
  gameover();
 }
 arrows=arrows+1;
 setcolor(0);
 for(ll=15;ll<=15*arrows;ll+=15)
 {
  outtextxy(550,40+ll,"_______");
  outtextxy(600,44+ll,"<");
 }
 a:
 for(i=i;i<300;i++)
 {
  if(k==350 && i>=110 && i<=160)
  {
   int loc=i;
   stick1(loc);
  }
  if(k==360 && i>=90 && i<=110)
  {
   int loc=i;
   stick1(loc);
  }
  if(k==360 && i>=160 && i<180)
  {
   int loc=i;
   stick1(loc);
  }

  if(k==400)
  {
   k=0;
   dartboard();
  }
  k=k+10;
  setfillstyle(1,8);
  setcolor(2);
  bar(20,20+i,25,110+i);
  setfillstyle(1,7);
  bar(27,30+i,30,100+i);
  setfillstyle(1,9);
  bar(32,40+i,35,90+i);
  setfillstyle(1,14);
  bar(37,50+i,40,80+i);
  setfillstyle(1,4);
  bar(42,60+i,45,70+i);

  line(400-k,200,420-k,200);

  delay(20);
  setcolor(0);
  setfillstyle(SOLID_FILL,0);
  bar(20,20+i,25,110+i);
  bar(27,30+i,30,100+i);
  bar(32,40+i,35,90+i);
  bar(37,50+i,40,80+i);
  bar(42,60+i,45,70+i);

  line(400-k,200,420-k,200);


  if(kbhit())
  {
   int ch=getch();
   if(ch==27)
  {
   closegraph();
   exit(0);
  }
  }
 }
 i=0;j=300;
 if(arrows==10)
 {
  gameover();
 }
 goto a;
}

dartboard()
{
 a:
 for(i=i;i<300;i++)
 {
  setfillstyle(1,8);
  bar(20,20+i,25,110+i);
  setfillstyle(1,7);
  bar(27,30+i,30,100+i);
  setfillstyle(1,9);
  bar(32,40+i,35,90+i);
  setfillstyle(1,14);
  bar(37,50+i,40,80+i);
  setfillstyle(1,4);
  bar(42,60+i,45,70+i);

  delay(20);
  setfillstyle(SOLID_FILL,0);
  bar(20,20+i,25,110+i);
  bar(27,30+i,30,100+i);
  bar(32,40+i,35,90+i);
  bar(37,50+i,40,80+i);
  bar(42,60+i,45,70+i);
  if(kbhit())
  {
   int ch=getch();
   if(ch==27)
   {
    closegraph();
    exit(0);
   }
   if(ch==32 && m==0)
   {
    shoot();
   }
  }
 }
 i=0;j=300;
 goto a;
}

main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"");
 maxx=getmaxx();
 maxy=getmaxy();
 welcome();
 branch();
 leaves(0,-25);
 man();
 tree();
 setfillstyle(1,GREEN);
 bar(maxx-10,maxy-200,maxx,maxy);
 line(400,200,450,200);
 for(ll=15;ll<=150;ll+=15)
 {
  outtextxy(550,40+ll,"_______");
  outtextxy(600,44+ll,"<");
 }
 setcolor(LIGHTGRAY);
 outtextxy(470,15,"Press `Esc' to Quit");
 outtextxy(230,40,"Total Score:");
 gcvt(score,4,a);
 outtextxy(330,40,a);
 dartboard();
 return 0;
}

tree()
{
 int x,y,ff;
 setcolor(2);
 setfillstyle(SOLID_FILL,2);
 rectangle(10,10,maxx-10,maxy-10);
 floodfill(2,2,2);
 for(x=0;x<maxx;x+=100)
 {
  arc(x,maxy-10,0,50,50);
  arc(x+6,maxy-6,0,60,50);
  arc(x+12,maxy-10,130,180,50);
  arc(x+6,maxy-6,120,180,50);
 }
 for(y=0;y<maxx;y+=200)
 {
  line(y+100,maxy-10,y+90,maxy-60);
  line(y+105,maxy-10,y+90,maxy-60);
  arc(y+160,maxy-10,110,180,50);
  arc(y+154,maxy-6,120,180,50);
 }
 for(ff=0;ff<maxx;ff+=100)
 {
  floodfill(ff+52,maxy-20,2);
  floodfill(ff+62,maxy-20,2);
  if(ff%200==0)
  {
   floodfill(ff+101,maxy-20,2);
   floodfill(ff+107,maxy-20,2);
  }
 }
 return 0;
}

man()
{
 int xp=10,yp=19;
 setcolor(7);
 arc(503,198,145,225,92);
 arc(504,198,145,225,92);
 arc(505,198,145,225,92);
 line(xp+451,yp+140,xp+462,yp+144);
 line(xp+462,yp+144,xp+474,yp+145);
 line(xp+474,yp+145,xp+481,yp+143);
 line(xp+481,yp+143,xp+491,yp+141);
 line(xp+491,yp+141,xp+480,yp+132);
 line(xp+480,yp+132,xp+475,yp+139);
 line(xp+475,yp+139,xp+471,yp+132);
 line(xp+471,yp+132,xp+471,yp+132);
 line(xp+471,yp+132,xp+450,yp+139);
 line(xp+450,yp+138,xp+458,yp+129);
 line(xp+458,yp+129,xp+470,yp+124);
 line(xp+470,yp+124,xp+475,yp+122);
 line(xp+475,yp+122,xp+480,yp+123);
 line(xp+480,yp+123,xp+480,yp+120);
 line(xp+480,yp+120,xp+487,yp+120);
 line(xp+487,yp+120,xp+481,yp+123);
 line(xp+481,yp+123,xp+470,yp+129);
 line(xp+470,yp+129,xp+467,yp+134);
 line(xp+482,yp+123,xp+488,yp+124);
 line(xp+488,yp+124,xp+497,yp+124);
 line(xp+497,yp+124,xp+488,yp+129);
 line(xp+488,yp+129,xp+493,yp+131);
 line(xp+493,yp+131,xp+482,yp+131);
 line(xp+486,yp+131,xp+488,yp+138);
 line(xp+487,yp+143,xp+486,yp+158);
 line(xp+486,yp+158,xp+482,yp+166);
 line(xp+482,yp+166,xp+474,yp+169);
 line(xp+474,yp+169,xp+474,yp+168);
 line(xp+474,yp+168,xp+476,yp+164);
 line(xp+478,yp+164,xp+481,yp+162);
 line(xp+481,yp+162,xp+481,yp+154);
 line(xp+481,yp+154,xp+480,yp+152);
 line(xp+480,yp+152,xp+476,yp+156);
 line(xp+476,yp+156,xp+476,yp+149);
 line(xp+476,yp+149,xp+473,yp+145);
 line(xp+454,yp+140,xp+455,yp+153);
 line(xp+455,yp+153,xp+451,yp+156);
 line(xp+451,yp+156,xp+449,yp+158);
 line(xp+449,yp+159,xp+449,yp+164);
 line(xp+449,yp+164,xp+452,yp+173);
 line(xp+452,yp+173,xp+457,yp+179);
 line(xp+457,yp+179,xp+461,yp+178);
 line(xp+461,yp+178,xp+466,yp+174);
 line(xp+462,yp+177,xp+463,yp+182);
 line(xp+474,yp+169,xp+470,yp+179);
 line(xp+471,yp+179,xp+484,yp+179);
 line(xp+484,yp+179,xp+480,yp+183);
 line(xp+471,yp+178,xp+466,yp+182);
 line(xp+468,yp+183,xp+473,yp+189);
 line(xp+473,yp+189,xp+484,yp+189);
 line(xp+484,yp+189,xp+479,yp+183);
 line(xp+390,yp+181,xp+482,yp+183);
 line(xp+460,yp+183,xp+463,yp+190);
 line(xp+463,yp+190,xp+470,yp+186);
 line(xp+462,yp+186,xp+458,yp+186);
 line(xp+458,yp+186,xp+456,yp+198);
 line(xp+456,yp+198,xp+463,yp+190);
 line(xp+463,yp+190,xp+467,yp+200);
 line(xp+467,yp+200,xp+476,yp+190);
 line(xp+457,yp+190,xp+453,yp+193);
 line(xp+453,yp+193,xp+450,yp+205);
 line(xp+450,yp+205,xp+445,yp+228);
 line(xp+445,yp+228,xp+441,yp+232);
 line(xp+441,yp+232,xp+452,yp+234);
 line(xp+452,yp+234,xp+462,yp+238);
 line(xp+462,yp+238,xp+462,yp+238);
 line(xp+462,yp+238,xp+475,yp+238);
 line(xp+475,yp+238,xp+481,yp+233);
 line(xp+481,yp+233,xp+480,yp+200);
 line(xp+480,yp+200,xp+485,yp+200);
 line(xp+485,yp+200,xp+498,yp+204);
 line(xp+498,yp+204,xp+496,yp+199);
 line(xp+496,yp+199,xp+501,yp+196);
 line(xp+501,yp+195,xp+498,yp+192);
 line(xp+498,yp+197,xp+510,yp+203);
 line(xp+510,yp+203,xp+513,yp+195);
 line(xp+498,yp+184,xp+514,yp+182);
 line(xp+514,yp+182,xp+515,yp+186);
 line(xp+496,yp+186,xp+521,yp+186);
 line(xp+521,yp+186,xp+526,yp+191);
 line(xp+526,yp+191,xp+521,yp+195);
 line(xp+521,yp+195,xp+513,yp+195);
 line(xp+513,yp+195,xp+495,yp+191);
 line(xp+496,yp+190,xp+496,yp+194);
 line(xp+496,yp+194,xp+489,yp+196);
 line(xp+489,yp+196,xp+485,yp+194);
 line(xp+485,yp+194,xp+483,yp+182);
 line(xp+483,yp+182,xp+492,yp+182);
 line(xp+492,yp+182,xp+492,yp+182);
 line(xp+493,yp+182,xp+496,yp+187);
 line(xp+493,yp+182,xp+499,yp+180);
 line(xp+499,yp+180,xp+498,yp+184);
 line(xp+486,yp+186,xp+491,yp+187);
 line(xp+485,yp+191,xp+490,yp+191);
 line(xp+488,yp+201,xp+485,yp+233);
 line(xp+485,yp+233,xp+481,yp+233);
 line(xp+442,yp+232,xp+442,yp+238);
 line(xp+442,yp+238,xp+448,yp+242);
 line(xp+449,yp+242,xp+457,yp+246);
 line(xp+457,yp+246,xp+468,yp+245);
 line(xp+469,yp+245,xp+479,yp+240);
 line(xp+479,yp+240,xp+478,yp+237);
 line(xp+479,yp+239,xp+485,yp+259);
 line(xp+485,yp+259,xp+479,yp+264);
 line(xp+479,yp+264,xp+477,yp+258);
 line(xp+477,yp+258,xp+472,yp+259);
 line(xp+472,yp+259,xp+472,yp+266);
 line(xp+472,yp+266,xp+465,yp+266);
 line(xp+465,yp+266,xp+464,yp+262);
 line(xp+464,yp+262,xp+458,yp+262);
 line(xp+458,yp+262,xp+458,yp+267);
 line(xp+458,yp+267,xp+451,yp+267);
 line(xp+451,yp+267,xp+451,yp+260);
 line(xp+451,yp+260,xp+448,yp+260);
 line(xp+448,yp+260,xp+443,yp+266);
 line(xp+443,yp+266,xp+436,yp+262);
 line(xp+436,yp+262,xp+442,yp+256);
 line(xp+442,yp+256,xp+438,yp+255);
 line(xp+438,yp+255,xp+433,yp+261);
 line(xp+433,yp+261,xp+431,yp+256);
 line(xp+431,yp+256,xp+436,yp+248);
 line(xp+436,yp+248,xp+441,yp+238);
 line(xp+440,yp+266,xp+440,yp+276);
 line(xp+440,yp+276,xp+448,yp+295);
 line(xp+450,yp+265,xp+449,yp+271);
 line(xp+449,yp+271,xp+452,yp+278);
 line(xp+452,yp+278,xp+452,yp+283);
 line(xp+452,yp+283,xp+451,yp+291);
 line(xp+451,yp+291,xp+452,yp+295);
 line(xp+466,yp+266,xp+466,yp+276);
 line(xp+466,yp+276,xp+475,yp+294);
 line(xp+473,yp+265,xp+473,yp+270);
 line(xp+473,yp+270,xp+476,yp+277);
 line(xp+476,yp+277,xp+477,yp+289);
 line(xp+477,yp+289,xp+478,yp+292);
 line(xp+445,yp+295,xp+454,yp+295);
 line(xp+454,yp+295,xp+457,yp+291);
 line(xp+457,yp+291,xp+455,yp+299);
 line(xp+455,yp+299,xp+457,yp+302);
 line(xp+445,yp+295,xp+448,yp+299);
 line(xp+449,yp+300,xp+435,yp+299);
 line(xp+435,yp+299,xp+426,yp+302);
 line(xp+426,yp+302,xp+422,yp+307);
 line(xp+422,yp+307,xp+428,yp+309);
 line(xp+428,yp+309,xp+444,yp+310);
 line(xp+445,yp+310,xp+455,yp+307);
 line(xp+472,yp+292,xp+477,yp+295);
 line(xp+477,yp+295,xp+481,yp+290);
 line(xp+481,yp+290,xp+483,yp+300);
 line(xp+483,yp+300,xp+488,yp+306);
 line(xp+488,yp+306,xp+479,yp+309);
 line(xp+479,yp+309,xp+470,yp+309);
 line(xp+470,yp+309,xp+454,yp+310);
 line(xp+454,yp+310,xp+458,yp+302);
 line(xp+458,yp+302,xp+464,yp+299);
 line(xp+465,yp+299,xp+471,yp+299);
 line(xp+471,yp+299,xp+478,yp+301);
 line(xp+478,yp+301,xp+472,yp+293);
 line(xp+409,yp+187,xp+458,yp+188);
 line(xp+428,yp+188,xp+429,yp+202);
 line(xp+429,yp+200,xp+439,yp+201);
 line(xp+438,yp+189,xp+444,yp+193);
 line(xp+444,yp+193,xp+438,yp+195);
 line(xp+438,yp+195,xp+444,yp+199);
 line(xp+444,yp+199,xp+437,yp+204);
 line(xp+437,yp+204,xp+450,yp+204);
 line(xp+409,yp+192,xp+428,yp+194);
 line(xp+450,yp+233,xp+448,yp+242);
 line(xp+460,yp+237,xp+459,yp+246);
 line(xp+455,yp+235,xp+452,yp+242);
 line(xp+458,yp+236,xp+457,yp+245);
 line(xp+457,yp+196,xp+461,yp+210);
 line(xp+461,yp+208,xp+465,yp+218);
 line(xp+465,yp+218,xp+473,yp+225);
 line(xp+473,yp+225,xp+480,yp+228);
 line(xp+463,yp+192,xp+465,yp+206);
 line(xp+465,yp+206,xp+472,yp+216);
 line(xp+472,yp+216,xp+477,yp+219);
 line(xp+477,yp+219,xp+480,yp+219);
 line(xp+486,yp+180,xp+415,yp+126);
 line(xp+482,yp+189,xp+428,yp+242);
 line(xp+457,yp+145,xp+460,yp+150);
 line(xp+464,yp+151,xp+471,yp+149);
 line(xp+465,yp+152,xp+470,yp+153);
 line(xp+460,yp+150,xp+456,yp+153);
 line(xp+460,yp+151,xp+456,yp+150);
 line(xp+458,yp+154,xp+454,yp+157);
 line(xp+454,yp+157,xp+457,yp+161);
 line(xp+453,yp+164,xp+456,yp+167);
 line(xp+456,yp+167,xp+462,yp+167);
 line(xp+462,yp+167,xp+467,yp+164);
 line(xp+454,yp+163,xp+458,yp+163);
 line(xp+458,yp+163,xp+467,yp+164);
 line(xp+457,yp+170,xp+461,yp+170);
 line(xp+409,yp+187,xp+411,yp+183);
 line(xp+406,yp+186,xp+404,yp+185);
 line(xp+404,yp+185,xp+399,yp+182);
 line(xp+397,yp+183,xp+398,yp+198);
 line(xp+398,yp+182,xp+404,yp+184);
 line(xp+398,yp+196,xp+404,yp+196);
 line(xp+404,yp+196,xp+406,yp+187);
 line(xp+399,yp+188,xp+405,yp+188);
 line(xp+401,yp+192,xp+401,yp+192);
 line(xp+401,yp+192,xp+405,yp+192);
 line(xp+405,yp+192,xp+415,yp+192);
 line(xp+405,yp+185,xp+415,yp+185);
 line(xp+465,yp+183,xp+462,yp+185);
 line(xp+464,yp+150,xp+470,yp+145);
 line(xp+476,yp+148,xp+470,yp+145);
 line(xp+475,yp+164,xp+480,yp+162);

 setfillstyle(1,4);
 floodfill(xp+440,yp+300,7);
 floodfill(xp+480,yp+300,7);
 setfillstyle(1,6);
 floodfill(xp+460,yp+255,7);
 floodfill(xp+460,yp+220,7);
 floodfill(xp+455,yp+200,7);
 floodfill(xp+475,yp+200,7);
 floodfill(xp+478,yp+190,7);
 floodfill(xp+475,yp+190,7);
 floodfill(xp+460,yp+188,7);
 floodfill(xp+448,yp+195,7);
 setfillstyle(1,4);
 floodfill(xp+434,yp+190,7);
 floodfill(xp+506,yp+196,7);
 floodfill(xp+479,yp+221,7);
 floodfill(xp+462,yp+199,7);
 floodfill(xp+485,yp+206,7);
 floodfill(xp+465,yp+128,7);
 floodfill(xp+465,yp+138,7);
 setfillstyle(1,13);
 floodfill(xp+475,yp+188,7);
 floodfill(xp+475,yp+182,7);
 floodfill(xp+475,yp+128,7);
 setfillstyle(1,10);
 floodfill(xp+466,yp+158,7);
 floodfill(xp+465,yp+166,7);
 floodfill(xp+450,yp+290,7);
 floodfill(xp+475,yp+290,7);
 floodfill(xp+510,yp+190,7);
 floodfill(xp+410,yp+189,7);
 floodfill(xp+400,yp+189,7);
 floodfill(xp+403,yp+189,7);
 floodfill(xp+403,yp+186,7);
 floodfill(xp+403,yp+195,7);
 floodfill(xp+466,yp+184,7);
 setcolor(6);
 return 0;
}

branch()
{
 int xp=0,yp=-25;
 setcolor(BROWN);
 line(xp+638,yp+337,xp+623,yp+332);
 line(xp+623,yp+332,xp+601,yp+332);
 line(xp+601,yp+332,xp+586,yp+340);
 line(xp+586,yp+340,xp+571,yp+354);
 line(xp+571,yp+354,xp+554,yp+358);
 line(xp+554,yp+358,xp+534,yp+355);
 line(xp+534,yp+355,xp+516,yp+346);
 line(xp+516,yp+346,xp+495,yp+345);
 line(xp+493,yp+344,xp+457,yp+347);
 line(xp+457,yp+347,xp+432,yp+358);
 line(xp+432,yp+358,xp+393,yp+369);
 line(xp+393,yp+369,xp+364,yp+369);
 line(xp+364,yp+369,xp+329,yp+357);
 line(xp+329,yp+357,xp+316,yp+354);
 line(xp+316,yp+354,xp+290,yp+357);
 line(xp+290,yp+357,xp+285,yp+362);
 line(xp+285,yp+362,xp+305,yp+360);
 line(xp+305,yp+360,xp+323,yp+360);
 line(xp+323,yp+360,xp+341,yp+370);
 line(xp+347,yp+370,xp+332,yp+368);
 line(xp+332,yp+368,xp+307,yp+376);
 line(xp+307,yp+376,xp+275,yp+393);
 line(xp+275,yp+393,xp+254,yp+393);
 line(xp+254,yp+393,xp+233,yp+385);
 line(xp+233,yp+385,xp+214,yp+381);
 line(xp+214,yp+381,xp+232,yp+390);
 line(xp+232,yp+390,xp+256,yp+402);
 line(xp+256,yp+402,xp+301,yp+398);
 line(xp+301,yp+398,xp+323,yp+379);
 line(xp+323,yp+379,xp+350,yp+378);
 line(xp+350,yp+378,xp+379,yp+384);
 line(xp+379,yp+384,xp+399,yp+384);
 line(xp+410,yp+378,xp+392,yp+387);
 line(xp+391,yp+387,xp+361,yp+395);
 line(xp+361,yp+395,xp+347,yp+416);
 line(xp+347,yp+416,xp+347,yp+424);
 line(xp+347,yp+424,xp+354,yp+409);
 line(xp+354,yp+409,xp+367,yp+398);
 line(xp+367,yp+398,xp+403,yp+389);
 line(xp+403,yp+389,xp+428,yp+373);
 line(xp+428,yp+373,xp+458,yp+363);
 line(xp+458,yp+363,xp+493,yp+359);
 line(xp+500,yp+355,xp+485,yp+363);
 line(xp+485,yp+363,xp+460,yp+386);
 line(xp+460,yp+386,xp+419,yp+405);
 line(xp+419,yp+405,xp+450,yp+394);
 line(xp+450,yp+394,xp+460,yp+393);
 line(xp+460,yp+393,xp+447,yp+403);
 line(xp+447,yp+403,xp+442,yp+417);
 line(xp+442,yp+417,xp+445,yp+433);
 line(xp+445,yp+433,xp+446,yp+417);
 line(xp+446,yp+417,xp+457,yp+402);
 line(xp+457,yp+402,xp+468,yp+396);
 line(xp+468,yp+396,xp+473,yp+382);
 line(xp+473,yp+382,xp+495,yp+361);
 line(xp+495,yp+361,xp+514,yp+354);
 line(xp+503,yp+359,xp+522,yp+365);
 line(xp+522,yp+365,xp+547,yp+373);
 line(xp+547,yp+373,xp+580,yp+374);
 line(xp+580,yp+374,xp+593,yp+366);
 line(xp+593,yp+366,xp+598,yp+358);
 line(xp+598,yp+358,xp+623,yp+355);
 line(xp+618,yp+356,xp+647,yp+371);
 setcolor(BROWN);
 setfillstyle(SOLID_FILL,BROWN);
 line(xp+636,yp+335,xp+636,yp+365);
 line(xp+496,yp+344,xp+489,yp+344);
 line(xp+393,yp+368,xp+404,yp+368);
 line(xp+513,yp+345,xp+523,yp+348);
 line(xp+620,yp+357,xp+611,yp+353);
 line(xp+635,yp+363,xp+639,yp+363);
 line(xp+635,yp+363,xp+631,yp+364);
 line(xp+638,yp+341,xp+630,yp+327);
 setfillstyle(1,BROWN);
 floodfill(xp+403,yp+374,BROWN);
 return 0;
}

leaves(int xp, int yp)
{
 setcolor(GREEN);
 ellipse(xp+244,yp+411,0,360,2,14);
 ellipse(xp+219,yp+398,0,360,3,16);
 ellipse(xp+269,yp+382,0,360,4,10);
 ellipse(xp+357,yp+424,0,360,8,3);
 ellipse(xp+346,yp+431,0,360,2,10);
 ellipse(xp+387,yp+402,0,360,4,6);
 ellipse(xp+203,yp+379,0,360,12,2);
 ellipse(xp+287,yp+370,0,360,2,8);
 ellipse(xp+277,yp+360,0,360,9,2);
 ellipse(xp+423,yp+415,0,360,3,12);
 ellipse(xp+412,yp+401,0,360,10,3);
 ellipse(xp+460,yp+431,0,360,16,4);
 ellipse(xp+443,yp+441,0,360,2,11);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(xp+460,yp+430,GREEN);
 floodfill(xp+444,yp+442,GREEN);
 floodfill(xp+423,yp+417,GREEN);
 floodfill(xp+413,yp+402,GREEN);
 floodfill(xp+388,yp+404,GREEN);
 floodfill(xp+360,yp+424,GREEN);
 floodfill(xp+347,yp+432,GREEN);
 floodfill(xp+245,yp+409,GREEN);
 floodfill(xp+220,yp+398,GREEN);
 floodfill(xp+200,yp+379,GREEN);
 floodfill(xp+270,yp+381,GREEN);
 floodfill(xp+288,yp+371,GREEN);
 floodfill(xp+276,yp+359,GREEN);
 return 0;
}

welcome()
{
 tree();
 setfillstyle(1,DARKGRAY);
 bar(maxx/2-150,maxy/2-180,maxx/2+140,maxy/2+110);
 setcolor(15);
 outtextxy(maxx/2-80,maxy/2-150,"WELCOME TO ARCHERY");
 outtextxy(maxx/2-120,maxy/2+80,"PRESS ANY KEY TO CONTINUE..!");
 setcolor(2);
 outtextxy(maxx/2-120,maxy/2-100,"Instructions:");
 outtextxy(maxx/2-120,maxy/2-80,"You have 10 arrows");
 outtextxy(maxx/2-120,maxy/2-60,"Points are as follows:-");
 setcolor(RED);
 outtextxy(maxx/2-100,maxy/2-40,"RED->100 pts.");
 setcolor(YELLOW);
 outtextxy(maxx/2-100,maxy/2-20,"YELLOW->70 pts.");
 setcolor(BLUE);
 outtextxy(maxx/2-100,maxy/2,"BLUE->50 pts.");
 setcolor(CYAN);
 outtextxy(maxx/2-100,maxy/2+20,"CYAN->40 pts.");
 setcolor(BLACK);
 outtextxy(maxx/2-100,maxy/2+40,"GREY->35 pts.");
 getch();
 setfillstyle(1,0);
 setcolor(0);
 bar(maxx/2-150,maxy/2-180,maxx/2+140,maxy/2+110);
 return 0;
}