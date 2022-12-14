//contoh skrip projek alpro dengan fungsion
//course : waydo
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>
 
 
char map[10][20];
char player = '^';
char tail = '+';
char food = '#';
int y=5, x=3;
int yFood, xFood;
int yTail[10]; //lokasi ekor ular
int xTail[10];
int p=20, l=10;
int nTail = 2; //jumlah ekor yang muncul
int maxTail = 10;
int score;
 
void generateMap();
void displayMap();
void moveUp();
void moveDown();
void moveLeft();
void moveRight();
 
int main()
{
   score=0;
   int i;
   time_t t;
   char move;
   srand((unsigned) time(&t)); //supaya foodnya bisa muncul di tempat random
   yFood = rand()% 8 + 1;
   xFood = rand()% 18 + 1;
  
   yTail[0]=y;
   xTail[0]=x;
   yTail[1]=y;
   xTail[1]=x;
   do
   {
       system("clear"); //clear system
       generateMap();
       displayMap();
       move = getchar(); //membuat program berjalan tanpa perlu klik enter
 
       switch(move)
       {
           case 'w':
               moveUp();
               player = '^';
               break;
           case 's':
               moveDown();
               player = 'v';
               break;
           case 'a':
               moveLeft();
               player = '<';
               break;
           case 'd':
               moveRight();
               player = '>';
               break;
       }
       if(y==yFood && x==xFood) //waktu kepala ular nyentuh food
       {
           map[y][x] = player;
           score++;
           if (nTail<maxTail)
           {
               nTail++;
           }
           yFood = rand()% 8 + 1;
           xFood = rand()% 18 + 1;
 
       }
       for(i=maxTail-1; i>0; i--)
       {
           yTail[i] = yTail[i-1];
           xTail[i] = xTail[i-1];
       }
   }
   while(score < 10);
   system("clear");
   printf("\n\nCONGRATULATIONS!");
   printf("\n\nYour score: %d", score);
   scanf("%d", &i);
   return 0;
}
 
void generateMap()
 
{
   int i, j;
   for(i=0; i<l; i++)
   {
       for(j=0; j<p; j++)
       {
           if(i==0 || i==l-1)
           {
               map[i][j]='.';
           }
           else if (j==0 || j==p-1)
           {
               map[i][j]='.';
           }
           else map[i][j]=' ';
       }
   }
   map[y][x]=player;
   map[yFood][xFood]=food;
   for(i=0; i<=nTail; i++)
   {
       map[yTail[i]][xTail[i]] = tail;
   }
}
 
void displayMap()
{
   printf ("SNAKE GAME \n\n");
   int i, j;
   for(i=0; i<l; i++)
   {
       for(j=0; j<p; j++)
       {
           printf("%c", map[i][j]);
       }
       printf("\n");
   }
   printf("score : %d", score);
}
 
void moveUp()
{
   if(y-1 > 0)
   {
       yTail[0] = y; xTail[0]= x;
       y--;
   }
}
void moveDown()
{
   if(y+1 < l-1)
   {
       yTail[0] = y; xTail[0]= x;
       y++;
   }
}
void moveLeft()
{
   if(x-1 > 0)
   {
       yTail[0] = y; xTail[0]= x;
       x--;
   }
}
void moveRight()
{
   if(x+1 < p-1)
   {
       yTail[0] = y; xTail[0]= x;
       x++;
   }
}
 
