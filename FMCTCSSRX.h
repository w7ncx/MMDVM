/*
 *   Copyright (C) 2020 by Jonathan Naylor G4KLX
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#if !defined(FMCTCSSRX_H)
#define  FMCTCSSRX_H

#include "Config.h"

class CFMCTCSSRX {
public:
  CFMCTCSSRX();

  uint8_t setParams(uint8_t frequency, uint8_t threshold);

  bool process(const q15_t* samples, uint8_t length);

  void reset();

private:
 q31_t     m_coeffDivTwo;
 uint16_t  m_threshold;
 uint16_t  m_count;
 q31_t     m_q0;
 q31_t     m_q1;
 bool      m_result;
};

#endif
