#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

enum TrafficLights {red=10, yellow= 15, green = 18 };

int main()
{
    TrafficLights trafficLight = red;

    while (true) {
        if (trafficLight == red) {
            cout << "Red: Please Stop" << endl;
        }
        this_thread::sleep_for(chrono::milliseconds(5000)); // 5 sec
        trafficLight = yellow;

        if (trafficLight == yellow) {
            cout << "Yellow : Start Engine" << endl;
        }

        this_thread::sleep_for(chrono::milliseconds(3000)); // 3 sec
        trafficLight = green;

        if (trafficLight == green) {
            cout << "Green : You are good to Go" << endl;
        }

        this_thread::sleep_for(chrono::milliseconds(5000)); // 5 sec
        trafficLight = red;
    }

}
