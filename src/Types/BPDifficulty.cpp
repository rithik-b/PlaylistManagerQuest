#include "Types/BPDifficulty.hpp"

DESERIALIZE_METHOD(PlaylistManager, BPSong,
    DESERIALIZE_VALUE(Characteristic, characteristic, String)
    DESERIALIZE_VALUE(Difficulty, difficulty, String)
)