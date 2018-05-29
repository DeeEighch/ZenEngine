#include "GameEngine.hpp"
#include "components/InputComponent.hpp"
#include "components/NetworkComponent.hpp"
#include "components/RendererComponent.hpp"
namespace zen {
using namespace components;
    GameEngine::GameEngine()
    {
        registerComponent(new InputComponent(this));
        registerComponent(new NetworkComponent(this));
        registerComponent(new RendererComponent(this));
    }

    std::string GameEngine::getVersion()
    {
        return std::string(GIT_VERSION);
    }

    int GameEngine::registerComponent(EngineComponent *component)
    {
        component->initialize();
        m_components.insert(std::make_pair(component->type(), component));
        return 0;
    }

    EngineComponent *GameEngine::asquireComponent(EngineComponent::Type type)
    {
        return m_components.at(type);
    }

    GameEngine::~GameEngine()
    {
        for (std::pair<EngineComponent::Type, EngineComponent*> component : m_components){
            component.second->finalize();
            delete component.second;
        }
    }

}
