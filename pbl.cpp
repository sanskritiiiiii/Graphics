#include <graphics.h>
#include <iostream>
using namespace std;
int c1=100, c2=220, c3=70, c4=260, c5=110, c6=210, c7=120, c8=200, c9=160, c10=120, c11=260, c12=260;
int page = 0, diff;
int main(){
delay(1000);
cout<<"WELCOME TO OUR RACING GAME"<<endl<<endl;
delay(2000);
cout<<"Please Enter the Difficulty Level"<<endl<<endl;
delay(2000);
cout<<"Enter 1 for Easy, 2 for Medium and 3 for Hard Difficulty: ";
cin>>diff;
cout<<endl;
if (diff == 1)
{
cout<<"You Chose Easy Difficulty"<<endl<<endl;
delay(2000);
cout<<"The Game will start now.."<<endl<<endl;
delay(2000);
int c1=100, c2=220, c3=70, c4=260, c5=110, c6=210, c7=120, c8=200, c9=160, c10=120,
c11=260, c12=260;
int page = 0;
initwindow(1900, 1000);
//race lines
8
line(0, 220, 1900, 220);
line(0, 410, 1900, 410);
line(0, 600, 1900, 600);
line(0, 790, 1900, 790);
//bush1
arc(300, 220, 60, 180, 50);
arc(350, 195, 30, 150, 50);
arc(400, 220, 0, 120, 50);
setfillstyle(SOLID_FILL, 10);
floodfill(350, 195, WHITE);
//bush2
arc(1200, 200, 45, 197.5, 75);
arc(1300, 175, 30, 150, 75);
arc(1400, 200, 343.5, 135, 75);
setfillstyle(SOLID_FILL, 10);
floodfill(1300, 175, WHITE);
//Racing game board
line(600, 10, 600, 220);
line(1000, 10, 1000, 220);
line(600, 10, 1000, 10);
line(600, 100, 1000, 100);
outtextxy(700, 35, "Welcome to our Racing Game");
outtextxy(750, 65, "All The Best!");
//Finish Board
line(1800, 10, 1800, 220);
rectangle(1600, 10, 1800, 100);
outtextxy(1675, 35, "FINISH");
outtextxy(1682.5, 60, "LINE");
//signal
rectangle(200, 120, 210, 220);//signal base
9
rectangle(180, 10, 230, 120);//signal top
circle(205, 30, 15);//red
circle(205, 65, 15);//yellow
circle(205, 100, 15);//green
//lane names
outtextxy(20, 315, "Lane1 (You)");
outtextxy(20, 505, "Lane2");
outtextxy(20, 695, "Lane3");
outtextxy(20, 885, "Lane4");
//car1
circle(100, 395, 15);//backoutertyre
circle(220, 395, 15);//frontoutertyre
circle(100, 395, 10);//backinnertyre
circle(220 , 395, 10);//frontinnertyre
rectangle(70, 340, 260, 380);//carbasebody
rectangle(110, 270, 210, 340);//cartopbody
rectangle(120, 280, 200, 330);//carwindowframe
line(160, 280, 160, 330);//carwindowdivider
arc(260, 360, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 11);//cartopbodycolor
floodfill(111, 271, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 11);//carbasebodycolor
floodfill(71, 341, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261, 360, WHITE);////headlightcolor
//car2
circle(100, 585, 15);//backoutertyre
10
circle(220, 585, 15);//frontoutertyre
circle(100, 585, 10);//backinnertyre
circle(220, 585, 10);//frontinnertyre
rectangle(70, 530, 260, 570);//carbasebody
rectangle(110, 460, 210, 530);//cartopbody
rectangle(120, 470, 200, 520);//carwindowframe
line(160, 470, 160, 520);//carwindowdivider
arc(260, 550, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 12);//cartopbodycolor
floodfill(111, 461, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 12);//carbasebodycolor
floodfill(71, 531, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86, 585, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206, 585, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261, 550, WHITE);////headlightcolor
//car3
circle(100, 775, 15);//backoutertyre
circle(220, 775, 15);//frontoutertyre
circle(100, 775, 10);//backinnertyre
circle(220, 775, 10);//frontinnertyre
rectangle(70, 720, 260, 760);//carbasebody
rectangle(110, 650, 210, 720);//cartopbody
rectangle(120, 660, 200, 710);//carwindowframe
line(160, 660, 160, 710);//carwindowdivider
arc(260, 740, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 10);//cartopbodycolor
floodfill(111, 651, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 10);//carbasebodycolor
11
floodfill(71, 721, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86, 775, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206, 775, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261, 740, WHITE);////headlightcolor
//car4
circle(100, 965, 15);//backoutertyre
circle(220, 965, 15);//frontoutertyre
circle(100, 965, 10);//backinnertyre
circle(220, 965, 10);//frontinnertyre
rectangle(70, 910, 260, 950);//carbasebody
rectangle(110, 840, 210, 910);//cartopbody
rectangle(120, 850, 200, 900);//carwindowframe
line(160, 850, 160, 900);//carwindowdivider
arc(260, 930, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 13);//cartopbodycolor
floodfill(111, 841, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 13);//carbasebodycolor
floodfill(71, 911, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86, 965, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206, 965, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261, 930, WHITE);////headlightcolor
for (int j = 0; j<3; j++)
{
if (j==0)
{
circle(205, 30, 15);//red
12
setfillstyle(SOLID_FILL, 12);
floodfill(205, 30, WHITE);
delay(2000);
circle(205, 30, 15);//redtoblack
setfillstyle(SOLID_FILL, 0);
floodfill(205, 30, WHITE);
continue;
}
else if(j==1)
{
circle(205, 65, 15);//yellow
setfillstyle(SOLID_FILL, 14);
floodfill(205, 65, WHITE);
delay(2000);
circle(205, 65, 15);//yellowtoblack
setfillstyle(SOLID_FILL, 0);
floodfill(205, 65, WHITE);
continue;
}
else if(j==2)
{
circle(205, 100, 15);//green
setfillstyle(SOLID_FILL, 10);
floodfill(205, 100, WHITE);
}
}
for (int i = 1; i > 0; i++)
{
setactivepage(page);
setvisualpage(1-page);
13
cleardevice();
//race lines
line(0, 220, 1900, 220);
line(0, 410, 1900, 410);
line(0, 600, 1900, 600);
line(0, 790, 1900, 790);
//bush1
arc(300, 220, 60, 180, 50);
arc(350, 195, 30, 150, 50);
arc(400, 220, 0, 120, 50);
setfillstyle(SOLID_FILL, 10);
floodfill(350, 195, WHITE);
//bush2
arc(1200, 200, 45, 197.5, 75);
arc(1300, 175, 30, 150, 75);
arc(1400, 200, 343.5, 135, 75);
setfillstyle(SOLID_FILL, 10);
floodfill(1300, 175, WHITE);
//Racing game board
line(600, 10, 600, 220);
line(1000, 10, 1000, 220);
line(600, 10, 1000, 10);
line(600, 100, 1000, 100);
outtextxy(700, 35, "Welcome to our Racing Game");
outtextxy(750, 65, "All The Best!");
//Finish Board
line(1800, 10, 1800, 220);
rectangle(1600, 10, 1800, 100);
outtextxy(1675, 35, "FINISH");
outtextxy(1682.5, 60, "LINE");
14
//signal
rectangle(200, 120, 210, 220);//signal base
rectangle(180, 10, 230, 120);//signal top
circle(205, 30, 15);//red
circle(205, 65, 15);//yellow
circle(205, 100, 15);//green
rectangle(200, 120, 210, 220);//signal base
rectangle(180, 10, 230, 120);//signal top
circle(205, 100, 15);//green
setfillstyle(SOLID_FILL, 10);
floodfill(205, 100, WHITE);
//lane names
outtextxy(20, 315, "Lane1 (You)");
outtextxy(20, 505, "Lane2");
outtextxy(20, 695, "Lane3");
outtextxy(20, 885, "Lane4");
if (GetAsyncKeyState(VK_RIGHT))
{
//car1
c1+=1.5, c2+=1.5, c3+=1.5, c4+=1.5, c5+=1.5, c6+=1.5, c7+=1.5,
c8+=1.5, c9+=1.5, c10+=1.5;
circle(c1, 395, 15);//backoutertyre c1
circle(c2, 395, 15);//frontoutertyre c2
circle(c1, 395, 10);//backinnertyre c1
circle(c2, 395, 10);//frontinnertyre c2
rectangle(c3, 340, c4, 380);//carbasebody c3 c4
rectangle(c5, 270, c6, 340);//cartopbody c5 c6
rectangle(c7, 280, c8, 330);//carwindowframe c7 c8
line(c9, 280, c9, 330);//carwindowdivider c9
arc(c4, 360, 270, 90, 10);//headlight c4
15
setfillstyle(SOLID_FILL, 11);//cartopbodycolor
floodfill(c5+1, 271, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 11);//carbasebodycolor
floodfill(c3+1, 341, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(c1-14, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(c2-14, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(c4+1, 360, WHITE);////headlightcolor
}
if (GetAsyncKeyState(VK_LEFT))
{
//car1
c1-=1.5, c2-=1.5, c3-=1.5, c4-=1.5, c5-=1.5, c6-=1.5, c7-=1.5, c8-=1.5,
c9-=1.5, c10-=1.5;
circle(c1, 395, 15);//backoutertyre c1
circle(c2, 395, 15);//frontoutertyre c2
circle(c1, 395, 10);//backinnertyre c1
circle(c2, 395, 10);//frontinnertyre c2
rectangle(c3, 340, c4, 380);//carbasebody c3 c4
rectangle(c5, 270, c6, 340);//cartopbody c5 c6
rectangle(c7, 280, c8, 330);//carwindowframe c7 c8
line(c9, 280, c9, 330);//carwindowdivider c9
arc(c4, 360, 270, 90, 10);//headlight c4
setfillstyle(SOLID_FILL, 11);//cartopbodycolor
floodfill(c5+1, 271, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 11);//carbasebodycolor
floodfill(c3+1, 341, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(c1-14, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
16
floodfill(c2-14, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(c4+1, 360, WHITE);////headlightcolor
}
else
{
circle(c1, 395, 15);//backoutertyre c1
circle(c2, 395, 15);//frontoutertyre c2
circle(c1, 395, 10);//backinnertyre c1
circle(c2, 395, 10);//frontinnertyre c2
rectangle(c3, 340, c4, 380);//carbasebody c3 c4
rectangle(c5, 270, c6, 340);//cartopbody c5 c6
rectangle(c7, 280, c8, 330);//carwindowframe c7 c8
line(c9, 280, c9, 330);//carwindowdivider c9
arc(c4, 360, 270, 90, 10);//headlight c4
setfillstyle(SOLID_FILL, 11);//cartopbodycolor
floodfill(c5+1, 271, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 11);//carbasebodycolor
floodfill(c3+1, 341, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(c1-14, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(c2-14, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(c4+1, 360, WHITE);////headlightcolor
}
//car2
circle(100+0.8*i, 585, 15);//backoutertyre
circle(220+0.8*i, 585, 15);//frontoutertyre
circle(100+0.8*i, 585, 10);//backinnertyre
circle(220+0.8*i, 585, 10);//frontinnertyre
17
rectangle(70+0.8*i, 530, 260+0.8*i, 570);//carbasebody
rectangle(110+0.8*i, 460, 210+0.8*i, 530);//cartopbody
rectangle(120+0.8*i, 470, 200+0.8*i, 520);//carwindowframe
line(160+0.8*i, 470, 160+0.8*i, 520);//carwindowdivider
arc(260+0.8*i, 550, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 12);//cartopbodycolor
floodfill(111+0.8*i, 461, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 12);//carbasebodycolor
floodfill(71+0.8*i, 531, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86+0.8*i, 585, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206+0.8*i, 585, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261+0.8*i, 550, WHITE);////headlightcolor
//car3
circle(100+0.5*i, 775, 15);//backoutertyre
circle(220+0.5*i, 775, 15);//frontoutertyre
circle(100+0.5*i, 775, 10);//backinnertyre
circle(220+0.5*i, 775, 10);//frontinnertyre
rectangle(70+0.5*i, 720, 260+0.5*i, 760);//carbasebody
rectangle(110+0.5*i, 650, 210+0.5*i, 720);//cartopbody
rectangle(120+0.5*i, 660, 200+0.5*i, 710);//carwindowframe
line(160+0.5*i, 660, 160+0.5*i, 710);//carwindowdivider
arc(260+0.5*i, 740, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 10);//cartopbodycolor
floodfill(111+0.5*i, 651, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 10);//carbasebodycolor
floodfill(71+0.5*i, 721, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86+0.5*i, 775, WHITE);////carbacktyrecolor
18
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206+0.5*i, 775, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261+0.5*i, 740, WHITE);////headlightcolor
//car4
circle(100+0.7*i, 965, 15);//backoutertyre
circle(220+0.7*i, 965, 15);//frontoutertyre
circle(100+0.7*i, 965, 10);//backinnertyre
circle(220+0.7*i, 965, 10);//frontinnertyre
rectangle(70+0.7*i, 910, 260+0.7*i, 950);//carbasebody
rectangle(110+0.7*i, 840, 210+0.7*i, 910);//cartopbody
rectangle(120+0.7*i, 850, 200+0.7*i, 900);//carwindowframe
line(160+0.7*i, 850, 160+0.7*i, 900);//carwindowdivider
arc(260+0.7*i, 930, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 13);//cartopbodycolor
floodfill(111+0.7*i, 841, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 13);//carbasebodycolor
floodfill(71+0.7*i, 911, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86+0.7*i, 965, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206+0.7*i, 965, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261+0.7*i, 930, WHITE);////headlightcolor
page = 1 - page;
}
getch();
}
else if (diff == 2)
{
19
cout<<"You Chose Medium Difficulty"<<endl<<endl;
delay(2000);
cout<<"The Game will start now.."<<endl<<endl;
delay(2000);
int c1=100, c2=220, c3=70, c4=260, c5=110, c6=210, c7=120, c8=200, c9=160, c10=120,
c11=260, c12=260;//11=player,12=car
int page = 0;
initwindow(1900, 1000);
//race lines
line(0, 220, 1900, 220);
line(0, 410, 1900, 410);
line(0, 600, 1900, 600);
line(0, 790, 1900, 790);
//bush1
arc(300, 220, 60, 180, 50);
arc(350, 195, 30, 150, 50);
arc(400, 220, 0, 120, 50);
setfillstyle(SOLID_FILL, 10);
floodfill(350, 195, WHITE);
//bush2
arc(1200, 200, 45, 197.5, 75);
arc(1300, 175, 30, 150, 75);
arc(1400, 200, 343.5, 135, 75);
setfillstyle(SOLID_FILL, 10);
floodfill(1300, 175, WHITE);
//Racing game board
line(600, 10, 600, 220);
line(1000, 10, 1000, 220);
line(600, 10, 1000, 10);
line(600, 100, 1000, 100);
20
outtextxy(700, 35, "Welcome to our Racing Game");
outtextxy(750, 65, "All The Best!");
//Finish Board
line(1800, 10, 1800, 220);
rectangle(1600, 10, 1800, 100);
outtextxy(1675, 35, "FINISH");
outtextxy(1682.5, 60, "LINE");
//signal
rectangle(200, 120, 210, 220);//signal base
rectangle(180, 10, 230, 120);//signal top
circle(205, 30, 15);//red
circle(205, 65, 15);//yellow
circle(205, 100, 15);//green
//lane names
outtextxy(20, 315, "Lane1 (You)");
outtextxy(20, 505, "Lane2");
outtextxy(20, 695, "Lane3");
outtextxy(20, 885, "Lane4");
//car1
circle(100, 395, 15);//backoutertyre
circle(220, 395, 15);//frontoutertyre
circle(100, 395, 10);//backinnertyre
circle(220 , 395, 10);//frontinnertyre
rectangle(70, 340, 260, 380);//carbasebody
rectangle(110, 270, 210, 340);//cartopbody
rectangle(120, 280, 200, 330);//carwindowframe
line(160, 280, 160, 330);//carwindowdivider
arc(260, 360, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 11);//cartopbodycolor
floodfill(111, 271, WHITE);//cartopbodycolor
21
setfillstyle(SOLID_FILL, 11);//carbasebodycolor
floodfill(71, 341, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261, 360, WHITE);////headlightcolor
//car2
circle(100, 585, 15);//backoutertyre
circle(220, 585, 15);//frontoutertyre
circle(100, 585, 10);//backinnertyre
circle(220, 585, 10);//frontinnertyre
rectangle(70, 530, 260, 570);//carbasebody
rectangle(110, 460, 210, 530);//cartopbody
rectangle(120, 470, 200, 520);//carwindowframe
line(160, 470, 160, 520);//carwindowdivider
arc(260, 550, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 12);//cartopbodycolor
floodfill(111, 461, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 12);//carbasebodycolor
floodfill(71, 531, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86, 585, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206, 585, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261, 550, WHITE);////headlightcolor
//car3
circle(100, 775, 15);//backoutertyre
circle(220, 775, 15);//frontoutertyre
circle(100, 775, 10);//backinnertyre
22
circle(220, 775, 10);//frontinnertyre
rectangle(70, 720, 260, 760);//carbasebody
rectangle(110, 650, 210, 720);//cartopbody
rectangle(120, 660, 200, 710);//carwindowframe
line(160, 660, 160, 710);//carwindowdivider
arc(260, 740, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 10);//cartopbodycolor
floodfill(111, 651, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 10);//carbasebodycolor
floodfill(71, 721, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86, 775, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206, 775, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261, 740, WHITE);////headlightcolor
//car4
circle(100, 965, 15);//backoutertyre
circle(220, 965, 15);//frontoutertyre
circle(100, 965, 10);//backinnertyre
circle(220, 965, 10);//frontinnertyre
rectangle(70, 910, 260, 950);//carbasebody
rectangle(110, 840, 210, 910);//cartopbody
rectangle(120, 850, 200, 900);//carwindowframe
line(160, 850, 160, 900);//carwindowdivider
arc(260, 930, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 13);//cartopbodycolor
floodfill(111, 841, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 13);//carbasebodycolor
floodfill(71, 911, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86, 965, WHITE);////carbacktyrecolor
23
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206, 965, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261, 930, WHITE);////headlightcolor
for (int j = 0; j<3; j++)
{
if (j==0)
{
circle(205, 30, 15);//red
setfillstyle(SOLID_FILL, 12);
floodfill(205, 30, WHITE);
delay(2000);
circle(205, 30, 15);//redtoblack
setfillstyle(SOLID_FILL, 0);
floodfill(205, 30, WHITE);
continue;
}
else if(j==1)
{
circle(205, 65, 15);//yellow
setfillstyle(SOLID_FILL, 14);
floodfill(205, 65, WHITE);
delay(2000);
circle(205, 65, 15);//yellowtoblack
setfillstyle(SOLID_FILL, 0);
floodfill(205, 65, WHITE);
continue;
}
else if(j==2)
{
24
circle(205, 100, 15);//green
setfillstyle(SOLID_FILL, 10);
floodfill(205, 100, WHITE);
}
}
for (int i = 1; i > 0; i++)
{
setactivepage(page);
setvisualpage(1-page);
cleardevice();
//race lines
line(0, 220, 1900, 220);
line(0, 410, 1900, 410);
line(0, 600, 1900, 600);
line(0, 790, 1900, 790);
//bush1
arc(300, 220, 60, 180, 50);
arc(350, 195, 30, 150, 50);
arc(400, 220, 0, 120, 50);
setfillstyle(SOLID_FILL, 10);
floodfill(350, 195, WHITE);
//bush2
arc(1200, 200, 45, 197.5, 75);
arc(1300, 175, 30, 150, 75);
arc(1400, 200, 343.5, 135, 75);
setfillstyle(SOLID_FILL, 10);
floodfill(1300, 175, WHITE);
//Racing game board
line(600, 10, 600, 220);
line(1000, 10, 1000, 220);
25
line(600, 10, 1000, 10);
line(600, 100, 1000, 100);
outtextxy(700, 35, "Welcome to our Racing Game");
outtextxy(750, 65, "All The Best!");
//Finish Board
line(1800, 10, 1800, 220);
rectangle(1600, 10, 1800, 100);
outtextxy(1675, 35, "FINISH");
outtextxy(1682.5, 60, "LINE");
//signal
rectangle(200, 120, 210, 220);//signal base
rectangle(180, 10, 230, 120);//signal top
circle(205, 30, 15);//red
circle(205, 65, 15);//yellow
circle(205, 100, 15);//green
rectangle(200, 120, 210, 220);//signal base
rectangle(180, 10, 230, 120);//signal top
circle(205, 100, 15);//green
setfillstyle(SOLID_FILL, 10);
floodfill(205, 100, WHITE);
//lane names
outtextxy(20, 315, "Lane1 (You)");
outtextxy(20, 505, "Lane2");
outtextxy(20, 695, "Lane3");
outtextxy(20, 885, "Lane4");
if (GetAsyncKeyState(VK_RIGHT))
{
//car1
c1+=1.3, c2+=1.3, c3+=1.3, c4+=1.3, c5+=1.3, c6+=1.3, c7+=1.3,
c8+=1.3, c9+=1.3, c10+=1.3;
26
circle(c1, 395, 15);//backoutertyre c1
circle(c2, 395, 15);//frontoutertyre c2
circle(c1, 395, 10);//backinnertyre c1
circle(c2, 395, 10);//frontinnertyre c2
rectangle(c3, 340, c4, 380);//carbasebody c3 c4
rectangle(c5, 270, c6, 340);//cartopbody c5 c6
rectangle(c7, 280, c8, 330);//carwindowframe c7 c8
line(c9, 280, c9, 330);//carwindowdivider c9
arc(c4, 360, 270, 90, 10);//headlight c4
setfillstyle(SOLID_FILL, 11);//cartopbodycolor
floodfill(c5+1, 271, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 11);//carbasebodycolor
floodfill(c3+1, 341, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(c1-14, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(c2-14, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(c4+1, 360, WHITE);////headlightcolor
}
if (GetAsyncKeyState(VK_LEFT))
{
//car1
c1-=1.3, c2-=1.3, c3-=1.3, c4-=1.3, c5-=1.3, c6-=1.3, c7-=1.3, c8-=1.3,
c9-=1.3, c10-=1.3;
circle(c1, 395, 15);//backoutertyre c1
circle(c2, 395, 15);//frontoutertyre c2
circle(c1, 395, 10);//backinnertyre c1
circle(c2, 395, 10);//frontinnertyre c2
rectangle(c3, 340, c4, 380);//carbasebody c3 c4
rectangle(c5, 270, c6, 340);//cartopbody c5 c6
rectangle(c7, 280, c8, 330);//carwindowframe c7 c8
27
line(c9, 280, c9, 330);//carwindowdivider c9
arc(c4, 360, 270, 90, 10);//headlight c4
setfillstyle(SOLID_FILL, 11);//cartopbodycolor
floodfill(c5+1, 271, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 11);//carbasebodycolor
floodfill(c3+1, 341, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(c1-14, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(c2-14, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(c4+1, 360, WHITE);////headlightcolor
}
else
{
circle(c1, 395, 15);//backoutertyre c1
circle(c2, 395, 15);//frontoutertyre c2
circle(c1, 395, 10);//backinnertyre c1
circle(c2, 395, 10);//frontinnertyre c2
rectangle(c3, 340, c4, 380);//carbasebody c3 c4
rectangle(c5, 270, c6, 340);//cartopbody c5 c6
rectangle(c7, 280, c8, 330);//carwindowframe c7 c8
line(c9, 280, c9, 330);//carwindowdivider c9
arc(c4, 360, 270, 90, 10);//headlight c4
setfillstyle(SOLID_FILL, 11);//cartopbodycolor
floodfill(c5+1, 271, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 11);//carbasebodycolor
floodfill(c3+1, 341, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(c1-14, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
28
floodfill(c2-14, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(c4+1, 360, WHITE);////headlightcolor
}
//car2
circle(100+0.8*i, 585, 15);//backoutertyre
circle(220+0.8*i, 585, 15);//frontoutertyre
circle(100+0.8*i, 585, 10);//backinnertyre
circle(220+0.8*i, 585, 10);//frontinnertyre
rectangle(70+0.8*i, 530, 260+0.8*i, 570);//carbasebody
rectangle(110+0.8*i, 460, 210+0.8*i, 530);//cartopbody
rectangle(120+0.8*i, 470, 200+0.8*i, 520);//carwindowframe
line(160+0.8*i, 470, 160+0.8*i, 520);//carwindowdivider
arc(260+0.8*i, 550, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 12);//cartopbodycolor
floodfill(111+0.8*i, 461, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 12);//carbasebodycolor
floodfill(71+0.8*i, 531, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86+0.8*i, 585, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206+0.8*i, 585, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261+0.8*i, 550, WHITE);////headlightcolor
//car3
circle(100+0.5*i, 775, 15);//backoutertyre
circle(220+0.5*i, 775, 15);//frontoutertyre
circle(100+0.5*i, 775, 10);//backinnertyre
circle(220+0.5*i, 775, 10);//frontinnertyre
rectangle(70+0.5*i, 720, 260+0.5*i, 760);//carbasebody
rectangle(110+0.5*i, 650, 210+0.5*i, 720);//cartopbody
rectangle(120+0.5*i, 660, 200+0.5*i, 710);//carwindowframe
29
line(160+0.5*i, 660, 160+0.5*i, 710);//carwindowdivider
arc(260+0.5*i, 740, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 10);//cartopbodycolor
floodfill(111+0.5*i, 651, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 10);//carbasebodycolor
floodfill(71+0.5*i, 721, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86+0.5*i, 775, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206+0.5*i, 775, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261+0.5*i, 740, WHITE);////headlightcolor
//car4
circle(100+0.7*i, 965, 15);//backoutertyre
circle(220+0.7*i, 965, 15);//frontoutertyre
circle(100+0.7*i, 965, 10);//backinnertyre
circle(220+0.7*i, 965, 10);//frontinnertyre
rectangle(70+0.7*i, 910, 260+0.7*i, 950);//carbasebody
rectangle(110+0.7*i, 840, 210+0.7*i, 910);//cartopbody
rectangle(120+0.7*i, 850, 200+0.7*i, 900);//carwindowframe
line(160+0.7*i, 850, 160+0.7*i, 900);//carwindowdivider
arc(260+0.7*i, 930, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 13);//cartopbodycolor
floodfill(111+0.7*i, 841, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 13);//carbasebodycolor
floodfill(71+0.7*i, 911, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86+0.7*i, 965, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206+0.7*i, 965, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261+0.7*i, 930, WHITE);////headlightcolor
30
page = 1 - page;
}
getch();
}
if (diff == 3)
{
cout<<"You Chose Hard Difficulty"<<endl<<endl;
delay(2000);
cout<<"The Game will start now.."<<endl<<endl;
delay(2000);
int c1=100, c2=220, c3=70, c4=260, c5=110, c6=210, c7=120, c8=200, c9=160, c10=120,
c11=260, c12=260;//11=player,12=car
int page = 0;
initwindow(1900, 1000);
//race lines
line(0, 220, 1900, 220);
line(0, 410, 1900, 410);
line(0, 600, 1900, 600);
line(0, 790, 1900, 790);
//bush1
arc(300, 220, 60, 180, 50);
arc(350, 195, 30, 150, 50);
arc(400, 220, 0, 120, 50);
setfillstyle(SOLID_FILL, 10);
floodfill(350, 195, WHITE);
//bush2
arc(1200, 200, 45, 197.5, 75);
arc(1300, 175, 30, 150, 75);
31
arc(1400, 200, 343.5, 135, 75);
setfillstyle(SOLID_FILL, 10);
floodfill(1300, 175, WHITE);
//Racing game board
line(600, 10, 600, 220);
line(1000, 10, 1000, 220);
line(600, 10, 1000, 10);
line(600, 100, 1000, 100);
outtextxy(700, 35, "Welcome to our Racing Game");
outtextxy(750, 65, "All The Best!");
//Finish Board
line(1800, 10, 1800, 220);
rectangle(1600, 10, 1800, 100);
outtextxy(1675, 35, "FINISH");
outtextxy(1682.5, 60, "LINE");
//signal
rectangle(200, 120, 210, 220);//signal base
rectangle(180, 10, 230, 120);//signal top
circle(205, 30, 15);//red
circle(205, 65, 15);//yellow
circle(205, 100, 15);//green
//lane names
outtextxy(20, 315, "Lane1 (You)");
outtextxy(20, 505, "Lane2");
outtextxy(20, 695, "Lane3");
outtextxy(20, 885, "Lane4");
//car1
circle(100, 395, 15);//backoutertyre
circle(220, 395, 15);//frontoutertyre
circle(100, 395, 10);//backinnertyre
32
circle(220 , 395, 10);//frontinnertyre
rectangle(70, 340, 260, 380);//carbasebody
rectangle(110, 270, 210, 340);//cartopbody
rectangle(120, 280, 200, 330);//carwindowframe
line(160, 280, 160, 330);//carwindowdivider
arc(260, 360, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 11);//cartopbodycolor
floodfill(111, 271, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 11);//carbasebodycolor
floodfill(71, 341, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261, 360, WHITE);////headlightcolor
//car2
circle(100, 585, 15);//backoutertyre
circle(220, 585, 15);//frontoutertyre
circle(100, 585, 10);//backinnertyre
circle(220, 585, 10);//frontinnertyre
rectangle(70, 530, 260, 570);//carbasebody
rectangle(110, 460, 210, 530);//cartopbody
rectangle(120, 470, 200, 520);//carwindowframe
line(160, 470, 160, 520);//carwindowdivider
arc(260, 550, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 12);//cartopbodycolor
floodfill(111, 461, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 12);//carbasebodycolor
floodfill(71, 531, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86, 585, WHITE);////carbacktyrecolor
33
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206, 585, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261, 550, WHITE);////headlightcolor
//car3
circle(100, 775, 15);//backoutertyre
circle(220, 775, 15);//frontoutertyre
circle(100, 775, 10);//backinnertyre
circle(220, 775, 10);//frontinnertyre
rectangle(70, 720, 260, 760);//carbasebody
rectangle(110, 650, 210, 720);//cartopbody
rectangle(120, 660, 200, 710);//carwindowframe
line(160, 660, 160, 710);//carwindowdivider
arc(260, 740, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 10);//cartopbodycolor
floodfill(111, 651, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 10);//carbasebodycolor
floodfill(71, 721, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86, 775, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206, 775, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261, 740, WHITE);////headlightcolor
//car4
circle(100, 965, 15);//backoutertyre
circle(220, 965, 15);//frontoutertyre
circle(100, 965, 10);//backinnertyre
circle(220, 965, 10);//frontinnertyre
rectangle(70, 910, 260, 950);//carbasebody
rectangle(110, 840, 210, 910);//cartopbody
rectangle(120, 850, 200, 900);//carwindowframe
34
line(160, 850, 160, 900);//carwindowdivider
arc(260, 930, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 13);//cartopbodycolor
floodfill(111, 841, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 13);//carbasebodycolor
floodfill(71, 911, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86, 965, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206, 965, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261, 930, WHITE);////headlightcolor
for (int j = 0; j<3; j++)
{
if (j==0)
{
circle(205, 30, 15);//red
setfillstyle(SOLID_FILL, 12);
floodfill(205, 30, WHITE);
delay(2000);
circle(205, 30, 15);//redtoblack
setfillstyle(SOLID_FILL, 0);
floodfill(205, 30, WHITE);
continue;
}
else if(j==1)
{
circle(205, 65, 15);//yellow
setfillstyle(SOLID_FILL, 14);
floodfill(205, 65, WHITE);
delay(2000);
35
circle(205, 65, 15);//yellowtoblack
setfillstyle(SOLID_FILL, 0);
floodfill(205, 65, WHITE);
continue;
}
else if(j==2)
{
circle(205, 100, 15);//green
setfillstyle(SOLID_FILL, 10);
floodfill(205, 100, WHITE);
}
}
for (int i = 1; i > 0; i++)
{
setactivepage(page);
setvisualpage(1-page);
cleardevice();
//race lines
line(0, 220, 1900, 220);
line(0, 410, 1900, 410);
line(0, 600, 1900, 600);
line(0, 790, 1900, 790);
//bush1
arc(300, 220, 60, 180, 50);
arc(350, 195, 30, 150, 50);
arc(400, 220, 0, 120, 50);
setfillstyle(SOLID_FILL, 10);
floodfill(350, 195, WHITE);
//bush2
36
arc(1200, 200, 45, 197.5, 75);
arc(1300, 175, 30, 150, 75);
arc(1400, 200, 343.5, 135, 75);
setfillstyle(SOLID_FILL, 10);
floodfill(1300, 175, WHITE);
//Racing game board
line(600, 10, 600, 220);
line(1000, 10, 1000, 220);
line(600, 10, 1000, 10);
line(600, 100, 1000, 100);
outtextxy(700, 35, "Welcome to our Racing Game");
outtextxy(750, 65, "All The Best!");
//Finish Board
line(1800, 10, 1800, 220);
rectangle(1600, 10, 1800, 100);
outtextxy(1675, 35, "FINISH");
outtextxy(1682.5, 60, "LINE");
//signal
rectangle(200, 120, 210, 220);//signal base
rectangle(180, 10, 230, 120);//signal top
circle(205, 30, 15);//red
circle(205, 65, 15);//yellow
circle(205, 100, 15);//green
rectangle(200, 120, 210, 220);//signal base
rectangle(180, 10, 230, 120);//signal top
circle(205, 100, 15);//green
setfillstyle(SOLID_FILL, 10);
floodfill(205, 100, WHITE);
//lane names
outtextxy(20, 315, "Lane1 (You)");
37
outtextxy(20, 505, "Lane2");
outtextxy(20, 695, "Lane3");
outtextxy(20, 885, "Lane4");
if (GetAsyncKeyState(VK_RIGHT))
{
//car1
c1+=1.1, c2+=1.1, c3+=1.1, c4+=1.1, c5+=1.1, c6+=1.1, c7+=1.1,
c8+=1.1, c9+=1.1, c10+=1.1;
circle(c1, 395, 15);//backoutertyre c1
circle(c2, 395, 15);//frontoutertyre c2
circle(c1, 395, 10);//backinnertyre c1
circle(c2, 395, 10);//frontinnertyre c2
rectangle(c3, 340, c4, 380);//carbasebody c3 c4
rectangle(c5, 270, c6, 340);//cartopbody c5 c6
rectangle(c7, 280, c8, 330);//carwindowframe c7 c8
line(c9, 280, c9, 330);//carwindowdivider c9l
arc(c4, 360, 270, 90, 10);//headlight c4
setfillstyle(SOLID_FILL, 11);//cartopbodycolor
floodfill(c5+1, 271, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 11);//carbasebodycolor
floodfill(c3+1, 341, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(c1-14, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(c2-14, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(c4+1, 360, WHITE);////headlightcolor
}
if (GetAsyncKeyState(VK_LEFT))
{
//car1
38
c1-=1.1, c2-=1.1, c3-=1.1, c4-=1.1, c5-=1.1, c6-=1.1, c7-=1.1, c8-=1.1,
c9-=1.1, c10-=1.1;
circle(c1, 395, 15);//backoutertyre c1
circle(c2, 395, 15);//frontoutertyre c2
circle(c1, 395, 10);//backinnertyre c1
circle(c2, 395, 10);//frontinnertyre c2
rectangle(c3, 340, c4, 380);//carbasebody c3 c4
rectangle(c5, 270, c6, 340);//cartopbody c5 c6
rectangle(c7, 280, c8, 330);//carwindowframe c7 c8
line(c9, 280, c9, 330);//carwindowdivider c9
arc(c4, 360, 270, 90, 10);//headlight c4
setfillstyle(SOLID_FILL, 11);//cartopbodycolor
floodfill(c5+1, 271, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 11);//carbasebodycolor
floodfill(c3+1, 341, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(c1-14, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(c2-14, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(c4+1, 360, WHITE);////headlightcolor
}
else
{
circle(c1, 395, 15);//backoutertyre c1
circle(c2, 395, 15);//frontoutertyre c2
circle(c1, 395, 10);//backinnertyre c1
circle(c2, 395, 10);//frontinnertyre c2
rectangle(c3, 340, c4, 380);//carbasebody c3 c4
rectangle(c5, 270, c6, 340);//cartopbody c5 c6
rectangle(c7, 280, c8, 330);//carwindowframe c7 c8
line(c9, 280, c9, 330);//carwindowdivider c9
39
arc(c4, 360, 270, 90, 10);//headlight c4
setfillstyle(SOLID_FILL, 11);//cartopbodycolor
floodfill(c5+1, 271, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 11);//carbasebodycolor
floodfill(c3+1, 341, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(c1-14, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(c2-14, 395, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(c4+1, 360, WHITE);////headlightcolor
}
//car2
circle(100+0.8*i, 585, 15);//backoutertyre
circle(220+0.8*i, 585, 15);//frontoutertyre
circle(100+0.8*i, 585, 10);//backinnertyre
circle(220+0.8*i, 585, 10);//frontinnertyre
rectangle(70+0.8*i, 530, 260+0.8*i, 570);//carbasebody
rectangle(110+0.8*i, 460, 210+0.8*i, 530);//cartopbody
rectangle(120+0.8*i, 470, 200+0.8*i, 520);//carwindowframe
line(160+0.8*i, 470, 160+0.8*i, 520);//carwindowdivider
arc(260+0.8*i, 550, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 12);//cartopbodycolor
floodfill(111+0.8*i, 461, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 12);//carbasebodycolor
floodfill(71+0.8*i, 531, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86+0.8*i, 585, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206+0.8*i, 585, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261+0.8*i, 550, WHITE);////headlightcolor
40
//car3
circle(100+0.5*i, 775, 15);//backoutertyre
circle(220+0.5*i, 775, 15);//frontoutertyre
circle(100+0.5*i, 775, 10);//backinnertyre
circle(220+0.5*i, 775, 10);//frontinnertyre
rectangle(70+0.5*i, 720, 260+0.5*i, 760);//carbasebody
rectangle(110+0.5*i, 650, 210+0.5*i, 720);//cartopbody
rectangle(120+0.5*i, 660, 200+0.5*i, 710);//carwindowframe
line(160+0.5*i, 660, 160+0.5*i, 710);//carwindowdivider
arc(260+0.5*i, 740, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 10);//cartopbodycolor
floodfill(111+0.5*i, 651, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 10);//carbasebodycolor
floodfill(71+0.5*i, 721, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86+0.5*i, 775, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206+0.5*i, 775, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261+0.5*i, 740, WHITE);////headlightcolor
//car4
circle(100+0.7*i, 965, 15);//backoutertyre
circle(220+0.7*i, 965, 15);//frontoutertyre
circle(100+0.7*i, 965, 10);//backinnertyre
circle(220+0.7*i, 965, 10);//frontinnertyre
rectangle(70+0.7*i, 910, 260+0.7*i, 950);//carbasebody
rectangle(110+0.7*i, 840, 210+0.7*i, 910);//cartopbody
rectangle(120+0.7*i, 850, 200+0.7*i, 900);//carwindowframe
line(160+0.7*i, 850, 160+0.7*i, 900);//carwindowdivider
arc(260+0.7*i, 930, 270, 90, 10);//headlight
setfillstyle(SOLID_FILL, 13);//cartopbodycolor
41
floodfill(111+0.7*i, 841, WHITE);//cartopbodycolor
setfillstyle(SOLID_FILL, 13);//carbasebodycolor
floodfill(71+0.7*i, 911, WHITE);//carbasebodycolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(86+0.7*i, 965, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 7);//carbacktyrecolor
floodfill(206+0.7*i, 965, WHITE);////carbacktyrecolor
setfillstyle(SOLID_FILL, 14);//headlightcolor
floodfill(261+0.7*i, 930, WHITE);////headlightcolor
page = 1 - page;
}
getch();
}
else
cout<<"Enter Valid Number";
}