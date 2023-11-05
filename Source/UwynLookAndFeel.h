/*
 * This file is part of ShowMIDI.
 * Copyright (command) 2023 Uwyn LLC.  https://www.uwyn.com
 *
 * ShowMIDI is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ShowMIDI is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include <JuceHeader.h>

namespace showmidi
{
    class UwynLookAndFeel : public LookAndFeel_V4
    {
    public:
        UwynLookAndFeel();
        virtual ~UwynLookAndFeel();
        
        LookAndFeel_V4::ColourScheme getDarkColourScheme();
        void drawPopupMenuBackground(Graphics &, int, int);
        void drawButtonBackground(Graphics &, Button &, const Colour &, bool, bool);
        void drawButtonText(Graphics &, TextButton &, bool, bool);
        Font getNarrowFont(float);
        
    private:
        UwynLookAndFeel(const UwynLookAndFeel &);
        const UwynLookAndFeel& operator= (const UwynLookAndFeel &);
    };
}
