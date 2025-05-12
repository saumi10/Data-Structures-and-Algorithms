#include <bits/stdc++.h>
 using namespace std;
 #include <math.h>

 double maxVolume(double perimeter, double area) {
        // code here
        double ans=(pow((perimeter-(sqrt(pow(perimeter,2)-(24*area))))/12,2))*((perimeter/4)-(2*(((perimeter-sqrt(pow(perimeter,2)-(24*area)))/12))));
        return ans;
        
    }

 int main(){
    int perimeter,area;
    cin>>perimeter>>area;
    double x=maxVolume(perimeter,area);
    cout << setprecision(2) << fixed << x << endl;

}