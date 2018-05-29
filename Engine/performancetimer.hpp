#ifndef PERFORMANCETIMER_HPP
#define PERFORMANCETIMER_HPP
#include <string>
#include <chrono>
#include <sstream>
#include "defines.hpp"

namespace zen { namespace utils {

    class LIB_API PerformanceTimer final {

        std::chrono::time_point<std::chrono::high_resolution_clock> start;
        std::string m_label;
        friend std::ostream& operator<< (std::ostream& os, const PerformanceTimer& timer);

    public:
        PerformanceTimer();
        PerformanceTimer(std::string label);

        operator std::string() const;
    };
}}
#endif // PERFORMANCETIMER_HPP
