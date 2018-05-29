#include "performancetimer.hpp"

namespace zen { namespace utils {

    PerformanceTimer::PerformanceTimer() : PerformanceTimer(std::string()) {}

    PerformanceTimer::PerformanceTimer(std::string label) : m_label(label){
        start = std::chrono::high_resolution_clock::now();
    }

    PerformanceTimer::operator std::string() const
    {
        std::ostringstream out;
        out << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - start).count();
        return out.str();
    }

    LIB_API std::ostream&  operator<< (std::ostream& os, const PerformanceTimer& timer)
    {
        os << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - timer.start).count() << " ms";
        return os;
    }

}}
