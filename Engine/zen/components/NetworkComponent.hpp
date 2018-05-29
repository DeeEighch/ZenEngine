#ifndef NETWORKCOMPONENT_HPP
#define NETWORKCOMPONENT_HPP
#include <iostream>
#include "zen/GameEngine.hpp"
namespace zen { namespace components {

    class NetworkComponent : public EngineComponent
    {
    public:
        NetworkComponent(GameEngine* engine) : EngineComponent(Type::NETWORK, engine)
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

#endif // NETWORKCOMPONENT_HPP
