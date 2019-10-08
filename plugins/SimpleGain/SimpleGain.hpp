// PluginSimpleGain.hpp
// Wendy Carlos (wendy.carlos@site.com)

#pragma once

#include "SC_PlugIn.hpp"

namespace SimpleGain {

class SimpleGain : public SCUnit {
public:
    SimpleGain();

    // Destructor
    // ~SimpleGain();

private:
    // Calc function
    void next(int nSamples);

    // Member variables
};

} // namespace SimpleGain
