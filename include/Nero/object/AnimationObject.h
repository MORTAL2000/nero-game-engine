#ifndef ANIMATIONOBJECT_H
#define ANIMATIONOBJECT_H

#include <Nero/object/Object.h>
#include <Nero/model/Animation.h>

namespace nero
{
    class AnimationObject : public Object
    {
         public:
            typedef std::shared_ptr<AnimationObject>   Ptr;
            static Ptr                              Cast(Object::Ptr object);

        public:
            AnimationObject();

        void                            setAnimation(Animation animation);
        virtual sf::FloatRect           getGlobalBounds() const;
        virtual Object::Ptr             clone(sf::Vector2f& position)   const;
        virtual Object::Ptr             clone()                         const;
        virtual nlohmann::json          toJson() const;

        virtual void                    setColor(const sf::Color& color);
        virtual const sf::Color&        getColor()                      const;


        const Animation::SequenceMap&            getSequenceMap() const;
        void            setSequence(std::string name);
        void            setFrameRate(float frameRate);
        void            setLoop(bool flag);
        void            verticalFlip();
        void            horizontalFlip();





        private:
            virtual void                drawObject(sf::RenderTarget& target, sf::RenderStates states) const;
            virtual void                updateObject(sf::Time timeStep);


        private:
            Animation                   m_Animation;
    };
}



#endif // ANIMATIONOBJECT_H
