#ifndef INPUTCOMPONENT_HPP
#define INPUTCOMPONENT_HPP
#include "../EngineComponent.hpp"
#include <iostream>
namespace zen { namespace components {

    class InputComponent : public EngineComponent
    {
    public:
        InputComponent(GameEngine* engine) : EngineComponent(Type::INPUT, engine)
        {

        }

        int initialize() override {
            std::cout << "[" << (std::string)*this << "] " <<"Initialization..." << std::endl;
            return 0;
        }

        int finalize() override {
            std::cout << "[" << (std::string)*this << "] " << "Finalization..." << std::endl;
            return 0;
        }
    };

}}
#endif // INPUTCOMPONENT_HPP
