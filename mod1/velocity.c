#include <stdio.h>

int main()
{
	//Define variables
	int dist;
	int time;

	//Ask for distance
	printf("How far did you travel in meters?\n");
	scanf("%d", &dist);

	//Ask for time
	printf("How much time did you travel in seconds?\n");
	scanf("%d", &time);

	//Return the velocity
	printf("Your average speed is %d m/s or %d km/h.\n", dist/time, (dist*3600)/(time*1000));
	return 0;
}
