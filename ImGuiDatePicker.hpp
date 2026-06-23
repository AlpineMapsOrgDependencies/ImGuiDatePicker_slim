#pragma once
#include <imgui.h>
#include <string>


#ifndef IMGUI_DATEPICKER_YEAR_MIN
    #define IMGUI_DATEPICKER_YEAR_MIN 1900
#endif // !IMGUI_DATEPICKER_YEAR_MIN

#ifndef IMGUI_DATEPICKER_YEAR_MAX
    #define IMGUI_DATEPICKER_YEAR_MAX 3000
#endif // !IMGUI_DATEPICKER_YEAR_MAX

namespace ImGui
{
    // format: strftime-style format string for the combo button label (e.g. "%d.%m.%Y").
    //         Pass nullptr to use the default long-form string ("23 June 2026").
    IMGUI_API bool DatePickerEx(const std::string& label, tm& v, ImFont* altFont, bool clampToBorder = false, float itemSpacing = 130.0f, const char* format = nullptr);

    IMGUI_API bool DatePicker(const std::string& label, tm& v, bool clampToBorder = false, float itemSpacing = 130.0f, const char* format = nullptr);
}
