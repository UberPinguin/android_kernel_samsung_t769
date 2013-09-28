/* Copyright (c) 2011, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */

#include "ov9726.h"
struct reg_struct_type ov9726_init_settings_array[] = {
	{0x0103, 0x01}, /* SOFTWARE_RESET */
	{0x3026, 0x00}, /* OUTPUT_SELECT01 */
	{0x3027, 0x00}, /* OUTPUT_SELECT02 */
	{0x3002, 0xe8}, /* IO_CTRL00 */
	{0x3004, 0x03}, /* IO_CTRL01 */
	{0x3005, 0xff}, /* IO_CTRL02 */
	{0x3703, 0x42},
	{0x3704, 0x10},
	{0x3705, 0x45},
	{0x3603, 0xaa},
	{0x3632, 0x2f},
	{0x3620, 0x66},
	{0x3621, 0xc0},
	{0x0340, 0x03}, /* FRAME_LENGTH_LINES_HI */
	{0x0341, 0xC1}, /* FRAME_LENGTH_LINES_LO */
	{0x0342, 0x06}, /* LINE_LENGTH_PCK_HI */
	{0x0343, 0x80}, /* LINE_LENGTH_PCK_LO */
	{0x0202, 0x03}, /* COARSE_INTEGRATION_TIME_HI */
	{0x0203, 0x43}, /* COARSE_INTEGRATION_TIME_LO */
	{0x3833, 0x04},
	{0x3835, 0x02},
	{0x4702, 0x04},
	{0x4704, 0x00}, /* DVP_CTRL01 */
	{0x4706, 0x08},
	{0x5052, 0x01},
	{0x3819, 0x6e},
	{0x3817, 0x94},
	{0x3a18, 0x00}, /* AEC_GAIN_CEILING_HI */
	{0x3a19, 0x7f}, /* AEC_GAIN_CEILING_LO */
	{0x404e, 0x7e},
	{0x3631, 0x52},
	{0x3633, 0x50},
	{0x3630, 0xd2},
	{0x3604, 0x08},
	{0x3601, 0x40},
	{0x3602, 0x14},
	{0x3610, 0xa0},
	{0x3612, 0x20},
	{0x034c, 0x05}, /* X_OUTPUT_SIZE_HI */
	{0x034d, 0x10}, /* X_OUTPUT_SIZE_LO */
	{0x034e, 0x03}, /* Y_OUTPUT_SIZE_HI */
	{0x034f, 0x28}, /* Y_OUTPUT_SIZE_LO */
	{0x0340, 0x03}, /* FRAME_LENGTH_LINES_HI */
	{0x0341, 0xC1}, /* FRAME_LENGTH_LINES_LO */
	{0x0342, 0x06}, /* LINE_LENGTH_PCK_HI */
	{0x0343, 0x80}, /* LINE_LENGTH_PCK_LO */
	{0x0202, 0x03}, /* COARSE_INTEGRATION_TIME_HI */
	{0x0203, 0x43}, /* COARSE_INTEGRATION_TIME_LO */
	{0x0303, 0x01}, /* VT_SYS_CLK_DIV_LO */
	{0x3002, 0x00}, /* IO_CTRL00 */
	{0x3004, 0x00}, /* IO_CTRL01 */
	{0x3005, 0x00}, /* IO_CTRL02 */
	{0x4801, 0x0f}, /* MIPI_CTRL01 */
	{0x4803, 0x05}, /* MIPI_CTRL03 */
	{0x4601, 0x16}, /* VFIFO_READ_CONTROL */
	{0x3014, 0x05}, /* SC_CMMN_MIPI / SC_CTRL00 */
	{0x3104, 0x80},
	{0x0305, 0x04}, /* PRE_PLL_CLK_DIV_LO */
	{0x0307, 0x64}, /* PLL_MULTIPLIER_LO */
	{0x300c, 0x02},
	{0x300d, 0x20},
	{0x300e, 0x01},
	{0x3010, 0x01},
	{0x460e, 0x81}, /* VFIFO_CONTROL00 */
	{0x0101, 0x01}, /* IMAGE_ORIENTATION */
	{0x3707, 0x14},
	{0x3622, 0x9f},
	{0x5047, 0x3D}, /* ISP_CTRL47 */
	{0x4002, 0x45}, /* BLC_CTRL02 */
	{0x5000, 0x06}, /* ISP_CTRL0 */
	{0x5001, 0x00}, /* ISP_CTRL1 */
	{0x3406, 0x00}, /* AWB_MANUAL_CTRL */
	{0x3503, 0x13}, /* AEC_ENABLE */
	{0x4005, 0x18}, /* BLC_CTRL05 */
	{0x4837, 0x21},
	{0x0100, 0x01}, /* MODE_SELECT */
	{0x3a0f, 0x64}, /* AEC_CTRL0F */
	{0x3a10, 0x54}, /* AEC_CTRL10 */
	{0x3a11, 0xc2}, /* AEC_CTRL11 */
	{0x3a1b, 0x64}, /* AEC_CTRL1B */
	{0x3a1e, 0x54}, /* AEC_CTRL1E */
	{0x3a1a, 0x05}, /* AEC_DIFF_MAX */
};
int32_t ov9726_array_length = sizeof(ov9726_init_settings_array) /
	sizeof(ov9726_init_settings_array[0]);

