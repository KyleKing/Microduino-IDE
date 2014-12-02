/* This file is autogenerated, do not edit, changes will be lost! */
#ifndef BOARD_CFG_H
#define BOARD_CFG_H (1)

/* === BOARD TYPES === */
#define BOARD_STKM8 (0)
#define BOARD_ICM230_11 (1)
#define BOARD_ICS230_11 (2)
#define BOARD_WDBA1281 (3)
#define BOARD_MNB900 (4)
#define BOARD_MUSE231 (5)
#define BOARD_ICT230 (6)
#define BOARD_IBDT231 (7)
#define BOARD_STB230 (8)
#define BOARD_STB230B (9)
#define BOARD_STB231 (10)
#define BOARD_STB212 (11)
#define BOARD_IBDT212 (12)
#define BOARD_STKM16 (13)
#define BOARD_ZGBH230 (14)
#define BOARD_ZGBH231 (15)
#define BOARD_ZGBH212 (16)
#define BOARD_PSK230 (17)
#define BOARD_PSK230B (18)
#define BOARD_PSK231 (19)
#define BOARD_PSK212 (20)
#define BOARD_RBB230 (21)
#define BOARD_RBB230B (22)
#define BOARD_RBB231 (23)
#define BOARD_RBB212 (24)
#define BOARD_ANY900ST (25)
#define BOARD_ANY2400ST (26)
#define BOARD_RBB128RFA1 (27)
#define BOARD_RDK230 (28)
#define BOARD_RDK230B (29)
#define BOARD_RDK231 (30)
#define BOARD_RDK212 (31)
#define BOARD_RZUSB (32)
#define BOARD_RAVRF230A (33)
#define BOARD_RAVRF230B (34)
#define BOARD_DERFA1 (35)
#define BOARD_LGEE231 (36)
#define BOARD_FUNKOMAT (37)
#define BOARD_FUNKOMAT_V1 (38)
#define BOARD_STB128RFA1 (39)
#define BOARD_ZGBL230 (40)
#define BOARD_ZGBL231 (41)
#define BOARD_ZGBL212 (42)
#define BOARD_LGEE231_V2 (43)
#define BOARD_ZIGDUINO (44)
#define BOARD_TINY230 (45)
#define BOARD_TINY231 (46)
#define BOARD_ANY900 (47)
#define BOARD_ANY2400 (48)

/* === BOARD INCLUDES === */
#if defined(stkm8)
# define BOOT_LOADER_ADDRESS (0x0)
# include "boards/board_stkm8.h"

#elif defined(icm230_11)
# define BOOT_LOADER_ADDRESS (0xf000)
# include "boards/board_ict_11.h"

#elif defined(ics230_11)
# define BOOT_LOADER_ADDRESS (0xf000)
# include "boards/board_ict_11.h"

#elif defined(wdba1281) || defined(mnb900)
# define BOOT_LOADER_ADDRESS (0xf000)
# include "boards/board_wdba1281.h"

#elif defined(muse231)
# define BOOT_LOADER_ADDRESS (0xc00)
# include "boards/board_muse231.h"

#elif defined(ict230)
# define BOOT_LOADER_ADDRESS (0xf000)
# include "boards/board_ict230.h"

#elif defined(ibdt231)
# define BOOT_LOADER_ADDRESS (0x7800)
# include "boards/board_ibdt.h"

#elif defined(stb230) || defined(stb230b) || defined(stb231) || defined(stb212)
# define BOOT_LOADER_ADDRESS (0xf000)
# include "boards/board_stb.h"

#elif defined(ibdt212)
# define BOOT_LOADER_ADDRESS (0x7800)
# include "boards/board_ibdt.h"

#elif defined(stkm16)
# define BOOT_LOADER_ADDRESS (0x1c00)
# include "boards/board_stkm16.h"

#elif defined(zgbh230) || defined(zgbh231) || defined(zgbh212)
# define BOOT_LOADER_ADDRESS (0xf000)
# include "boards/board_zgbl.h"

#elif defined(psk230) || defined(psk230b) || defined(psk231) || defined(psk212)
# define BOOT_LOADER_ADDRESS (0xf000)
# include "boards/board_stk541.h"

#elif defined(rbb230) || defined(rbb230b) || defined(rbb231) || defined(rbb212)
# define BOOT_LOADER_ADDRESS (0xf000)
# include "boards/board_rbb.h"

#elif defined(any900st) || defined(any2400st)
# define BOOT_LOADER_ADDRESS (0xf000)
# include "boards/board_any.h"

#elif defined(rbb128rfa1)
# define BOOT_LOADER_ADDRESS (0xf000)
# include "boards/board_rbbrfa1.h"

#elif defined(rdk230) || defined(rdk230b) || defined(rdk231) || defined(rdk212)
# define BOOT_LOADER_ADDRESS (0xf000)
# include "boards/board_rdk230.h"

#elif defined(rzusb)
# define BOOT_LOADER_ADDRESS (0xf000)
# include "boards/board_rzusb.h"

#elif defined(ravrf230a) || defined(ravrf230b)
# define BOOT_LOADER_ADDRESS (0xf000)
# include "boards/board_ravrf.h"

#elif defined(derfa1)
# define BOOT_LOADER_ADDRESS (0xf000)
# include "boards/board_derfa.h"

#elif defined(lgee231)
# define BOOT_LOADER_ADDRESS (0xc00)
# include "boards/board_lgee.h"

#elif defined(funkomat) || defined(funkomat_v1)
# define BOOT_LOADER_ADDRESS (0xf000)
# include "boards/board_derfa.h"

#elif defined(stb128rfa1)
# define BOOT_LOADER_ADDRESS (0xf000)
# include "boards/board_stbrfa1.h"

#elif defined(zgbl230) || defined(zgbl231) || defined(zgbl212)
# define BOOT_LOADER_ADDRESS (0xf000)
# include "boards/board_zgbl.h"

#elif defined(lgee231_v2)
# define BOOT_LOADER_ADDRESS (0xc00)
# include "boards/board_lgee.h"

#elif defined(zigduino)
# define BOOT_LOADER_ADDRESS (0xf000)
# include "boards/board_derfa.h"

#elif defined(tiny230) || defined(tiny231)
# define BOOT_LOADER_ADDRESS (0x0)
# include "boards/board_tiny230.h"

#elif defined(any900) || defined(any2400)
# define BOOT_LOADER_ADDRESS (0xf000)
# include "boards/board_any.h"

#else
# error "BOARD_TYPE is not defined or wrong"
#endif

#endif /*BOARD_CFG_H*/
