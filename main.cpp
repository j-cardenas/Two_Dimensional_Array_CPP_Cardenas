//Student Name: Jesus Cardenas

//Teacher: Dr. Tyson McMillan

//Date:   4/10/2020

//A program to practice working with multi-dimensional arrays

#include <iostream>

using namespace std;

/*

Research Input data: go to http://www.weather.com

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//City_One = 1, City_Two = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X: Temp

City 1, Day 1: TEMP

City 1, Day 2: TEMP

City 1, Day 3: TEMP

City 1, Day 4: TEMP

City 1, Day 5: TEMP

City 1, Day 6: TEMP

City 1, Day 7: TEMP

City 2, Day 1: TEMP

City 2, Day 2: TEMP

City 2, Day 3: TEMP

City 2, Day 4: TEMP

City 2, Day 5: TEMP

City 2, Day 6: TEMP

City 2, Day 7: TEMP

*/

 

int main()

{

      const int CITY = 2;

      const int WEEK = 7;

 

    int temperature[CITY][WEEK];

    temperature[0][0]=81;
    temperature[0][1]=85;
    temperature[0][2]=86;
    temperature[0][3]=86;
    temperature[0][4]=87;
    temperature[0][5]=86;
    temperature[0][6]=83;
    temperature[1][0]=57;
    temperature[1][1]=62;
    temperature[1][2]=67;
    temperature[1][3]=60;
    temperature[1][4]=47;
    temperature[1][5]=53;
    temperature[1][6]=53;
    
    string day[WEEK];
    day[0]= "Saturday \tApril 11"; 
    day[1] = "Sunday \tApril 12";
    day[2] = "Monday \tApril 13";
    day[3] = "Tuesday \tApril 14";
    day[4] = "Wedndays \tApril 15";
    day[5] = "Thursday \tApril 16";
    day[6] = "Friday \tApril 17";


    cout << "\n\nForecast:\n";

 

    // Accessing the values from the temperature array

    for (int i = 0; i < CITY; ++i)

    {
        if (i==0)
        {
        for(int j = 0; j < WEEK; ++j)
        
          {

             cout << "Miami "  << day[j] << " = " << temperature[i][j] << endl;

           }
        }
        else
        {
          for(int j = 0; j < WEEK; ++j)
          {
          cout << "New York "<< day[j] << " = " << temperature[i][j] << endl;
          }
        }
    }

 

    return 0;

}

//Source