/**
 * Galaxy Open-Source Massively Multiplayer Game Simulation Engine
 * Copyright (C) 2007 OpenSWG Team <http://www.openswg.com>
 */

// *********************************************************************
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// To read the license please visit http://www.gnu.org/copyleft/gpl.html
// *********************************************************************

#include <gsNetwork/networkmessage.h>

using namespace gsNetwork;

NetworkMessage::NetworkMessage()
{
	m_resend = false;
	m_reschedule = false;
	sendCount = 0;
	m_compress = false;
	m_crc = false;
	m_encrypt = false;
	m_sequence = 0;
}

NetworkMessage::~NetworkMessage()
{}

