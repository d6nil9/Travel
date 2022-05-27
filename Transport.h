#pragma once
#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

class Transport
{
public:
	virtual void GetSeats();
	virtual void GetTravelPrice();
	virtual void PassengerCanTravel();
protected:
	int passengerMoney = 0;
	int minSeats = 0;
	int maxSeats = 0;
	bool canTravel = true;
	int travelPrice = 0;
	string travel;
private:
	int currentSeats = 0;
};

