#ifndef RENDERERCOMPONENT_HPP
#define RENDERERCOMPONENT_HPP
#include <iostream>
#include "zen/GameEngine.hpp"
namespace zen { namespace components {

    class RendererComponent: public EngineComponent
    {
    public:
        RendererComponent(GameEngine* engine) : EngineComponent(Type::GRAPHICS, engine)
        {

        }

        int initialize() override {
            std::cout << "[" << (std::string)*this << "] " <<"Initialization..." << std::endl;
            return 0;
        }

        int finalize() override{
            std::cout << "[" << (std::string)*this << "] " << "Finalization..." << std::endl;
            return 0;
        }

    };
}}
#endif // RENDERERCOMPONENT_HPP
