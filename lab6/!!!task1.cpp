#include <iostream>
#include <cstdlib>
#include <cmath> // For sqrt()

using namespace std;

// Sara's location (global)
double sara_latitude, sara_longitude;

// Distance calculation function
double calculateDistance(double lat1, double long1, double lat2, double long2) {
    // For simplicity, we'll assume a flat Earth model and calculate using the Euclidean distance formula.
    // Real-world distance calculations on a spherical Earth are a bit more complex. 

    double distance_x = lat2 - lat1;
    double distance_y = long2 - long1;

    double distance = sqrt(distance_x * distance_x + distance_y * distance_y);
    return distance;
}

int main() {
    // ... (your existing code to generate random locations)

    // Calculate distances from Sara to each supermarket
    double distance_to_supermarket1 = calculateDistance(sara_latitude, sara_longitude, supermarket1_latitude, supermarket1_longitude);
    double distance_to_supermarket2 = calculateDistance(sara_latitude, sara_longitude, supermarket2_latitude, supermarket2_longitude);
    double distance_to_supermarket3 = calculateDistance(sara_latitude, sara_longitude, supermarket3_latitude, supermarket3_longitude);

    // Find the shortest distance
    double shortest_distance = distance_to_supermarket1;
    int closest_supermarket = 1; // Assuming supermarket 1 is initially closest

    if (distance_to_supermarket2 < shortest_distance) {
        shortest_distance = distance_to_supermarket2;
        closest_supermarket = 2;
    }
    if (distance_to_supermarket3 < shortest_distance) {
        shortest_distance = distance_to_supermarket3;
        closest_supermarket = 3;
    }

    // Print the results
    cout << "The closest supermarket to Sara is supermarket #" << closest_supermarket << endl;
    cout << "Distance: " << shortest_distance << endl;

    return 0;
}
