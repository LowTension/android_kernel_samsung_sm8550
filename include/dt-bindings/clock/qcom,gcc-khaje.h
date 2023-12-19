/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2022, Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef _DT_BINDINGS_CLK_QCOM_GCC_KHAJE_H
#define _DT_BINDINGS_CLK_QCOM_GCC_KHAJE_H

/* GCC clocks */
#define GCC_AHB2PHY_CSI_CLK					0
#define GCC_AHB2PHY_USB_CLK					1
#define GCC_APC_VS_CLK						2
#define GCC_BIMC_GPU_AXI_CLK					3
#define GCC_BOOT_ROM_AHB_CLK					4
#define GCC_CAM_THROTTLE_NRT_CLK				5
#define GCC_CAM_THROTTLE_RT_CLK					6
#define GCC_CAMERA_AHB_CLK					7
#define GCC_CAMERA_XO_CLK					8
#define GCC_CAMSS_AXI_CLK					9
#define GCC_CAMSS_AXI_CLK_SRC					10
#define GCC_CAMSS_CAMNOC_ATB_CLK				11
#define GCC_CAMSS_CAMNOC_NTS_XO_CLK				12
#define GCC_CAMSS_CCI_0_CLK					13
#define GCC_CAMSS_CCI_CLK_SRC					14
#define GCC_CAMSS_CPHY_0_CLK					15
#define GCC_CAMSS_CPHY_1_CLK					16
#define GCC_CAMSS_CPHY_2_CLK					17
#define GCC_CAMSS_CSI0PHYTIMER_CLK				18
#define GCC_CAMSS_CSI0PHYTIMER_CLK_SRC				19
#define GCC_CAMSS_CSI1PHYTIMER_CLK				20
#define GCC_CAMSS_CSI1PHYTIMER_CLK_SRC				21
#define GCC_CAMSS_CSI2PHYTIMER_CLK				22
#define GCC_CAMSS_CSI2PHYTIMER_CLK_SRC				23
#define GCC_CAMSS_MCLK0_CLK					24
#define GCC_CAMSS_MCLK0_CLK_SRC					25
#define GCC_CAMSS_MCLK1_CLK					26
#define GCC_CAMSS_MCLK1_CLK_SRC					27
#define GCC_CAMSS_MCLK2_CLK					28
#define GCC_CAMSS_MCLK2_CLK_SRC					29
#define GCC_CAMSS_MCLK3_CLK					30
#define GCC_CAMSS_MCLK3_CLK_SRC					31
#define GCC_CAMSS_NRT_AXI_CLK					32
#define GCC_CAMSS_OPE_AHB_CLK					33
#define GCC_CAMSS_OPE_AHB_CLK_SRC				34
#define GCC_CAMSS_OPE_CLK					35
#define GCC_CAMSS_OPE_CLK_SRC					36
#define GCC_CAMSS_RT_AXI_CLK					37
#define GCC_CAMSS_TFE_0_CLK					38
#define GCC_CAMSS_TFE_0_CLK_SRC					39
#define GCC_CAMSS_TFE_0_CPHY_RX_CLK				40
#define GCC_CAMSS_TFE_0_CSID_CLK				41
#define GCC_CAMSS_TFE_0_CSID_CLK_SRC				42
#define GCC_CAMSS_TFE_1_CLK					43
#define GCC_CAMSS_TFE_1_CLK_SRC					44
#define GCC_CAMSS_TFE_1_CPHY_RX_CLK				45
#define GCC_CAMSS_TFE_1_CSID_CLK				46
#define GCC_CAMSS_TFE_1_CSID_CLK_SRC				47
#define GCC_CAMSS_TFE_2_CLK					48
#define GCC_CAMSS_TFE_2_CLK_SRC					49
#define GCC_CAMSS_TFE_2_CPHY_RX_CLK				50
#define GCC_CAMSS_TFE_2_CSID_CLK				51
#define GCC_CAMSS_TFE_2_CSID_CLK_SRC				52
#define GCC_CAMSS_TFE_CPHY_RX_CLK_SRC				53
#define GCC_CAMSS_TOP_AHB_CLK					54
#define GCC_CAMSS_TOP_AHB_CLK_SRC				55
#define GCC_CFG_NOC_USB3_PRIM_AXI_CLK				56
#define GCC_CPUSS_AHB_CLK_SRC					57
#define GCC_CPUSS_AHB_POSTDIV_CLK_SRC				58
#define GCC_CPUSS_GNOC_CLK					59
#define GCC_DISP_AHB_CLK					60
#define GCC_DISP_GPLL0_DIV_CLK_SRC				61
#define GCC_DISP_HF_AXI_CLK					62
#define GCC_DISP_SLEEP_CLK					63
#define GCC_DISP_THROTTLE_CORE_CLK				64
#define GCC_DISP_XO_CLK						65
#define GCC_GP1_CLK						66
#define GCC_GP1_CLK_SRC						67
#define GCC_GP2_CLK						68
#define GCC_GP2_CLK_SRC						69
#define GCC_GP3_CLK						70
#define GCC_GP3_CLK_SRC						71
#define GCC_GPU_CFG_AHB_CLK					72
#define GCC_GPU_GPLL0_CLK_SRC					73
#define GCC_GPU_GPLL0_DIV_CLK_SRC				74
#define GCC_GPU_IREF_CLK					75
#define GCC_GPU_MEMNOC_GFX_CLK					76
#define GCC_GPU_SNOC_DVM_GFX_CLK				77
#define GCC_GPU_THROTTLE_CORE_CLK				78
#define GCC_MSS_VS_CLK						79
#define GCC_PDM2_CLK						80
#define GCC_PDM2_CLK_SRC					81
#define GCC_PDM_AHB_CLK						82
#define GCC_PDM_XO4_CLK						83
#define GCC_PRNG_AHB_CLK					84
#define GCC_QMIP_CAMERA_NRT_AHB_CLK				85
#define GCC_QMIP_CAMERA_RT_AHB_CLK				86
#define GCC_QMIP_DISP_AHB_CLK					87
#define GCC_QMIP_GPU_CFG_AHB_CLK				88
#define GCC_QMIP_VIDEO_VCODEC_AHB_CLK				89
#define GCC_QUPV3_WRAP0_CORE_2X_CLK				90
#define GCC_QUPV3_WRAP0_CORE_CLK				91
#define GCC_QUPV3_WRAP0_S0_CLK					92
#define GCC_QUPV3_WRAP0_S0_CLK_SRC				93
#define GCC_QUPV3_WRAP0_S1_CLK					94
#define GCC_QUPV3_WRAP0_S1_CLK_SRC				95
#define GCC_QUPV3_WRAP0_S2_CLK					96
#define GCC_QUPV3_WRAP0_S2_CLK_SRC				97
#define GCC_QUPV3_WRAP0_S3_CLK					98
#define GCC_QUPV3_WRAP0_S3_CLK_SRC				99
#define GCC_QUPV3_WRAP0_S4_CLK					100
#define GCC_QUPV3_WRAP0_S4_CLK_SRC				101
#define GCC_QUPV3_WRAP0_S5_CLK					102
#define GCC_QUPV3_WRAP0_S5_CLK_SRC				103
#define GCC_QUPV3_WRAP_0_M_AHB_CLK				104
#define GCC_QUPV3_WRAP_0_S_AHB_CLK				105
#define GCC_SDCC1_AHB_CLK					106
#define GCC_SDCC1_APPS_CLK					107
#define GCC_SDCC1_APPS_CLK_SRC					108
#define GCC_SDCC1_ICE_CORE_CLK					109
#define GCC_SDCC1_ICE_CORE_CLK_SRC				110
#define GCC_SDCC2_AHB_CLK					111
#define GCC_SDCC2_APPS_CLK					112
#define GCC_SDCC2_APPS_CLK_SRC					113
#define GCC_SYS_NOC_CPUSS_AHB_CLK				114
#define GCC_SYS_NOC_UFS_PHY_AXI_CLK				115
#define GCC_SYS_NOC_USB3_PRIM_AXI_CLK				116
#define GCC_UFS_CLKREF_CLK					117
#define GCC_UFS_PHY_AHB_CLK					118
#define GCC_UFS_PHY_AXI_CLK					119
#define GCC_UFS_PHY_AXI_CLK_SRC					120
#define GCC_UFS_PHY_ICE_CORE_CLK				121
#define GCC_UFS_PHY_ICE_CORE_CLK_SRC				122
#define GCC_UFS_PHY_PHY_AUX_CLK					123
#define GCC_UFS_PHY_PHY_AUX_CLK_SRC				124
#define GCC_UFS_PHY_RX_SYMBOL_0_CLK				125
#define GCC_UFS_PHY_RX_SYMBOL_0_CLK_SRC				126
#define GCC_UFS_PHY_RX_SYMBOL_1_CLK				127
#define GCC_UFS_PHY_RX_SYMBOL_1_CLK_SRC				128
#define GCC_UFS_PHY_TX_SYMBOL_0_CLK				129
#define GCC_UFS_PHY_TX_SYMBOL_0_CLK_SRC				130
#define GCC_UFS_PHY_UNIPRO_CORE_CLK				131
#define GCC_UFS_PHY_UNIPRO_CORE_CLK_SRC				132
#define GCC_USB30_PRIM_MASTER_CLK				133
#define GCC_USB30_PRIM_MASTER_CLK_SRC				134
#define GCC_USB30_PRIM_MOCK_UTMI_CLK				135
#define GCC_USB30_PRIM_MOCK_UTMI_CLK_SRC			136
#define GCC_USB30_PRIM_MOCK_UTMI_POSTDIV_CLK_SRC		137
#define GCC_USB30_PRIM_SLEEP_CLK				138
#define GCC_USB3_PRIM_CLKREF_CLK				139
#define GCC_USB3_PRIM_PHY_AUX_CLK_SRC				140
#define GCC_USB3_PRIM_PHY_COM_AUX_CLK				141
#define GCC_USB3_PRIM_PHY_PIPE_CLK				142
#define GCC_USB3_PRIM_PHY_PIPE_CLK_SRC				143
#define GCC_VCODEC0_AXI_CLK					144
#define GCC_VDDA_VS_CLK						145
#define GCC_VDDCX_VS_CLK					146
#define GCC_VDDMX_VS_CLK					147
#define GCC_VENUS_AHB_CLK					148
#define GCC_VENUS_CTL_AXI_CLK					149
#define GCC_VIDEO_AHB_CLK					150
#define GCC_VIDEO_AXI0_CLK					151
#define GCC_VIDEO_THROTTLE_CORE_CLK				152
#define GCC_VIDEO_VCODEC0_SYS_CLK				153
#define GCC_VIDEO_VENUS_CLK_SRC					154
#define GCC_VIDEO_VENUS_CTL_CLK					155
#define GCC_VIDEO_XO_CLK					156
#define GCC_VS_CTRL_AHB_CLK					157
#define GCC_VS_CTRL_CLK						158
#define GCC_VS_CTRL_CLK_SRC					159
#define GCC_VSENSOR_CLK_SRC					160
#define GCC_WCSS_VS_CLK						161
#define GPLL0							162
#define GPLL0_OUT_EVEN						163
#define GPLL1							164
#define GPLL10							165
#define GPLL11							166
#define GPLL3							167
#define GPLL3_OUT_EVEN						168
#define GPLL4							169
#define GPLL5							170
#define GPLL6							171
#define GPLL6_OUT_EVEN						172
#define GPLL7							173
#define GPLL8							174
#define GPLL8_OUT_EVEN						175
#define GPLL9							176
#define GPLL9_OUT_MAIN						177
#define GCC_DISP_GPLL0_CLK_SRC					178

/* GCC resets */
#define GCC_QUSB2PHY_PRIM_BCR					0
#define GCC_QUSB2PHY_SEC_BCR					1
#define GCC_SDCC1_BCR						2
#define GCC_SDCC2_BCR						3
#define GCC_UFS_PHY_BCR						4
#define GCC_USB30_PRIM_BCR					5
#define GCC_USB_PHY_CFG_AHB2PHY_BCR				6
#define GCC_VCODEC0_BCR						7
#define GCC_VENUS_BCR						8
#define GCC_VIDEO_INTERFACE_BCR					9
#define GCC_USB3PHY_PHY_PRIM_SP0_BCR				10
#define GCC_USB3_PHY_PRIM_SP0_BCR				11
#define GCC_USB3_DP_PHY_PRIM_BCR				12

#endif
