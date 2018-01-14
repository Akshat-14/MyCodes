#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int t_hour,t_min;
  cout<<"Enter time in hour and minutes respectively:\n";
  cin>>t_hour>>t_min;
  float angle_hour,angle_min;
  angle_hour = (60*t_hour + t_min)/2.0;
  angle_min = 6*t_min;
  float diff;
  diff = fabs(angle_hour-angle_min);
  cout<<angle_hour<<"  "<<angle_min<<endl;
  cout<<"Angle between hour hand and minute hand is "<<diff<<" degrees"<<endl;
  return 0;
}