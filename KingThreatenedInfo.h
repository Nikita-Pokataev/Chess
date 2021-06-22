#pragma once
#include <stdint.h>
#include "Box.h"
struct KingThreatenedInfo {
	uint8_t threatenedInfo;
	uint8_t attackedInfo;
	Box straightLeftBox;
	Box upLeftBox;
	Box straightUpBox;
	Box upRightBox;

	Box straightRightBox;
	Box downRightBox;
	Box straightDownBox;
	Box downLeftBox;
	int amountAttacked;

	Box attackedFromBox;
	bool attackedByKnight;

	static const uint8_t straightLeftThreatened;
	static  const uint8_t upLeftThreatened;
	static  const uint8_t straightUpThreatened;
	static  const uint8_t upRightThreatened;
	static  const uint8_t straightRightThreatened;
	static  const uint8_t downRightThreatened;
	static const  uint8_t straightDownThreatened;
	static  const uint8_t downLeftThreatened;

};

