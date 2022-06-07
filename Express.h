#pragma once
#include "Train.h"
#include "Politeness.h"

class Express : public Train, public Politeness
{
public:
	Express(string travel, int travelPrice);
	double travelExpressPrice = 0;
	void GetTravelPrice() override;
	void GetSeats() override;
	void PassengerCanTravel() override;
	void GetPoliteness() override;
};
