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

#include <gsCore/eventmanager.h>
#include <gsNetwork/adminsocket.h>
#include <gsNetwork/networkaddress.h>
#include <gsNetwork/events.h>

using namespace gsCore;
using namespace gsNetwork;

char const * const AdminSocket::gkName = "admin_socket";

AdminSocket::AdminSocket(ISocketHandler &h)
: GameSocket(h)
{}

boost::optional<std::shared_ptr<BinaryPacket>> AdminSocket::processPacketData(std::shared_ptr<BinaryPacket> packet, std::shared_ptr<NetworkAddress> address)
{
    boost::optional<std::shared_ptr<BinaryPacket>> processed;
    
    processed = packet;

    return (*processed);
}

