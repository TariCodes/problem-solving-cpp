#include <iostream>
using namespace std;

int main()
{
    int initialVelocity, acceleration, time, finalVelocity, distanceTraversed;

    cout << "enter value for initial velocity: " << endl;
    cin >> initialVelocity;

    cout << "Enter value for acceleration: " << endl;
    cin >> acceleration;

    cout << "Enter value for time: " << endl;
    cin >> time;

    finalVelocity = initialVelocity + acceleration * time;
    
    distanceTraversed = (initialVelocity * time) + acceleration * time * time;
    
    cout << "Final velocity is\n " << finalVelocity <<endl;
    
    cout << "Distance Traversed is\n " << distanceTraversed <<endl;
    
    return 0;
}
