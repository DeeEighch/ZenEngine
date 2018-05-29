#ifndef ENGINECOMPONENT_HPP
#define ENGINECOMPONENT_HPP
#include <string>

#include "defines.hpp"
//#include "zen/GameEngine.hpp"
namespace zen {
    class GameEngine;
    class LIB_API EngineComponent
    {
    public:
        enum Type {
            INPUT,
            NETWORK,
            GRAPHICS,
            SOUND
        };
    protected:
        Type m_type;

        GameEngine* m_engine;

        friend std::ostream& operator<<(std::ostream& os, const EngineComponent& comp);

    public:


        EngineComponent(Type type, GameEngine* engine) : m_type(type), m_engine(engine) {}

        virtual int initialize() = 0;
        virtual int finalize() = 0;
        virtual ~EngineComponent(){}

        Type type() { return m_type; }

        operator std::string();
    };
}

#endif // ENGINECOMPONENT_HPP
