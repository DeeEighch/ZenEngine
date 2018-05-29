#ifndef GAME_ENGINE_HPP
#define GAME_ENGINE_HPP
#include <string>
#include <map>

#include "defines.hpp"
#include "EngineComponent.hpp"
namespace zen {
    class LIB_API GameEngine final
    {
        std::map<EngineComponent::Type, EngineComponent* > m_components;
    public:
        GameEngine();

        std::string getVersion();
        int registerComponent(EngineComponent* component);
        EngineComponent* asquireComponent(EngineComponent::Type type);
        ~GameEngine();
    };

}

#endif // GAME_ENGINE_HPP
