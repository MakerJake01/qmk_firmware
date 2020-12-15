/*#ifndef J8k_H
#define J8K_H*/
#pragma once

#include "quantum.h"

#define LAYOUT_ortho_4x2( \
	K00, K01, K02, K03, \
	K10, K11, K12, K13  \
) { \
	{ K00,   K01,   K02,   K03 }, \
	{ K10,   K11,   K12,   K13 }  \
}

//#endif