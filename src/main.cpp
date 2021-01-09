#include <bits/stdc++.h>
#include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                    'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                    's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int numbers[26] = {100, 14, 9, 28, 145, 12,  3,   10, 200, 100, 114, 100, 25,
                   450, 80, 2, 12, 400, 113, 405, 11, 10,  10,  3,   210, 23};

int main(int argc, char *argv[]) {
	
	  int userin = atoi(argv[1]);
  // int a = 100, b = 14, c = 9, d = 28, e = 145, f = 12, g = 3, h = 10, i =
  // 200, j = 100, k = 114, l = 100, m = 25, n = 450, o = 80, p = 2, q = 12, r =
  // 400, s = 113, t = 405, u = 11, v = 10, w = 10, x = 3, y = 210, z= 23; int i
  // = 0;
  char your_char;
  std::ifstream file("names.txt");
  std::string str;
  while (std::getline(file, str)) {
    int total_sum = 0;
    transform(str.begin(), str.end(), str.begin(),
    [](unsigned char c){ return std::tolower(c); });
    for (int i = 0; i < str.length(); i++) {
      // cout << str.at(i) << endl; //get character at position i
      your_char = str.at(i);

      for (int e = 0; e < 26; e++) {
        if (letters[e] == your_char) {
          total_sum += numbers[e];
          
        }
      }
    }
    //cout << str << " : " << total_sum << endl;
    if (userin == total_sum){
	cout << str << endl;
	}
	//ofstream output("output1.txt");
	//output << str << " : " << total_sum << endl;
	//output.close();
    //here you can use total_sum for whatever you want, it is counted for one line
  }
}
