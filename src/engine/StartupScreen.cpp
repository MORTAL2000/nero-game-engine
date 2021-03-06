////////////////////////////////////////////////////////////
// Nero Game Engine
// Copyright (c) 2019 SANOU A. K. Landry
////////////////////////////////////////////////////////////
///////////////////////////HEADERS//////////////////////////
//NERO
#include <Nero/engine/StartupScreen.h>
////////////////////////////////////////////////////////////
namespace nero
{
    StartupScreen::StartupScreen()
    {
        //Empty
    }

    StartupScreen::~StartupScreen()
    {
        delete m_RenderWindow;
         m_RenderWindow = nullptr;
    }

    void StartupScreen::setRenderWindow(sf::RenderWindow* renderWindow)
    {
        m_RenderWindow = renderWindow;
    }

}

