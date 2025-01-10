//Student Name: Mehak Kondal

#ifndef THEATRE_H
#define THEATRE_H

struct Seat {
    int seatNumber;
    int isReserved;
    char customerName[50];
};

struct Theatre {
    struct Seat seats[20];
    double ticketPrice;
};
//Function Prototypes 
void displayAvailableSeats(struct Theatre* theatre);
void makeReservation(struct Theatre* theatre);
void cancelReservation(struct Theatre* theatre);
void show(struct Theatre* theatre);
void calculateTotalIncome(struct Theatre* theatre);

#endif 

