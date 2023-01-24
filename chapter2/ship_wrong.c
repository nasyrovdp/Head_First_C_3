#include <stdio.h>

void go_south_east(*lat, *lon)
{
	*lat = *lat - 1;
	*lon = *lon + 1;
}

int main()
{
	int latitude = 32;
	int longitude = -64;
	go_south_east(&latitude, &longitude);
	printf("Avast! We're now at [%i, %i]\n", latitude, longitude);
	return 0;
}
