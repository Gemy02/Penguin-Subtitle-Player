#ifndef PREFCONSTANTS_H
#define PREFCONSTANTS_H

#include "QString"

namespace PrefConstants {
    const static int BG_COLOR = 0;
    const static int BG_ALPHA = 100;
    const static int BG_ALPHA_MIN = 2;
    const static int ADJUST_INTERVAL = 1000;
    const static int ADJUST_INTERVAL_MAX = 3600000;
    const static int ADJUST_INTERVAL_STEP = 50;
    const QString ENCODING = "UTF-8";
    const static bool FONT_SHADOW_ENABLE = true;
    const static int FONT_SHADOW_BLUR_RADIUS = 8;
    const static int FONT_SHADOW_BLUR_RADIUS_MAX = 100;
    const static int FONT_SHADOW_BLUR_RADIUS_STEP = 1;
    const static int FONT_SHADOW_COLOR = 0;
    const static int FONT_SHADOW_OFFSET_X = 0;
    const static int FONT_SHADOW_OFFSET_Y = 0;
    const static int FONT_SHADOW_OFFSET_LIMIT = 100;
}

#endif // PREFCONSTANTS_H

