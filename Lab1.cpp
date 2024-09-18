#include <iostream>
using namespace std;


int main() {

    cout << "Enter the Weather:" << endl;
    int temperature;
    cin >> temperature;
    if (temperature>=26) {
        cout <<"You don't need an umbrella today"<< endl;
    }
    else if(temperature<=16) {
        cout <<"You need an umbrella today, because is rainy"<<endl;
    }
    else if(temperature<=25) {
        cout <<"You don't need an umbrella today, but the weather is cloudy"<<endl;
    }
    return 0;
}
