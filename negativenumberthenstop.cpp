//in this code we will take input from user continuously if inout number comes nagative then it stops 
//and print the sum of all the positive numbers entered by user
#include <iostream>
using namespace std;
int main() {
    int num;
    int sum = 0;
    cout << "Enter numbers (enter negative number to stop): " << endl;
    while (true) {
        cin >> num;
        if (num < 0) {
            break;  
        }
   sum += num; 
    }
    cout << "Sum of positive numbers = " << sum << endl; 
    return 0;
}