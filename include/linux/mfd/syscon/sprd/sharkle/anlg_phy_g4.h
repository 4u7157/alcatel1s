/*
 * Copyright (C) 2017 Spreadtrum Communications Inc.
 *
 * This file is dual-licensed: you can use it either under the terms
 * of the GPL or the X11 license, at your option. Note that this dual
 * licensing only applies to this file, and not this project as a
 * whole.
 *
 * updated at 2017-06-12 20:13:17
 *
 */


#ifndef ANLG_PHY_G4_H
#define ANLG_PHY_G4_H



#define REG_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_CTRL0          (0x0000)
#define REG_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_CTRL1          (0x0004)
#define REG_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_CTRL2          (0x0008)
#define REG_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_CTRL3          (0x000C)
#define REG_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_BIST_CTRL      (0x0010)
#define REG_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_THM_CTRL       (0x0014)
#define REG_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_THM1_CTRL_0         (0x0018)
#define REG_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_THM1_CTRL_1         (0x001C)
#define REG_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_ANA_MPLL_DUMY       (0x0020)

/* REG_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_CTRL0 */

#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_N(x)                (((x) & 0x7FF) << 8)
#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_IBIAS(x)            (((x) & 0x3) << 6)
#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_LPF(x)              (((x) & 0x7) << 3)
#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_SDM_EN              BIT(2)
#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_MOD_EN              BIT(1)
#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_DIV_S               BIT(0)

/* REG_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_CTRL1 */

#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_NINT(x)             (((x) & 0x7F) << 23)
#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_KINT(x)             (((x) & 0x7FFFFF))

/* REG_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_CTRL2 */

#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_RESERVED(x)         (((x) & 0xFF) << 1)
#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_POSTDIV             BIT(0)

/* REG_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_CTRL3 */

#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_CCS_CTRL(x)         (((x) & 0xFF))

/* REG_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_BIST_CTRL */

#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_BIST_EN             BIT(24)
#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_BIST_CTRL(x)        (((x) & 0xFF) << 16)
#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_BIST_CNT(x)         (((x) & 0xFFFF))

/* REG_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_MPLL_THM_CTRL */

#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_TEST_CLK_EN              BIT(13)
#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_TEST_SEL                 BIT(12)
#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_TEST_THM_SEL             BIT(11)
#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_ANALOG_PLL_RESERVED(x)   (((x) & 0x7FF))

/* REG_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_THM1_CTRL_0 */

#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_THM_BG_RBIAS_MODE        BIT(2)
#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_THM_TEST_SEL(x)          (((x) & 0x3))

/* REG_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_THM1_CTRL_1 */

#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_THM_BP_MODE              BIT(24)
#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_THM_BP_DATA(x)           (((x) & 0xFF) << 16)
#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_THM_RESERVED(x)          (((x) & 0xFFFF))

/* REG_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_ANA_MPLL_DUMY */

#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_ANALOG_MPLL_DUMY_IN(x)   (((x) & 0xFFFF) << 16)
#define BIT_ANLG_PHY_G4_ANALOG_MPLL_THM_TOP_ANALOG_MPLL_DUMY_OUT(x)  (((x) & 0xFFFF))


#endif /* ANLG_PHY_G4_H */

