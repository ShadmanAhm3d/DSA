#include <bits/stdc++.h>
using namespace std;

class petrolPump {
public:
	int petrol;
	int distance;
};

int printTour(petrolPump p[], int n){

       int kami =0 ;
       int bal =0;
       int start =0;
       
       for (int i=0 ; i < n ; i++){
           bal += p[i].petrol - p[i].distance;
           if(bal <  0 ){
               kami += bal;
               start = i+1;
               bal = 0;
           }
       }
       
       if(bal + kami >= 0)
        return start;
       else
        return -1;

}
// Driver code
int main()
{
	petrolPump arr[] = { { 4,6 }, { 6, 5 }, { 7, 3 } ,{4,5}};

	int n = sizeof(arr) / sizeof(arr[0]);
	int start = printTour(arr, n);

	(start == -1) ? cout << "No solution"
				: cout << "Start = " << start;

	return 0;
}

