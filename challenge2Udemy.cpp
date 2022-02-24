#include <iostream>

using namespace std;

int main()
{
    cout << "Frank's Carpet Cleaning Service" << endl;
    cout << "Charges" << endl;
    cout << "    $25 per small room" << endl;
    cout << "    $35 per large room" << endl;
    cout << "Sales tax rate is 6%" << endl;
    cout << "Estimates are valid for 30 days" << endl;

    int numberOfSmallRooms, numberOfLargeRooms;

    cout << "\n\nHow many small rooms to be cleaned? ";
    cin >> numberOfSmallRooms;
    cout << "\nHow many large rooms to be cleaned? ";
    cin >> numberOfLargeRooms;

    cout << "\nNumber of small rooms: " << numberOfSmallRooms << endl;
    cout << "Number of large rooms: " << numberOfLargeRooms << endl;

    int pricePerSmallRoom = numberOfSmallRooms * 25; int pricePerLargeRoom = numberOfLargeRooms * 35;

    cout << "Price per small room: $" << pricePerSmallRoom << endl;
    cout << "Price per large room: $" << pricePerLargeRoom << endl;
    cout << "Cost: $" << pricePerSmallRoom + pricePerLargeRoom << endl;
    cout << "Tax: $6.6";
    cout << "==================================" << endl;
    cout << "Total estimate: $" << (pricePerSmallRoom + pricePerLargeRoom) + 6.6 << endl;
    cout << "This estimate is valid for 30 days";


    return 0;
}
