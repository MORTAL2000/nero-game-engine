////////////////////////////////////////////////////////////
//
// Nero Game Engine
// Author : SANOU A. K. Landry
//
// All rights reserved
//
////////////////////////////////////////////////////////////

#ifndef ACTION_H
#define ACTION_H

#include <Nero/object/PhysicObject.h>
#include <Nero/object/SpriteObject.h>
#include <Nero/object/LayerObject.h>
#include <Nero/utility/Utility.h>
#include <memory>

namespace nero
{
    struct ObjectAction
    {
        typedef std::unique_ptr<ObjectAction> Ptr;
        virtual void call(Object::Ptr object, sf::Time time_step = TIME_PER_FRAME){};
    };

    struct LayerAction
    {
        typedef std::unique_ptr<LayerAction> Ptr;
        virtual void call(LayerObject::Ptr object, sf::Time time_step = TIME_PER_FRAME){};
    };

    struct SpriteAction
    {
        typedef std::unique_ptr<SpriteAction> Ptr;
        virtual void call(SpriteObject::Ptr object, sf::Time time_step = TIME_PER_FRAME){};
    };

    struct PhysicAction
    {
        typedef std::unique_ptr<PhysicAction> Ptr;
        virtual void call(PhysicObject::Ptr object, sf::Time time_step = TIME_PER_FRAME){};
    };
}


#endif // ACTION_H
