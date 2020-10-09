#include <iostream>
#include <cstdlib>

using namespace std;

void checker (float x, float y, int *score){
    int zones[6] = {5,4,3,2,1,0};
    float radius;
    int scoredone;
    x = x + rand() % 5 + 0;
    y = y + rand() % 5 + 0;
    radius = sqrt (x*x+y*y);
    scoredone = 0;
    for (int i = 0; i <= 5; i++) {
       if ((radius < zones[i]) && (radius >= zones[i+1]) && (i+1 <= 5)) {
           scoredone = i+1;
           *score += i+1;
           cout << '\n';
       }
    }
    cout << "You got : " << scoredone << " point, "<< " zone " <<round (radius) << endl;
}

int main() {
    float x,y;
    int score = 0;
    for (int i = 1; i <= 5; i++) {
        cout << i << " SHOOT" << endl;

        cout << "Write x = " <<endl;
        cin >> x;

        cout << "Write y = " <<endl;
        cin >> y;
        cout << '\n';
        checker(x, y, &score);

    }
    cout << "Your score " << score <<endl;
    return 0;
}
