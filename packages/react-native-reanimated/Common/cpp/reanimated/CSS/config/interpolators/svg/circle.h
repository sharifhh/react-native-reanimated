#pragma once

#include <reanimated/CSS/config/interpolators/svg/common.h>

namespace reanimated::css {

const InterpolatorFactoriesRecord SVG_CIRCLE_INTERPOLATORS = mergeInterpolators(
    SVG_COMMON_INTERPOLATORS,
    InterpolatorFactoriesRecord{
        {"cx", value<CSSLength, CSSKeyword>(RelativeTo::Parent, "width", 0)},
        {"cy", value<CSSLength, CSSKeyword>(RelativeTo::Parent, "height", 0)},
        {"r", value<CSSLength, CSSKeyword>(RelativeTo::Parent, "width", 0)},
        {"opacity", value<CSSDouble>(1)},
    });

} // namespace reanimated::css
