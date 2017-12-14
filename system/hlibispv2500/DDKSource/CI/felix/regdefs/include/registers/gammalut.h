/*!
******************************************************************************
@file   : /home/jenkins/builds/workspace/ISP_PKG/build/CI/felix/regdefs/regdefs//registers/gammalut.h

@brief  

@Author <Autogenerated>

		<b>Copyright 2005 by Imagination Technologies Limited.</b>
		All rights reserved.  No part of this software, either
		material or conceptual may be copied or distributed,
		transmitted, transcribed, stored in a retrieval system
		or translated into any human or computer language in any
		form by any means, electronic, mechanical, manual or
		other-wise, or disclosed to third parties without the
		express written permission of Imagination Technologies
		Limited, Unit 8, HomePark Industrial Estate,
		King's Langley, Hertfordshire, WD4 8LZ, U.K.

<b>Description:</b>\n
		This file contains the GAMMALUT_H Defintions.


 Register Attributes meaning:
 @li <REG>_OFFSET <int> offset in bytes from the register bank
 @li <REG>_STRIDE <int> [table register only] distance in bytes between table entries
 @li <REG>_NO_ENTRIES <int> [table register only] number of entries in the table
 @li <REG>_TRUSTED <bool> [only if register is trusted] if the register can only be written by trusted source

 Fields Attributes meaning:
 @li <FIELD>_MASK <int> in register
 @li <FIELD>_LSBMASK <int> when field is shifted to LSBs
 @li <FIELD>_SHIFT <int> in bits from LSB
 @li <FIELD>_LENGTH <int> in bits
 @li <FIELD>_DEFAULT <int>
 @li <FIELD>_SIGNED_FIELD <bool>
 @li <FIELD>_NO_REPS <int> [repeated field only] number of time the field is repeated
 @li <FIELD>_SIZE <int> [repeated field only] size of repeated field (same than LENGTH)

 If the register bank is a structure <BANK>_BYTE_SIZE <int> is defined as the size in memory.
******************************************************************************/

#if !defined (__GAMMALUT_H__)
#define __GAMMALUT_H__

