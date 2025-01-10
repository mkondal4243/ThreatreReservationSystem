//Student Name: Mehak Kondal

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "theatre.h"

#define MAX_SEATS 20

//Function to display available seats
void displayAvailableSeats(struct Theatre* theatre) {
	printf("Available Seats: \n");
	int i;
	for (i = 0; i < MAX_SEATS; i++) {
		if (!theatre->seats[i].isReserved) {
			printf("Seat - %d\n", theatre->seats[i].seatNumber);
		}
	}
}