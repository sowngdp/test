#include <iostream>
#include <chrono>
using namespace std; 
using namespace std::chrono;

int main()

{
    int z;
    cin >> z;
    for (int k = 0; k < z; k++)
    {
        int n;
        cin >> n;
        auto start = high_resolution_clock::now();
        bool ishas = false;
        for (int i = 1; i <= n / 2; i++)
        {
            if (n % i == 0 && n % (i + 1) == 0)
            {
                cout << i << " ";
                ishas = true;
            }
        }
        if (!ishas)
        {
            cout << "-1";
        }
        cout << endl;
        auto stop = high_resolution_clock::now();
        cout << duration_cast<microseconds>(stop - start).count() << endl; 
    }

    return 0;
}
 
 

// perform function to be timed here...

