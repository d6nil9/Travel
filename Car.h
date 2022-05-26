#pragma once
#include "Transport.h"

class Car : public Transport
{
public:
	Car(string travel, int travelPrice);
	double travelCarPrice = 0;
	void GetTravelPrice() override;
	void GetSeats() override;
	void PassengerCanTravel() override;
};


