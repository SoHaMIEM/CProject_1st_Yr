// C program to build the complete
// snake game
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
  
int i,j,height,width;
int gameover,score;
int x,y,fruitx,fruity,flag;

// Function to generate the fruit
// within the boundary
void setup()
{
    gameover = 0;
  
    // Stores height and width
    x = height / 2;
    y = width / 2;
	for(i=0;;i++)
    {
        fruitx = rand() % height;
        if (fruitx == 0)
            continue;
        break;
    }
    for(i=0;;i++)
    {
	    fruity = rand() % width;
        if (fruity == 0)
        	continue;
        break;	
    }
    score = 0;
}
void draw()
{
    system("cls");
    for (i = 0;i<height;i++)
	{
        for (j = 0; j < width;j++) 
		{
            if (i == 0 || i == width - 1 || j == 0 || j == height - 1)
		    {
                printf("#");
            }
            else
		    {
                if (i == x && j == y)
                    printf("0");
                else if (i == fruitx && j == fruity)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    printf("score = %d", score);
    printf("\n");
    printf("press X to quit the game");
}
void input()
{
    if (kbhit()) {
        switch (getch()) {
        case 'a':
            flag = 1;
            break;
        case 's':
            flag = 2;
            break;
        case 'd':
            flag = 3;
            break;
        case 'w':
            flag = 4;
            break;
        case 'x':
            gameover = 1;
            break;
        }
    }
}
void logic()
{
	sleep(0.001);
    switch (flag) 
	{
    case 1:
        y--;
        break;
    case 2:
        x++;
        break;
    case 3:
        y++;
        break;
    case 4:
        x--;
        break;
    default:
        break;
    }
    if (x < 0 || x > height
        || y < 0 || y > width)
        gameover = 1;
    if (x == fruitx && y == fruity) {
    for(i=0;;i++)
    {
        fruitx = rand() % height;
        if (fruitx == 0)
            continue;
        break;
    }
    for(i=0;;i++)
    {
	    fruity = rand() % width;
        if (fruity == 0)
        	continue;
        break;	
    }
    score += 10;
    }
}
int main()
{
    printf("Enter the lenght of the boundary");
    scanf("%d",&height);
    printf("Enter the breadth of the boundary");
    scanf("%d",&width);
    // Generate boundary
    setup();
    while (!gameover) 
	{
  
        draw();
        input();
        logic();
    }
}
