#include <iostream>
#include <string>

using namespace std;

int main() {
    string myName;
    int w, len;
    cout<<"Enter Your Name: "<<endl;
    getline(cin, myName);           // we use getline(), so that c++ does not mark end of code based on space
                                    // using cin alone will result in c++ reading only the first name
                                    // All others separated with space will not be read
    cout<<"The Length of My Name (with Spaces) is: "<<myName.size();
                                    // We can use the size() function to get the length
                                    // Another alternative is using the length() function
    // In the above syntax, the output includes spaces, one can modify to get name without spaces
return 0;
}
