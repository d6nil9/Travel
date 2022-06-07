#pragma once
#include "Transport.h"
#include "Politeness.h"

class Car : public Transport, public Politeness
{
public:
	Car(string travel, int travelPrice);
	double travelCarPrice = 0;
	void GetTravelPrice() override;
	void GetSeats() override;
	void PassengerCanTravel() override;
	void GetPoliteness() override;
};
