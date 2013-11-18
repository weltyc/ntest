#pragma once

#include "OsObjects.h"
#include "Player.h"

//! Alternate game class for use when playing with an external viewer.
//!
//! Only one computer is allowed but the user has much more control over what happens
class CGameX: public COsGame {
public:
	CGameX(CComputerDefaults cd);
};

bool HasInput();