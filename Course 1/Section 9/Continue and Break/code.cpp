#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> values {2,4,1,9,6,-9,-4,-99,-34,-56};
    
    for(auto val:values){
        if (val == -99 )
        {
            cout << val << endl;
            cout<< "You have reached your goal";
            break;
        }else
        {
            cout << val << endl;
            continue;
        }
    }
    
    
}