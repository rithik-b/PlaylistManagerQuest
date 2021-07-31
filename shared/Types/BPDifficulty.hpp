#pragma once
#include "TypeMacros.hpp"

DECLARE_JSON_CLASS(PlaylistManager, BPDifficulty, 
    GETTER_VALUE(std::string, Characteristic);
    GETTER_VALUE(std::string, Difficulty);
)