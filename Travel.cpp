#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include "Transport.h"
#include "Car.h"
#include "Train.h"
#include "Express.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    string travel;
    int travelPrice = 0;
    int transportChoice;
    int travelChoice;

    cout << "\t\tМы рады приветствовать вас в нашей новейшей travel компании!" << endl;
    cout << "\nВыберите город, в который вы хотите отправиться: \n1 - Берлин \n2 - Париж \n3 - Варшава \n4 - Лиссабон" << endl;
    cin >> travelChoice;

    switch (travelChoice) {
    case 1:
        travel = "Berlin";
        break;
    case 2:
        travel = "Paris";
        break;
    case 3:
        travel = "Warsaw";
        break;
    case 4:
        travel = "Lisbon";
        break;
    default:
        break;
    }

    cout << "Выберите желаемый для путешествия транспорт: \n1 - Машина \n2 - Поезд \n3 - Экспресс" << endl;
    cin >> transportChoice;

    if (transportChoice == 1) {
        Car* carTravel = new Car(travel, travelPrice);
        cout << "Вы выбрали машину!" << endl;
        thread thr1([&]() {
            carTravel->GetTravelPrice();
        });
        thr1.join();
        thread thr2([&]() {
            carTravel->PassengerCanTravel();
            });
        thr2.join();
        carTravel->GetSeats();
        delete carTravel;
    }
    else if (transportChoice == 2) {
        Train* trainTravel = new Train(travel, travelPrice);
        cout << "Вы выбрали поезд!" << endl;
        trainTravel->GetTravelPrice();
        trainTravel->PassengerCanTravel();
        trainTravel->GetSeats();
        delete trainTravel;
    }
    else if (transportChoice == 3) {
        Express* expressTravel = new Express(travel, travelPrice);
        cout << "Вы выбрали экспресс!" << endl;
        expressTravel->GetTravelPrice();
        expressTravel->PassengerCanTravel();
        expressTravel->GetSeats();
        delete expressTravel;
    }
    return 0;
}
