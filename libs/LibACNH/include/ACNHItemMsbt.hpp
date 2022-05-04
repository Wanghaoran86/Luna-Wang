/**
 * 
 * ACNHItemMsbt.hpp
 * 
 * Copyright (c) 2021-2021, Slattz.
 * 
 * This file is part of LibACNH (https://github.com/Slattz/LibACNH).
 * 
 * LibACNH is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * LibACNH is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with LibACNH.  If not, see <https://www.gnu.org/licenses/>
 */

#pragma once
#include "MSBT.hpp"

class ACNHItemMsbt : public MSBT {
private:
    void FixItemNames();

public:
    ACNHItemMsbt(const char* filePath);
    ACNHItemMsbt(u8* inBuffer, u64 bufSize, bool manageMem = false);
    ~ACNHItemMsbt() override;

};