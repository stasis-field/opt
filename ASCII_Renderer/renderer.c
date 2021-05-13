#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <ncurses.h>


// TODO: Make a quick function to generate a string of length l and fill it with spaces

int number_of_columns = 226;
int number_of_rows = 56;

int x_pos = 113;
int y_pos = 27;

int x_inc = 1;
int y_inc = 1;

int frame_count = 1;

char line[226] = "__________________________________________________________________________________________________________________________________________________________________________________________________________________________________";

int mouse_x;
int mouse_y;



int renderline(char *linetorender)
{
	char *ptr = linetorender;

	x_inc = 1;

	while(*ptr !='\0')
	{
		if (x_inc == x_pos && y_inc == y_pos)
		{
			printf("X");
		}
		else
		{
			printf("%c", *ptr);
		}
		ptr++;
		x_inc++;
	}

	printf("\n");
	return 0;
};

int renderfield(char *linetorender)
{
	int rendercount = number_of_rows;

	y_inc = 1;
	system("clear");

	while (rendercount != 0)
	{
		renderline(linetorender);
		rendercount--;
		y_inc++;
	}
	return 0;
};


int main()
{
	mousemask (REPORT_MOUSE_POSITION, NULL);

// https://linux.die.net/man/3/getmouse

	while (1)
	{
		mouse_x = getcurx();

		renderfield(line);
		printf("%d :: %d, %d\n", frame_count, getcurx, mouse_y);
		usleep(16000);

		frame_count = (frame_count + 1) % 61;
	}

	return 0;
};