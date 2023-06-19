#include <iostream>

using namespace std;

int main() {
    int int1;
    int int2;
    int multiple3;
    int multiple5;
    int numbers;
    int counter;
    cout<<"Enter integer 1: " << endl;
    cin >> int1;
    cout<<"Enter integer 2: " << endl;
    cin >> int2;

    counter = 0;
    multiple3=0;
    multiple5=0;
//
    if (int1 > int2)
      {
        numbers = (int1-int2)+1;

        while (counter != numbers){
          if (((int2+counter)%3)==0)
            multiple3++;

          if (((int2+counter)%5)==0)
            multiple5++;

          counter++;
        }

      }
//
    if (int2 > int1)
      {
        numbers = (int2-int1)+1;

        while (counter != numbers){
          if (((int1+counter)%3)==0)
            multiple3++;

          if (((int1+counter)%5)==0)
            multiple5++;

          counter++;
        }

      }
//
    if (int1==int2)
     {
       if ((int1%3)==0)
        multiple3++;

       if ((int1%5)==0)
        multiple5++;
     }
      
    cout << "There are these many multiples of 3: " << multiple3 << endl;
    cout << "There are these many multiples of 5: " << multiple5<< endl;

    return 0;
}
