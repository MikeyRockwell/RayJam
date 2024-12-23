#pragma once
#include "Engine.h"

namespace UI
{
    const i32 BUTTON_SIZE = 100;
    const Color normalColor   = PALETTE_LIGHT_GRAY;
    const Color hoveredColor  = PALETTE_PURPLE;
    const Color selectedColor = PALETTE_ORANGE;

    enum BuildType
    {
        //NONE, // THIS would need a texture to work..
        RAIL,
        TRAIN,
        STATION,
        REMOVE_TRAIN,
        COUNT
    };

    struct Button
    {
        BuildType type;
        Textures::Sprite sprite;
        Rectangle rectangle;
        bool hovered;
        bool selected;
    };

    struct State
    {
        bool hints = true;
        bool mouseOverUI = false;
        BuildType buildType;
        Button buttons[COUNT];
        Textures::Sprite logo;
    };
    extern State state;

    void Init();
    void Update();
    void DrawWorldSpace();
    void DrawScreenSpace();
}