#ifdef __cplusplus
extern "C" {
#endif


#define FELIX_GAMMA_LUT_GMA_RED_POINT_OFFSET		(0x0000)
#define FELIX_GAMMA_LUT_GMA_RED_POINT_STRIDE		(4)
#define FELIX_GAMMA_LUT_GMA_RED_POINT_NO_ENTRIES		(32)

/* FELIX_GAMMA_LUT, GMA_RED_POINT, GMA_RED_EVEN
*/
#define FELIX_GAMMA_LUT_GMA_RED_POINT_GMA_RED_EVEN_MASK		(0x00000FFF)
#define FELIX_GAMMA_LUT_GMA_RED_POINT_GMA_RED_EVEN_LSBMASK		(0x00000FFF)
#define FELIX_GAMMA_LUT_GMA_RED_POINT_GMA_RED_EVEN_SHIFT		(0)
#define FELIX_GAMMA_LUT_GMA_RED_POINT_GMA_RED_EVEN_LENGTH		(12)
#define FELIX_GAMMA_LUT_GMA_RED_POINT_GMA_RED_EVEN_DEFAULT		(0)
#define FELIX_GAMMA_LUT_GMA_RED_POINT_GMA_RED_EVEN_SIGNED_FIELD	(IMG_FALSE)

/* FELIX_GAMMA_LUT, GMA_RED_POINT, GMA_RED_ODD
*/
#define FELIX_GAMMA_LUT_GMA_RED_POINT_GMA_RED_ODD_MASK		(0x0FFF0000)
#define FELIX_GAMMA_LUT_GMA_RED_POINT_GMA_RED_ODD_LSBMASK		(0x00000FFF)
#define FELIX_GAMMA_LUT_GMA_RED_POINT_GMA_RED_ODD_SHIFT		(16)
#define FELIX_GAMMA_LUT_GMA_RED_POINT_GMA_RED_ODD_LENGTH		(12)
#define FELIX_GAMMA_LUT_GMA_RED_POINT_GMA_RED_ODD_DEFAULT		(0)
#define FELIX_GAMMA_LUT_GMA_RED_POINT_GMA_RED_ODD_SIGNED_FIELD	(IMG_FALSE)

#define FELIX_GAMMA_LUT_GMA_GREEN_POINT_OFFSET		(0x0080)
#define FELIX_GAMMA_LUT_GMA_GREEN_POINT_STRIDE		(4)
#define FELIX_GAMMA_LUT_GMA_GREEN_POINT_NO_ENTRIES		(32)

/* FELIX_GAMMA_LUT, GMA_GREEN_POINT, GMA_GREEN_EVEN
*/
#define FELIX_GAMMA_LUT_GMA_GREEN_POINT_GMA_GREEN_EVEN_MASK		(0x00000FFF)
#define FELIX_GAMMA_LUT_GMA_GREEN_POINT_GMA_GREEN_EVEN_LSBMASK		(0x00000FFF)
#define FELIX_GAMMA_LUT_GMA_GREEN_POINT_GMA_GREEN_EVEN_SHIFT		(0)
#define FELIX_GAMMA_LUT_GMA_GREEN_POINT_GMA_GREEN_EVEN_LENGTH		(12)
#define FELIX_GAMMA_LUT_GMA_GREEN_POINT_GMA_GREEN_EVEN_DEFAULT		(0)
#define FELIX_GAMMA_LUT_GMA_GREEN_POINT_GMA_GREEN_EVEN_SIGNED_FIELD	(IMG_FALSE)

/* FELIX_GAMMA_LUT, GMA_GREEN_POINT, GMA_GREEN_ODD
*/
#define FELIX_GAMMA_LUT_GMA_GREEN_POINT_GMA_GREEN_ODD_MASK		(0x0FFF0000)
#define FELIX_GAMMA_LUT_GMA_GREEN_POINT_GMA_GREEN_ODD_LSBMASK		(0x00000FFF)
#define FELIX_GAMMA_LUT_GMA_GREEN_POINT_GMA_GREEN_ODD_SHIFT		(16)
#define FELIX_GAMMA_LUT_GMA_GREEN_POINT_GMA_GREEN_ODD_LENGTH		(12)
#define FELIX_GAMMA_LUT_GMA_GREEN_POINT_GMA_GREEN_ODD_DEFAULT		(0)
#define FELIX_GAMMA_LUT_GMA_GREEN_POINT_GMA_GREEN_ODD_SIGNED_FIELD	(IMG_FALSE)

#define FELIX_GAMMA_LUT_GMA_BLUE_POINT_OFFSET		(0x0100)
#define FELIX_GAMMA_LUT_GMA_BLUE_POINT_STRIDE		(4)
#define FELIX_GAMMA_LUT_GMA_BLUE_POINT_NO_ENTRIES		(32)

/* FELIX_GAMMA_LUT, GMA_BLUE_POINT, GMA_BLUE_EVEN
*/
#define FELIX_GAMMA_LUT_GMA_BLUE_POINT_GMA_BLUE_EVEN_MASK		(0x00000FFF)
#define FELIX_GAMMA_LUT_GMA_BLUE_POINT_GMA_BLUE_EVEN_LSBMASK		(0x00000FFF)
#define FELIX_GAMMA_LUT_GMA_BLUE_POINT_GMA_BLUE_EVEN_SHIFT		(0)
#define FELIX_GAMMA_LUT_GMA_BLUE_POINT_GMA_BLUE_EVEN_LENGTH		(12)
#define FELIX_GAMMA_LUT_GMA_BLUE_POINT_GMA_BLUE_EVEN_DEFAULT		(0)
#define FELIX_GAMMA_LUT_GMA_BLUE_POINT_GMA_BLUE_EVEN_SIGNED_FIELD	(IMG_FALSE)

/* FELIX_GAMMA_LUT, GMA_BLUE_POINT, GMA_BLUE_ODD
*/
#define FELIX_GAMMA_LUT_GMA_BLUE_POINT_GMA_BLUE_ODD_MASK		(0x0FFF0000)
#define FELIX_GAMMA_LUT_GMA_BLUE_POINT_GMA_BLUE_ODD_LSBMASK		(0x00000FFF)
#define FELIX_GAMMA_LUT_GMA_BLUE_POINT_GMA_BLUE_ODD_SHIFT		(16)
#define FELIX_GAMMA_LUT_GMA_BLUE_POINT_GMA_BLUE_ODD_LENGTH		(12)
#define FELIX_GAMMA_LUT_GMA_BLUE_POINT_GMA_BLUE_ODD_DEFAULT		(0)
#define FELIX_GAMMA_LUT_GMA_BLUE_POINT_GMA_BLUE_ODD_SIGNED_FIELD	(IMG_FALSE)

/*
 * size of the memory structure FELIX_GAMMA_LUT
 * Computed from GMA_BLUE_POINT offset and size
 */
#define FELIX_GAMMA_LUT_BYTE_SIZE		(0x0180)


#ifdef __cplusplus
}
#endif

#endif /* __GAMMALUT_H__ */