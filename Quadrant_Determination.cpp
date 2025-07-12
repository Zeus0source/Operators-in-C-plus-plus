//24070123135 Yash Rastogi
#include<iostream>
using namespace std;
int main() {
    int x,y;
    cout << "Enter the x coordinate: ";
    cin >> x;
    cout << "Enter the y coordinate: ";
    cin >> y;
    if (x>0 && y>0){
        cout << "THE POINT IS IN THE I QUADRANT" << endl;
    }
    else if (x<0 && y>0){
        cout << "THE POINT IS IN THE II QUADRANT" << endl;
    } else if (x<0 && y<0){
        cout << "THE POINT IS IN THE III QUADRANT" << endl;
    } else if (x>0 && y<0){
        cout << "THE POINT IS IN THE IV QUADRANT" << endl;
    } else if (x==0 && y!=0){
        cout << "THE POINT IS ON THE Y AXIS" << endl;
    } else if (y==0 && x!=0){
        cout << "THE POINT IS ON THE X AXIS" << endl;
    } else {
        cout << "THE POINT IS AT THE ORIGIN" << endl;
    }

    return 0;

}
/*
Output:
Enter the x coordinate: 6
Enter the y coordinate: -7
THE POINT IS IN THE IV QUADRANT
Enter the x coordinate: 2
Enter the y coordinate: 4 
THE POINT IS IN THE I QUADRANT
Enter the x coordinate: 0
Enter the y coordinate: 6
THE POINT IS ON THE Y AXIS
Enter the x coordinate: 0
Enter the y coordinate: 0
THE POINT IS AT THE ORIGIN
*/