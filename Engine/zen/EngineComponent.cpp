#include "EngineComponent.hpp"
#include <sstream>
//namespace zen {

//    std::ostream& operator<<(std::ostream &os, EngineComponent&  comp) {
//        std::string s;
//        switch (comp.type()) {
//        case EngineComponent::INPUT:
//            s = "Input";
//            break;
//        case EngineComponent::NETWORK:
//            s = "Network";
//            break;
//        case EngineComponent::GRAPHICS:
//            s = "Graphics";
//            break;
//        case EngineComponent::SOUND:
//            s = "Sound";
//            break;
//        }

//        os << s;
//        return os;
//    }
//}

zen::EngineComponent::operator std::string()
{
    switch (type()) {
    case EngineComponent::INPUT:
        return "Input";
    case EngineComponent::NETWORK:
        return "Network";
    case EngineComponent::GRAPHICS:
        return "Graphics";
    case EngineComponent::SOUND:
        return "Sound";
    }

}
