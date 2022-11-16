#include <iostream>


using namespace std;

int main()
{

    int n;
    cin >> n;
    int t[n];
    for(int i = 0; i < n; i++){
        cin >> t[i];
    }

    int m = t[0];
    int a = 0;
    for(int j = 1; j < n; j++){
        if(t[j] > m){
            m = t[j];
        }
    }



    for(int i = 0; i < n; i++)
    if((t[i] < m) &&(t[i] >= a)){
        a = t[i];
    }

    cout << a << endl;
}
