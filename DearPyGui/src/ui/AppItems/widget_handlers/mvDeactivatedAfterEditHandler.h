#pragma once

#include "mvItemRegistry.h"

namespace Marvel {

    class mvDeactivatedAfterEditHandler : public mvAppItem
    {

    public:

        explicit mvDeactivatedAfterEditHandler(mvUUID uuid);

        void draw(ImDrawList* drawlist, float x, float y) override {}
        void customAction(void* data = nullptr) override;

    };

}