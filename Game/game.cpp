#include <iostream>
#include <libEngine.hpp>
using namespace std;
using namespace zen;
using namespace zen::utils;

int main()
{
    PerformanceTimer timer;

    cout << "GameEngine Version: " << GameEngine().getVersion() << "\ttime = " << timer << endl;
    return 0;
}
