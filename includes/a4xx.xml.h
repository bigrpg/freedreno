#ifndef A4XX_XML
#define A4XX_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://github.com/freedreno/envytools/
git clone https://github.com/freedreno/envytools.git

The rules-ng-ng source files this header was generated from are:
- /home/robclark/src/freedreno/envytools/rnndb/adreno.xml               (    364 bytes, from 2013-11-30 14:47:15)
- /home/robclark/src/freedreno/envytools/rnndb/freedreno_copyright.xml  (   1453 bytes, from 2013-03-31 16:51:27)
- /home/robclark/src/freedreno/envytools/rnndb/adreno/a2xx.xml          (  32580 bytes, from 2014-03-11 20:33:21)
- /home/robclark/src/freedreno/envytools/rnndb/adreno/adreno_common.xml (   9845 bytes, from 2014-03-11 20:33:21)
- /home/robclark/src/freedreno/envytools/rnndb/adreno/adreno_pm4.xml    (  14477 bytes, from 2014-03-11 20:33:21)
- /home/robclark/src/freedreno/envytools/rnndb/adreno/a3xx.xml          (  56146 bytes, from 2014-03-11 20:33:21)
- /home/robclark/src/freedreno/envytools/rnndb/adreno/a4xx.xml          (  17174 bytes, from 2014-03-11 20:33:21)

Copyright (C) 2013-2014 by the following authors:
- Rob Clark <robdclark@gmail.com> (robclark)

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE COPYRIGHT OWNER(S) AND/OR ITS SUPPLIERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


#define REG_A4XX_RB_GMEM_BASE_ADDR				0x00000cc0

#define REG_A4XX_RB_PERFCTR_CCU_SEL_3				0x00000cd2

#define REG_A4XX_RB_FRAME_BUFFER_DIMENSION			0x00000ce0
#define A4XX_RB_FRAME_BUFFER_DIMENSION_WIDTH__MASK		0x00003fff
#define A4XX_RB_FRAME_BUFFER_DIMENSION_WIDTH__SHIFT		0
static inline uint32_t A4XX_RB_FRAME_BUFFER_DIMENSION_WIDTH(uint32_t val)
{
	return ((val) << A4XX_RB_FRAME_BUFFER_DIMENSION_WIDTH__SHIFT) & A4XX_RB_FRAME_BUFFER_DIMENSION_WIDTH__MASK;
}
#define A4XX_RB_FRAME_BUFFER_DIMENSION_HEIGHT__MASK		0x3fff0000
#define A4XX_RB_FRAME_BUFFER_DIMENSION_HEIGHT__SHIFT		16
static inline uint32_t A4XX_RB_FRAME_BUFFER_DIMENSION_HEIGHT(uint32_t val)
{
	return ((val) << A4XX_RB_FRAME_BUFFER_DIMENSION_HEIGHT__SHIFT) & A4XX_RB_FRAME_BUFFER_DIMENSION_HEIGHT__MASK;
}

#define REG_A4XX_RB_CLEAR_COLOR_DW0				0x000020cc

#define REG_A4XX_RB_CLEAR_COLOR_DW1				0x000020cd

#define REG_A4XX_RB_CLEAR_COLOR_DW2				0x000020ce

#define REG_A4XX_RB_CLEAR_COLOR_DW3				0x000020cf

#define REG_A4XX_RB_MODE_CONTROL				0x000020a0

static inline uint32_t REG_A4XX_RB_MRT(uint32_t i0) { return 0x000020a4 + 0x5*i0; }

static inline uint32_t REG_A4XX_RB_MRT_CONTROL(uint32_t i0) { return 0x000020a4 + 0x5*i0; }
#define A4XX_RB_MRT_CONTROL_READ_DEST_ENABLE			0x00000008
#define A4XX_RB_MRT_CONTROL_BLEND				0x00000010
#define A4XX_RB_MRT_CONTROL_BLEND2				0x00000020
#define A4XX_RB_MRT_CONTROL_COMPONENT_ENABLE__MASK		0x0f000000
#define A4XX_RB_MRT_CONTROL_COMPONENT_ENABLE__SHIFT		24
static inline uint32_t A4XX_RB_MRT_CONTROL_COMPONENT_ENABLE(uint32_t val)
{
	return ((val) << A4XX_RB_MRT_CONTROL_COMPONENT_ENABLE__SHIFT) & A4XX_RB_MRT_CONTROL_COMPONENT_ENABLE__MASK;
}

static inline uint32_t REG_A4XX_RB_MRT_CONTROL2(uint32_t i0) { return 0x000020a5 + 0x5*i0; }
#define A4XX_RB_MRT_CONTROL2_DITHER_MODE__MASK			0x00000600
#define A4XX_RB_MRT_CONTROL2_DITHER_MODE__SHIFT			9
static inline uint32_t A4XX_RB_MRT_CONTROL2_DITHER_MODE(enum adreno_rb_dither_mode val)
{
	return ((val) << A4XX_RB_MRT_CONTROL2_DITHER_MODE__SHIFT) & A4XX_RB_MRT_CONTROL2_DITHER_MODE__MASK;
}

static inline uint32_t REG_A4XX_RB_MRT_BLEND_CONTROL(uint32_t i0) { return 0x000020a8 + 0x5*i0; }
#define A4XX_RB_MRT_BLEND_CONTROL_RGB_SRC_FACTOR__MASK		0x0000001f
#define A4XX_RB_MRT_BLEND_CONTROL_RGB_SRC_FACTOR__SHIFT		0
static inline uint32_t A4XX_RB_MRT_BLEND_CONTROL_RGB_SRC_FACTOR(enum adreno_rb_blend_factor val)
{
	return ((val) << A4XX_RB_MRT_BLEND_CONTROL_RGB_SRC_FACTOR__SHIFT) & A4XX_RB_MRT_BLEND_CONTROL_RGB_SRC_FACTOR__MASK;
}
#define A4XX_RB_MRT_BLEND_CONTROL_RGB_BLEND_OPCODE__MASK	0x000000e0
#define A4XX_RB_MRT_BLEND_CONTROL_RGB_BLEND_OPCODE__SHIFT	5
static inline uint32_t A4XX_RB_MRT_BLEND_CONTROL_RGB_BLEND_OPCODE(enum adreno_rb_blend_opcode val)
{
	return ((val) << A4XX_RB_MRT_BLEND_CONTROL_RGB_BLEND_OPCODE__SHIFT) & A4XX_RB_MRT_BLEND_CONTROL_RGB_BLEND_OPCODE__MASK;
}
#define A4XX_RB_MRT_BLEND_CONTROL_RGB_DEST_FACTOR__MASK		0x00001f00
#define A4XX_RB_MRT_BLEND_CONTROL_RGB_DEST_FACTOR__SHIFT	8
static inline uint32_t A4XX_RB_MRT_BLEND_CONTROL_RGB_DEST_FACTOR(enum adreno_rb_blend_factor val)
{
	return ((val) << A4XX_RB_MRT_BLEND_CONTROL_RGB_DEST_FACTOR__SHIFT) & A4XX_RB_MRT_BLEND_CONTROL_RGB_DEST_FACTOR__MASK;
}
#define A4XX_RB_MRT_BLEND_CONTROL_ALPHA_SRC_FACTOR__MASK	0x001f0000
#define A4XX_RB_MRT_BLEND_CONTROL_ALPHA_SRC_FACTOR__SHIFT	16
static inline uint32_t A4XX_RB_MRT_BLEND_CONTROL_ALPHA_SRC_FACTOR(enum adreno_rb_blend_factor val)
{
	return ((val) << A4XX_RB_MRT_BLEND_CONTROL_ALPHA_SRC_FACTOR__SHIFT) & A4XX_RB_MRT_BLEND_CONTROL_ALPHA_SRC_FACTOR__MASK;
}
#define A4XX_RB_MRT_BLEND_CONTROL_ALPHA_BLEND_OPCODE__MASK	0x00e00000
#define A4XX_RB_MRT_BLEND_CONTROL_ALPHA_BLEND_OPCODE__SHIFT	21
static inline uint32_t A4XX_RB_MRT_BLEND_CONTROL_ALPHA_BLEND_OPCODE(enum adreno_rb_blend_opcode val)
{
	return ((val) << A4XX_RB_MRT_BLEND_CONTROL_ALPHA_BLEND_OPCODE__SHIFT) & A4XX_RB_MRT_BLEND_CONTROL_ALPHA_BLEND_OPCODE__MASK;
}
#define A4XX_RB_MRT_BLEND_CONTROL_ALPHA_DEST_FACTOR__MASK	0x1f000000
#define A4XX_RB_MRT_BLEND_CONTROL_ALPHA_DEST_FACTOR__SHIFT	24
static inline uint32_t A4XX_RB_MRT_BLEND_CONTROL_ALPHA_DEST_FACTOR(enum adreno_rb_blend_factor val)
{
	return ((val) << A4XX_RB_MRT_BLEND_CONTROL_ALPHA_DEST_FACTOR__SHIFT) & A4XX_RB_MRT_BLEND_CONTROL_ALPHA_DEST_FACTOR__MASK;
}

#define REG_A4XX_RB_RENDER_CONTROL				0x000020f8
#define A4XX_RB_RENDER_CONTROL_ALPHA_TEST			0x00000100
#define A4XX_RB_RENDER_CONTROL_ALPHA_TEST_FUNC__MASK		0x00000e00
#define A4XX_RB_RENDER_CONTROL_ALPHA_TEST_FUNC__SHIFT		9
static inline uint32_t A4XX_RB_RENDER_CONTROL_ALPHA_TEST_FUNC(enum adreno_compare_func val)
{
	return ((val) << A4XX_RB_RENDER_CONTROL_ALPHA_TEST_FUNC__SHIFT) & A4XX_RB_RENDER_CONTROL_ALPHA_TEST_FUNC__MASK;
}

#define REG_A4XX_RB_COPY_CONTROL				0x000020fc
#define A4XX_RB_COPY_CONTROL_MSAA_RESOLVE__MASK			0x00000003
#define A4XX_RB_COPY_CONTROL_MSAA_RESOLVE__SHIFT		0
static inline uint32_t A4XX_RB_COPY_CONTROL_MSAA_RESOLVE(enum a3xx_msaa_samples val)
{
	return ((val) << A4XX_RB_COPY_CONTROL_MSAA_RESOLVE__SHIFT) & A4XX_RB_COPY_CONTROL_MSAA_RESOLVE__MASK;
}
#define A4XX_RB_COPY_CONTROL_MODE__MASK				0x00000070
#define A4XX_RB_COPY_CONTROL_MODE__SHIFT			4
static inline uint32_t A4XX_RB_COPY_CONTROL_MODE(enum adreno_rb_copy_control_mode val)
{
	return ((val) << A4XX_RB_COPY_CONTROL_MODE__SHIFT) & A4XX_RB_COPY_CONTROL_MODE__MASK;
}
#define A4XX_RB_COPY_CONTROL_FASTCLEAR__MASK			0x00000f00
#define A4XX_RB_COPY_CONTROL_FASTCLEAR__SHIFT			8
static inline uint32_t A4XX_RB_COPY_CONTROL_FASTCLEAR(uint32_t val)
{
	return ((val) << A4XX_RB_COPY_CONTROL_FASTCLEAR__SHIFT) & A4XX_RB_COPY_CONTROL_FASTCLEAR__MASK;
}
#define A4XX_RB_COPY_CONTROL_GMEM_BASE__MASK			0xffffc000
#define A4XX_RB_COPY_CONTROL_GMEM_BASE__SHIFT			14
static inline uint32_t A4XX_RB_COPY_CONTROL_GMEM_BASE(uint32_t val)
{
	return ((val >> 14) << A4XX_RB_COPY_CONTROL_GMEM_BASE__SHIFT) & A4XX_RB_COPY_CONTROL_GMEM_BASE__MASK;
}

#define REG_A4XX_RB_COPY_DEST_BASE				0x000020fd
#define A4XX_RB_COPY_DEST_BASE_BASE__MASK			0xfffffff0
#define A4XX_RB_COPY_DEST_BASE_BASE__SHIFT			4
static inline uint32_t A4XX_RB_COPY_DEST_BASE_BASE(uint32_t val)
{
	return ((val >> 4) << A4XX_RB_COPY_DEST_BASE_BASE__SHIFT) & A4XX_RB_COPY_DEST_BASE_BASE__MASK;
}

#define REG_A4XX_RB_COPY_DEST_PITCH				0x000020fe
#define A4XX_RB_COPY_DEST_PITCH_PITCH__MASK			0xffffffff
#define A4XX_RB_COPY_DEST_PITCH_PITCH__SHIFT			0
static inline uint32_t A4XX_RB_COPY_DEST_PITCH_PITCH(uint32_t val)
{
	return ((val >> 5) << A4XX_RB_COPY_DEST_PITCH_PITCH__SHIFT) & A4XX_RB_COPY_DEST_PITCH_PITCH__MASK;
}

#define REG_A4XX_RB_COPY_DEST_INFO				0x000020ff
#define A4XX_RB_COPY_DEST_INFO_DITHER_MODE__MASK		0x00000c00
#define A4XX_RB_COPY_DEST_INFO_DITHER_MODE__SHIFT		10
static inline uint32_t A4XX_RB_COPY_DEST_INFO_DITHER_MODE(enum adreno_rb_dither_mode val)
{
	return ((val) << A4XX_RB_COPY_DEST_INFO_DITHER_MODE__SHIFT) & A4XX_RB_COPY_DEST_INFO_DITHER_MODE__MASK;
}
#define A4XX_RB_COPY_DEST_INFO_COMPONENT_ENABLE__MASK		0x0003c000
#define A4XX_RB_COPY_DEST_INFO_COMPONENT_ENABLE__SHIFT		14
static inline uint32_t A4XX_RB_COPY_DEST_INFO_COMPONENT_ENABLE(uint32_t val)
{
	return ((val) << A4XX_RB_COPY_DEST_INFO_COMPONENT_ENABLE__SHIFT) & A4XX_RB_COPY_DEST_INFO_COMPONENT_ENABLE__MASK;
}
#define A4XX_RB_COPY_DEST_INFO_ENDIAN__MASK			0x001c0000
#define A4XX_RB_COPY_DEST_INFO_ENDIAN__SHIFT			18
static inline uint32_t A4XX_RB_COPY_DEST_INFO_ENDIAN(enum adreno_rb_surface_endian val)
{
	return ((val) << A4XX_RB_COPY_DEST_INFO_ENDIAN__SHIFT) & A4XX_RB_COPY_DEST_INFO_ENDIAN__MASK;
}

#define REG_A4XX_RB_DEPTH_CONTROL				0x00002101
#define A4XX_RB_DEPTH_CONTROL_FRAG_WRITES_Z			0x00000001
#define A4XX_RB_DEPTH_CONTROL_Z_ENABLE				0x00000002
#define A4XX_RB_DEPTH_CONTROL_Z_WRITE_ENABLE			0x00000004
#define A4XX_RB_DEPTH_CONTROL_EARLY_Z_DISABLE			0x00000008
#define A4XX_RB_DEPTH_CONTROL_ZFUNC__MASK			0x00000070
#define A4XX_RB_DEPTH_CONTROL_ZFUNC__SHIFT			4
static inline uint32_t A4XX_RB_DEPTH_CONTROL_ZFUNC(enum adreno_compare_func val)
{
	return ((val) << A4XX_RB_DEPTH_CONTROL_ZFUNC__SHIFT) & A4XX_RB_DEPTH_CONTROL_ZFUNC__MASK;
}
#define A4XX_RB_DEPTH_CONTROL_BF_ENABLE				0x00000080
#define A4XX_RB_DEPTH_CONTROL_Z_TEST_ENABLE			0x80000000

#define REG_A4XX_RB_STENCIL_CONTROL				0x00002106
#define A4XX_RB_STENCIL_CONTROL_STENCIL_ENABLE			0x00000001
#define A4XX_RB_STENCIL_CONTROL_STENCIL_ENABLE_BF		0x00000002
#define A4XX_RB_STENCIL_CONTROL_STENCIL_READ			0x00000004
#define A4XX_RB_STENCIL_CONTROL_FUNC__MASK			0x00000700
#define A4XX_RB_STENCIL_CONTROL_FUNC__SHIFT			8
static inline uint32_t A4XX_RB_STENCIL_CONTROL_FUNC(enum adreno_compare_func val)
{
	return ((val) << A4XX_RB_STENCIL_CONTROL_FUNC__SHIFT) & A4XX_RB_STENCIL_CONTROL_FUNC__MASK;
}
#define A4XX_RB_STENCIL_CONTROL_FAIL__MASK			0x00003800
#define A4XX_RB_STENCIL_CONTROL_FAIL__SHIFT			11
static inline uint32_t A4XX_RB_STENCIL_CONTROL_FAIL(enum adreno_stencil_op val)
{
	return ((val) << A4XX_RB_STENCIL_CONTROL_FAIL__SHIFT) & A4XX_RB_STENCIL_CONTROL_FAIL__MASK;
}
#define A4XX_RB_STENCIL_CONTROL_ZPASS__MASK			0x0001c000
#define A4XX_RB_STENCIL_CONTROL_ZPASS__SHIFT			14
static inline uint32_t A4XX_RB_STENCIL_CONTROL_ZPASS(enum adreno_stencil_op val)
{
	return ((val) << A4XX_RB_STENCIL_CONTROL_ZPASS__SHIFT) & A4XX_RB_STENCIL_CONTROL_ZPASS__MASK;
}
#define A4XX_RB_STENCIL_CONTROL_ZFAIL__MASK			0x000e0000
#define A4XX_RB_STENCIL_CONTROL_ZFAIL__SHIFT			17
static inline uint32_t A4XX_RB_STENCIL_CONTROL_ZFAIL(enum adreno_stencil_op val)
{
	return ((val) << A4XX_RB_STENCIL_CONTROL_ZFAIL__SHIFT) & A4XX_RB_STENCIL_CONTROL_ZFAIL__MASK;
}
#define A4XX_RB_STENCIL_CONTROL_FUNC_BF__MASK			0x00700000
#define A4XX_RB_STENCIL_CONTROL_FUNC_BF__SHIFT			20
static inline uint32_t A4XX_RB_STENCIL_CONTROL_FUNC_BF(enum adreno_compare_func val)
{
	return ((val) << A4XX_RB_STENCIL_CONTROL_FUNC_BF__SHIFT) & A4XX_RB_STENCIL_CONTROL_FUNC_BF__MASK;
}
#define A4XX_RB_STENCIL_CONTROL_FAIL_BF__MASK			0x03800000
#define A4XX_RB_STENCIL_CONTROL_FAIL_BF__SHIFT			23
static inline uint32_t A4XX_RB_STENCIL_CONTROL_FAIL_BF(enum adreno_stencil_op val)
{
	return ((val) << A4XX_RB_STENCIL_CONTROL_FAIL_BF__SHIFT) & A4XX_RB_STENCIL_CONTROL_FAIL_BF__MASK;
}
#define A4XX_RB_STENCIL_CONTROL_ZPASS_BF__MASK			0x1c000000
#define A4XX_RB_STENCIL_CONTROL_ZPASS_BF__SHIFT			26
static inline uint32_t A4XX_RB_STENCIL_CONTROL_ZPASS_BF(enum adreno_stencil_op val)
{
	return ((val) << A4XX_RB_STENCIL_CONTROL_ZPASS_BF__SHIFT) & A4XX_RB_STENCIL_CONTROL_ZPASS_BF__MASK;
}
#define A4XX_RB_STENCIL_CONTROL_ZFAIL_BF__MASK			0xe0000000
#define A4XX_RB_STENCIL_CONTROL_ZFAIL_BF__SHIFT			29
static inline uint32_t A4XX_RB_STENCIL_CONTROL_ZFAIL_BF(enum adreno_stencil_op val)
{
	return ((val) << A4XX_RB_STENCIL_CONTROL_ZFAIL_BF__SHIFT) & A4XX_RB_STENCIL_CONTROL_ZFAIL_BF__MASK;
}

#define REG_A4XX_RB_VPORT_Z_CLAMP_MAX_15			0x0000213f

#define REG_A4XX_RBBM_HW_VERSION				0x00000000

#define REG_A4XX_RBBM_HW_CONFIGURATION				0x00000002

#define REG_A4XX_RBBM_CLOCK_CTL					0x00000020

#define REG_A4XX_RBBM_SP_HYST_CNT				0x00000021

#define REG_A4XX_RBBM_AHB_CTL0					0x00000023

#define REG_A4XX_RBBM_AHB_CTL1					0x00000024

#define REG_A4XX_RBBM_AHB_CMD					0x00000025

#define REG_A4XX_RBBM_RB_SUB_BLOCK_SEL_CTL			0x00000026

#define REG_A4XX_RBBM_RAM_ACC_63_32				0x00000028

#define REG_A4XX_RBBM_WAIT_IDLE_CLOCKS_CTL			0x0000002b

#define REG_A4XX_RBBM_INTERFACE_HANG_INT_CTL			0x0000002f

#define REG_A4XX_RBBM_INTERFACE_HANG_MASK_CTL4			0x00000034

#define REG_A4XX_RBBM_INT_CLEAR_CMD				0x00000036

#define REG_A4XX_RBBM_INT_0_MASK				0x00000037

#define REG_A4XX_RBBM_AHB_DEBUG_CTL				0x0000003f

#define REG_A4XX_RBBM_VBIF_DEBUG_CTL				0x00000041

#define REG_A4XX_RBBM_BLOCK_SW_RESET_CMD			0x00000045

#define REG_A4XX_RBBM_RESET_CYCLES				0x00000047

#define REG_A4XX_RBBM_EXT_TRACE_BUS_CTL				0x00000049

#define REG_A4XX_RBBM_PERFCTR_CP_0_LO				0x0000009c

#define REG_A4XX_RBBM_PERFCTR_PWR_1_LO				0x00000168

#define REG_A4XX_RBBM_PERFCTR_CTL				0x00000170

#define REG_A4XX_RBBM_PERFCTR_LOAD_CMD0				0x00000171

#define REG_A4XX_RBBM_PERFCTR_LOAD_CMD1				0x00000172

#define REG_A4XX_RBBM_PERFCTR_LOAD_CMD2				0x00000173

#define REG_A4XX_RBBM_PERFCTR_LOAD_VALUE_LO			0x00000174

#define REG_A4XX_RBBM_GPU_BUSY_MASKED				0x0000017a

#define REG_A4XX_RBBM_INT_0_STATUS				0x0000017d

#define REG_A4XX_RBBM_CLOCK_STATUS				0x00000182

#define REG_A4XX_RBBM_AHB_STATUS				0x00000189

#define REG_A4XX_RBBM_AHB_ERROR_STATUS				0x0000018f

#define REG_A4XX_RBBM_STATUS					0x00000191

#define REG_A4XX_RBBM_INTERFACE_RRDY_STATUS5			0x0000019f

#define REG_A4XX_CP_SCRATCH_UMASK				0x00000228

#define REG_A4XX_CP_SCRATCH_ADDR				0x00000229

#define REG_A4XX_CP_RB_BASE					0x00000200

#define REG_A4XX_CP_RB_CNTL					0x00000201

#define REG_A4XX_CP_RB_WPTR					0x00000205

#define REG_A4XX_CP_RB_RPTR_ADDR				0x00000203

#define REG_A4XX_CP_RB_RPTR					0x00000204

#define REG_A4XX_CP_IB1_BASE					0x00000206

#define REG_A4XX_CP_IB1_BUFSZ					0x00000207

#define REG_A4XX_CP_IB2_BASE					0x00000208

#define REG_A4XX_CP_IB2_BUFSZ					0x00000209

#define REG_A4XX_CP_ME_RB_DONE_DATA				0x00000217

#define REG_A4XX_CP_QUEUE_THRESH2				0x00000219

#define REG_A4XX_CP_MERCIU_SIZE					0x0000021b

#define REG_A4XX_CP_PFP_UCODE_ADDR				0x00000223

#define REG_A4XX_CP_PFP_UCODE_DATA				0x00000224

#define REG_A4XX_CP_ME_RAM_WADDR				0x00000225

#define REG_A4XX_CP_ME_RAM_RADDR				0x00000226

#define REG_A4XX_CP_ME_RAM_DATA					0x00000227

#define REG_A4XX_CP_PREEMPT					0x0000022a

#define REG_A4XX_CP_CNTL					0x0000022c

#define REG_A4XX_CP_ME_CNTL					0x0000022d

#define REG_A4XX_CP_DEBUG					0x0000022e

#define REG_A4XX_CP_DEBUG_ECO_CONTROL				0x00000231

#define REG_A4XX_CP_DRAW_STATE_ADDR				0x00000232

#define REG_A4XX_CP_PROTECT_REG_0				0x00000240

#define REG_A4XX_CP_PROTECT_CTRL				0x00000250

#define REG_A4XX_CP_ST_BASE					0x000004c0

#define REG_A4XX_CP_STQ_AVAIL					0x000004ce

#define REG_A4XX_CP_MERCIU_STAT					0x000004d0

#define REG_A4XX_CP_WFI_PEND_CTR				0x000004d2

#define REG_A4XX_CP_EVENTS_IN_FLIGHT				0x000004dd

#define REG_A4XX_CP_PERFCTR_CP_SEL_0				0x00000500

#define REG_A4XX_CP_PERFCOMBINER_SELECT				0x0000050b

static inline uint32_t REG_A4XX_CP_SCRATCH(uint32_t i0) { return 0x00000578 + 0x1*i0; }

static inline uint32_t REG_A4XX_CP_SCRATCH_REG(uint32_t i0) { return 0x00000578 + 0x1*i0; }

#define REG_A4XX_SP_VS_STATUS					0x00000ec0

#define REG_A4XX_SP_PERFCTR_SP_SEL_11				0x00000ecf

#define REG_A4XX_SP_SP_CTRL					0x000022c0

#define REG_A4XX_SP_INSTR_CACHE_CTRL				0x000022c1

#define REG_A4XX_SP_VS_CTRL_0					0x000022c4

#define REG_A4XX_SP_VS_PARAM_REG				0x000022c6
#define A4XX_SP_VS_PARAM_REG_POSREGID__MASK			0x000000ff
#define A4XX_SP_VS_PARAM_REG_POSREGID__SHIFT			0
static inline uint32_t A4XX_SP_VS_PARAM_REG_POSREGID(uint32_t val)
{
	return ((val) << A4XX_SP_VS_PARAM_REG_POSREGID__SHIFT) & A4XX_SP_VS_PARAM_REG_POSREGID__MASK;
}
#define A4XX_SP_VS_PARAM_REG_PSIZEREGID__MASK			0x0000ff00
#define A4XX_SP_VS_PARAM_REG_PSIZEREGID__SHIFT			8
static inline uint32_t A4XX_SP_VS_PARAM_REG_PSIZEREGID(uint32_t val)
{
	return ((val) << A4XX_SP_VS_PARAM_REG_PSIZEREGID__SHIFT) & A4XX_SP_VS_PARAM_REG_PSIZEREGID__MASK;
}
#define A4XX_SP_VS_PARAM_REG_TOTALVSOUTVAR__MASK		0xfff00000
#define A4XX_SP_VS_PARAM_REG_TOTALVSOUTVAR__SHIFT		20
static inline uint32_t A4XX_SP_VS_PARAM_REG_TOTALVSOUTVAR(uint32_t val)
{
	return ((val) << A4XX_SP_VS_PARAM_REG_TOTALVSOUTVAR__SHIFT) & A4XX_SP_VS_PARAM_REG_TOTALVSOUTVAR__MASK;
}

#define REG_A4XX_SP_VS_OBJ_START				0x000022e1

#define REG_A4XX_SP_VS_PVT_MEM_PARAM				0x000022e2

#define REG_A4XX_SP_VS_PVT_MEM_ADDR				0x000022e3

#define REG_A4XX_SP_FS_OBJ_START				0x000022eb

#define REG_A4XX_SP_FS_PVT_MEM_PARAM				0x000022ec

#define REG_A4XX_SP_FS_PVT_MEM_ADDR				0x000022ed

#define REG_A4XX_SP_GS_LENGTH					0x00002360

#define REG_A4XX_VPC_DEBUG_RAM_SEL				0x00000e60

#define REG_A4XX_VPC_DEBUG_RAM_READ				0x00000e61

#define REG_A4XX_VPC_DEBUG_ECO_CONTROL				0x00000e64

#define REG_A4XX_VPC_PERFCTR_VPC_SEL_3				0x00000e68

#define REG_A4XX_VPC_ATTR					0x00002140
#define A4XX_VPC_ATTR_TOTALATTR__MASK				0x000001ff
#define A4XX_VPC_ATTR_TOTALATTR__SHIFT				0
static inline uint32_t A4XX_VPC_ATTR_TOTALATTR(uint32_t val)
{
	return ((val) << A4XX_VPC_ATTR_TOTALATTR__SHIFT) & A4XX_VPC_ATTR_TOTALATTR__MASK;
}
#define A4XX_VPC_ATTR_PSIZE					0x00000200
#define A4XX_VPC_ATTR_THRDASSIGN__MASK				0x00003000
#define A4XX_VPC_ATTR_THRDASSIGN__SHIFT				12
static inline uint32_t A4XX_VPC_ATTR_THRDASSIGN(uint32_t val)
{
	return ((val) << A4XX_VPC_ATTR_THRDASSIGN__SHIFT) & A4XX_VPC_ATTR_THRDASSIGN__MASK;
}
#define A4XX_VPC_ATTR_ENABLE					0x02000000
#define A4XX_VPC_ATTR_LMSIZE__MASK				0xf0000000
#define A4XX_VPC_ATTR_LMSIZE__SHIFT				28
static inline uint32_t A4XX_VPC_ATTR_LMSIZE(uint32_t val)
{
	return ((val) << A4XX_VPC_ATTR_LMSIZE__SHIFT) & A4XX_VPC_ATTR_LMSIZE__MASK;
}

#define REG_A4XX_VPC_PACK					0x00002141
#define A4XX_VPC_PACK_NUMFPNONPOSVAR__MASK			0x0000ff00
#define A4XX_VPC_PACK_NUMFPNONPOSVAR__SHIFT			8
static inline uint32_t A4XX_VPC_PACK_NUMFPNONPOSVAR(uint32_t val)
{
	return ((val) << A4XX_VPC_PACK_NUMFPNONPOSVAR__SHIFT) & A4XX_VPC_PACK_NUMFPNONPOSVAR__MASK;
}
#define A4XX_VPC_PACK_NUMNONPOSVSVAR__MASK			0x00ff0000
#define A4XX_VPC_PACK_NUMNONPOSVSVAR__SHIFT			16
static inline uint32_t A4XX_VPC_PACK_NUMNONPOSVSVAR(uint32_t val)
{
	return ((val) << A4XX_VPC_PACK_NUMNONPOSVSVAR__SHIFT) & A4XX_VPC_PACK_NUMNONPOSVSVAR__MASK;
}

#define REG_A4XX_VPC_SO_FLUSH_WADDR_3				0x0000216e

#define REG_A4XX_VSC_BIN_SIZE					0x00000c00
#define A4XX_VSC_BIN_SIZE_WIDTH__MASK				0x0000001f
#define A4XX_VSC_BIN_SIZE_WIDTH__SHIFT				0
static inline uint32_t A4XX_VSC_BIN_SIZE_WIDTH(uint32_t val)
{
	return ((val >> 5) << A4XX_VSC_BIN_SIZE_WIDTH__SHIFT) & A4XX_VSC_BIN_SIZE_WIDTH__MASK;
}
#define A4XX_VSC_BIN_SIZE_HEIGHT__MASK				0x000003e0
#define A4XX_VSC_BIN_SIZE_HEIGHT__SHIFT				5
static inline uint32_t A4XX_VSC_BIN_SIZE_HEIGHT(uint32_t val)
{
	return ((val >> 5) << A4XX_VSC_BIN_SIZE_HEIGHT__SHIFT) & A4XX_VSC_BIN_SIZE_HEIGHT__MASK;
}

#define REG_A4XX_VSC_SIZE_ADDRESS				0x00000c01

#define REG_A4XX_VSC_DEBUG_ECO_CONTROL				0x00000c03

static inline uint32_t REG_A4XX_VSC_PIPE_CONFIG(uint32_t i0) { return 0x00000c08 + 0x1*i0; }

static inline uint32_t REG_A4XX_VSC_PIPE_CONFIG_REG(uint32_t i0) { return 0x00000c08 + 0x1*i0; }
#define A4XX_VSC_PIPE_CONFIG_REG_X__MASK			0x000003ff
#define A4XX_VSC_PIPE_CONFIG_REG_X__SHIFT			0
static inline uint32_t A4XX_VSC_PIPE_CONFIG_REG_X(uint32_t val)
{
	return ((val) << A4XX_VSC_PIPE_CONFIG_REG_X__SHIFT) & A4XX_VSC_PIPE_CONFIG_REG_X__MASK;
}
#define A4XX_VSC_PIPE_CONFIG_REG_Y__MASK			0x000ffc00
#define A4XX_VSC_PIPE_CONFIG_REG_Y__SHIFT			10
static inline uint32_t A4XX_VSC_PIPE_CONFIG_REG_Y(uint32_t val)
{
	return ((val) << A4XX_VSC_PIPE_CONFIG_REG_Y__SHIFT) & A4XX_VSC_PIPE_CONFIG_REG_Y__MASK;
}
#define A4XX_VSC_PIPE_CONFIG_REG_W__MASK			0x00f00000
#define A4XX_VSC_PIPE_CONFIG_REG_W__SHIFT			20
static inline uint32_t A4XX_VSC_PIPE_CONFIG_REG_W(uint32_t val)
{
	return ((val) << A4XX_VSC_PIPE_CONFIG_REG_W__SHIFT) & A4XX_VSC_PIPE_CONFIG_REG_W__MASK;
}
#define A4XX_VSC_PIPE_CONFIG_REG_H__MASK			0x0f000000
#define A4XX_VSC_PIPE_CONFIG_REG_H__SHIFT			24
static inline uint32_t A4XX_VSC_PIPE_CONFIG_REG_H(uint32_t val)
{
	return ((val) << A4XX_VSC_PIPE_CONFIG_REG_H__SHIFT) & A4XX_VSC_PIPE_CONFIG_REG_H__MASK;
}

static inline uint32_t REG_A4XX_VSC_PIPE_DATA_ADDRESS(uint32_t i0) { return 0x00000c10 + 0x1*i0; }

static inline uint32_t REG_A4XX_VSC_PIPE_DATA_ADDRESS_REG(uint32_t i0) { return 0x00000c10 + 0x1*i0; }

static inline uint32_t REG_A4XX_VSC_PIPE_DATA_LENGTH(uint32_t i0) { return 0x00000c18 + 0x1*i0; }

static inline uint32_t REG_A4XX_VSC_PIPE_DATA_LENGTH_REG(uint32_t i0) { return 0x00000c18 + 0x1*i0; }

#define REG_A4XX_VSC_PIPE_PARTIAL_POSN_1			0x00000c41

#define REG_A4XX_VSC_PERFCTR_VSC_SEL_0				0x00000c50

#define REG_A4XX_VSC_PERFCTR_VSC_SEL_1				0x00000c51

#define REG_A4XX_VFD_DEBUG_CONTROL				0x00000e40

#define REG_A4XX_VFD_PERFCTR_VFD_SEL_7				0x00000e4a

#define REG_A4XX_VFD_CONTROL_0					0x00002200

#define REG_A4XX_VFD_CONTROL_1					0x00002201
#define A4XX_VFD_CONTROL_1_MAXSTORAGE__MASK			0x0000ffff
#define A4XX_VFD_CONTROL_1_MAXSTORAGE__SHIFT			0
static inline uint32_t A4XX_VFD_CONTROL_1_MAXSTORAGE(uint32_t val)
{
	return ((val) << A4XX_VFD_CONTROL_1_MAXSTORAGE__SHIFT) & A4XX_VFD_CONTROL_1_MAXSTORAGE__MASK;
}
#define A4XX_VFD_CONTROL_1_REGID4VTX__MASK			0x00ff0000
#define A4XX_VFD_CONTROL_1_REGID4VTX__SHIFT			16
static inline uint32_t A4XX_VFD_CONTROL_1_REGID4VTX(uint32_t val)
{
	return ((val) << A4XX_VFD_CONTROL_1_REGID4VTX__SHIFT) & A4XX_VFD_CONTROL_1_REGID4VTX__MASK;
}
#define A4XX_VFD_CONTROL_1_REGID4INST__MASK			0xff000000
#define A4XX_VFD_CONTROL_1_REGID4INST__SHIFT			24
static inline uint32_t A4XX_VFD_CONTROL_1_REGID4INST(uint32_t val)
{
	return ((val) << A4XX_VFD_CONTROL_1_REGID4INST__SHIFT) & A4XX_VFD_CONTROL_1_REGID4INST__MASK;
}

#define REG_A4XX_VFD_CONTROL_2					0x00002202

#define REG_A4XX_VFD_CONTROL_3					0x00002203

#define REG_A4XX_VFD_CONTROL_4					0x00002204

#define REG_A4XX_VFD_INDEX_OFFSET				0x00002208

static inline uint32_t REG_A4XX_VFD_FETCH(uint32_t i0) { return 0x0000220a + 0x4*i0; }

static inline uint32_t REG_A4XX_VFD_FETCH_INSTR_0(uint32_t i0) { return 0x0000220a + 0x4*i0; }
#define A4XX_VFD_FETCH_INSTR_0_FETCHSIZE__MASK			0x0000007f
#define A4XX_VFD_FETCH_INSTR_0_FETCHSIZE__SHIFT			0
static inline uint32_t A4XX_VFD_FETCH_INSTR_0_FETCHSIZE(uint32_t val)
{
	return ((val) << A4XX_VFD_FETCH_INSTR_0_FETCHSIZE__SHIFT) & A4XX_VFD_FETCH_INSTR_0_FETCHSIZE__MASK;
}
#define A4XX_VFD_FETCH_INSTR_0_BUFSTRIDE__MASK			0x0001ff80
#define A4XX_VFD_FETCH_INSTR_0_BUFSTRIDE__SHIFT			7
static inline uint32_t A4XX_VFD_FETCH_INSTR_0_BUFSTRIDE(uint32_t val)
{
	return ((val) << A4XX_VFD_FETCH_INSTR_0_BUFSTRIDE__SHIFT) & A4XX_VFD_FETCH_INSTR_0_BUFSTRIDE__MASK;
}
#define A4XX_VFD_FETCH_INSTR_0_SWITCHNEXT			0x00020000
#define A4XX_VFD_FETCH_INSTR_0_INDEXCODE__MASK			0x00fc0000
#define A4XX_VFD_FETCH_INSTR_0_INDEXCODE__SHIFT			18
static inline uint32_t A4XX_VFD_FETCH_INSTR_0_INDEXCODE(uint32_t val)
{
	return ((val) << A4XX_VFD_FETCH_INSTR_0_INDEXCODE__SHIFT) & A4XX_VFD_FETCH_INSTR_0_INDEXCODE__MASK;
}
#define A4XX_VFD_FETCH_INSTR_0_STEPRATE__MASK			0xff000000
#define A4XX_VFD_FETCH_INSTR_0_STEPRATE__SHIFT			24
static inline uint32_t A4XX_VFD_FETCH_INSTR_0_STEPRATE(uint32_t val)
{
	return ((val) << A4XX_VFD_FETCH_INSTR_0_STEPRATE__SHIFT) & A4XX_VFD_FETCH_INSTR_0_STEPRATE__MASK;
}

static inline uint32_t REG_A4XX_VFD_FETCH_INSTR_1(uint32_t i0) { return 0x0000220b + 0x4*i0; }

static inline uint32_t REG_A4XX_VFD_DECODE(uint32_t i0) { return 0x0000228a + 0x1*i0; }

static inline uint32_t REG_A4XX_VFD_DECODE_INSTR(uint32_t i0) { return 0x0000228a + 0x1*i0; }

#define REG_A4XX_TPL1_DEBUG_ECO_CONTROL				0x00000f00

#define REG_A4XX_TPL1_PERFCTR_TP_SEL_7				0x00000f0b

#define REG_A4XX_TPL1_TP_TEX_OFFSET				0x00002380

#define REG_A4XX_TPL1_TP_CS_TEXMEMOBJ_BASE_ADDR			0x000023a6

#define REG_A4XX_GRAS_TSE_STATUS				0x00000c80

#define REG_A4XX_GRAS_DEBUG_ECO_CONTROL				0x00000c81

#define REG_A4XX_GRAS_PERFCTR_TSE_SEL_0				0x00000c88

#define REG_A4XX_GRAS_PERFCTR_TSE_SEL_3				0x00000c8b

#define REG_A4XX_GRAS_CL_CLIP_CNTL				0x00002000

#define REG_A4XX_GRAS_CL_GB_CLIP_ADJ				0x00002004
#define A4XX_GRAS_CL_GB_CLIP_ADJ_HORZ__MASK			0x000003ff
#define A4XX_GRAS_CL_GB_CLIP_ADJ_HORZ__SHIFT			0
static inline uint32_t A4XX_GRAS_CL_GB_CLIP_ADJ_HORZ(uint32_t val)
{
	return ((val) << A4XX_GRAS_CL_GB_CLIP_ADJ_HORZ__SHIFT) & A4XX_GRAS_CL_GB_CLIP_ADJ_HORZ__MASK;
}
#define A4XX_GRAS_CL_GB_CLIP_ADJ_VERT__MASK			0x000ffc00
#define A4XX_GRAS_CL_GB_CLIP_ADJ_VERT__SHIFT			10
static inline uint32_t A4XX_GRAS_CL_GB_CLIP_ADJ_VERT(uint32_t val)
{
	return ((val) << A4XX_GRAS_CL_GB_CLIP_ADJ_VERT__SHIFT) & A4XX_GRAS_CL_GB_CLIP_ADJ_VERT__MASK;
}

#define REG_A4XX_GRAS_CL_VPORT_XOFFSET_0			0x00002008
#define A4XX_GRAS_CL_VPORT_XOFFSET_0__MASK			0xffffffff
#define A4XX_GRAS_CL_VPORT_XOFFSET_0__SHIFT			0
static inline uint32_t A4XX_GRAS_CL_VPORT_XOFFSET_0(float val)
{
	return ((fui(val)) << A4XX_GRAS_CL_VPORT_XOFFSET_0__SHIFT) & A4XX_GRAS_CL_VPORT_XOFFSET_0__MASK;
}

#define REG_A4XX_GRAS_CL_VPORT_XSCALE_0				0x00002009
#define A4XX_GRAS_CL_VPORT_XSCALE_0__MASK			0xffffffff
#define A4XX_GRAS_CL_VPORT_XSCALE_0__SHIFT			0
static inline uint32_t A4XX_GRAS_CL_VPORT_XSCALE_0(float val)
{
	return ((fui(val)) << A4XX_GRAS_CL_VPORT_XSCALE_0__SHIFT) & A4XX_GRAS_CL_VPORT_XSCALE_0__MASK;
}

#define REG_A4XX_GRAS_CL_VPORT_YOFFSET_0			0x0000200a
#define A4XX_GRAS_CL_VPORT_YOFFSET_0__MASK			0xffffffff
#define A4XX_GRAS_CL_VPORT_YOFFSET_0__SHIFT			0
static inline uint32_t A4XX_GRAS_CL_VPORT_YOFFSET_0(float val)
{
	return ((fui(val)) << A4XX_GRAS_CL_VPORT_YOFFSET_0__SHIFT) & A4XX_GRAS_CL_VPORT_YOFFSET_0__MASK;
}

#define REG_A4XX_GRAS_CL_VPORT_YSCALE_0				0x0000200b
#define A4XX_GRAS_CL_VPORT_YSCALE_0__MASK			0xffffffff
#define A4XX_GRAS_CL_VPORT_YSCALE_0__SHIFT			0
static inline uint32_t A4XX_GRAS_CL_VPORT_YSCALE_0(float val)
{
	return ((fui(val)) << A4XX_GRAS_CL_VPORT_YSCALE_0__SHIFT) & A4XX_GRAS_CL_VPORT_YSCALE_0__MASK;
}

#define REG_A4XX_GRAS_CL_VPORT_ZOFFSET_0			0x0000200c
#define A4XX_GRAS_CL_VPORT_ZOFFSET_0__MASK			0xffffffff
#define A4XX_GRAS_CL_VPORT_ZOFFSET_0__SHIFT			0
static inline uint32_t A4XX_GRAS_CL_VPORT_ZOFFSET_0(float val)
{
	return ((fui(val)) << A4XX_GRAS_CL_VPORT_ZOFFSET_0__SHIFT) & A4XX_GRAS_CL_VPORT_ZOFFSET_0__MASK;
}

#define REG_A4XX_GRAS_CL_VPORT_ZSCALE_0				0x0000200d
#define A4XX_GRAS_CL_VPORT_ZSCALE_0__MASK			0xffffffff
#define A4XX_GRAS_CL_VPORT_ZSCALE_0__SHIFT			0
static inline uint32_t A4XX_GRAS_CL_VPORT_ZSCALE_0(float val)
{
	return ((fui(val)) << A4XX_GRAS_CL_VPORT_ZSCALE_0__SHIFT) & A4XX_GRAS_CL_VPORT_ZSCALE_0__MASK;
}

#define REG_A4XX_GRAS_SU_POINT_MINMAX				0x00002070
#define A4XX_GRAS_SU_POINT_MINMAX_MIN__MASK			0x0000ffff
#define A4XX_GRAS_SU_POINT_MINMAX_MIN__SHIFT			0
static inline uint32_t A4XX_GRAS_SU_POINT_MINMAX_MIN(float val)
{
	return ((((uint32_t)(val * 8.0))) << A4XX_GRAS_SU_POINT_MINMAX_MIN__SHIFT) & A4XX_GRAS_SU_POINT_MINMAX_MIN__MASK;
}
#define A4XX_GRAS_SU_POINT_MINMAX_MAX__MASK			0xffff0000
#define A4XX_GRAS_SU_POINT_MINMAX_MAX__SHIFT			16
static inline uint32_t A4XX_GRAS_SU_POINT_MINMAX_MAX(float val)
{
	return ((((uint32_t)(val * 8.0))) << A4XX_GRAS_SU_POINT_MINMAX_MAX__SHIFT) & A4XX_GRAS_SU_POINT_MINMAX_MAX__MASK;
}

#define REG_A4XX_GRAS_SU_POINT_SIZE				0x00002071
#define A4XX_GRAS_SU_POINT_SIZE__MASK				0xffffffff
#define A4XX_GRAS_SU_POINT_SIZE__SHIFT				0
static inline uint32_t A4XX_GRAS_SU_POINT_SIZE(float val)
{
	return ((((uint32_t)(val * 8.0))) << A4XX_GRAS_SU_POINT_SIZE__SHIFT) & A4XX_GRAS_SU_POINT_SIZE__MASK;
}

#define REG_A4XX_GRAS_SC_EXTENT_WINDOW_TL			0x0000209f

#define REG_A4XX_GRAS_SC_SCREEN_SCISSOR_TL			0x0000207c
#define A4XX_GRAS_SC_SCREEN_SCISSOR_TL_WINDOW_OFFSET_DISABLE	0x80000000
#define A4XX_GRAS_SC_SCREEN_SCISSOR_TL_X__MASK			0x00007fff
#define A4XX_GRAS_SC_SCREEN_SCISSOR_TL_X__SHIFT			0
static inline uint32_t A4XX_GRAS_SC_SCREEN_SCISSOR_TL_X(uint32_t val)
{
	return ((val) << A4XX_GRAS_SC_SCREEN_SCISSOR_TL_X__SHIFT) & A4XX_GRAS_SC_SCREEN_SCISSOR_TL_X__MASK;
}
#define A4XX_GRAS_SC_SCREEN_SCISSOR_TL_Y__MASK			0x7fff0000
#define A4XX_GRAS_SC_SCREEN_SCISSOR_TL_Y__SHIFT			16
static inline uint32_t A4XX_GRAS_SC_SCREEN_SCISSOR_TL_Y(uint32_t val)
{
	return ((val) << A4XX_GRAS_SC_SCREEN_SCISSOR_TL_Y__SHIFT) & A4XX_GRAS_SC_SCREEN_SCISSOR_TL_Y__MASK;
}

#define REG_A4XX_GRAS_SC_SCREEN_SCISSOR_BR			0x0000207d
#define A4XX_GRAS_SC_SCREEN_SCISSOR_BR_WINDOW_OFFSET_DISABLE	0x80000000
#define A4XX_GRAS_SC_SCREEN_SCISSOR_BR_X__MASK			0x00007fff
#define A4XX_GRAS_SC_SCREEN_SCISSOR_BR_X__SHIFT			0
static inline uint32_t A4XX_GRAS_SC_SCREEN_SCISSOR_BR_X(uint32_t val)
{
	return ((val) << A4XX_GRAS_SC_SCREEN_SCISSOR_BR_X__SHIFT) & A4XX_GRAS_SC_SCREEN_SCISSOR_BR_X__MASK;
}
#define A4XX_GRAS_SC_SCREEN_SCISSOR_BR_Y__MASK			0x7fff0000
#define A4XX_GRAS_SC_SCREEN_SCISSOR_BR_Y__SHIFT			16
static inline uint32_t A4XX_GRAS_SC_SCREEN_SCISSOR_BR_Y(uint32_t val)
{
	return ((val) << A4XX_GRAS_SC_SCREEN_SCISSOR_BR_Y__SHIFT) & A4XX_GRAS_SC_SCREEN_SCISSOR_BR_Y__MASK;
}

#define REG_A4XX_GRAS_SC_WINDOW_SCISSOR_TL			0x0000209b
#define A4XX_GRAS_SC_WINDOW_SCISSOR_TL_WINDOW_OFFSET_DISABLE	0x80000000
#define A4XX_GRAS_SC_WINDOW_SCISSOR_TL_X__MASK			0x00007fff
#define A4XX_GRAS_SC_WINDOW_SCISSOR_TL_X__SHIFT			0
static inline uint32_t A4XX_GRAS_SC_WINDOW_SCISSOR_TL_X(uint32_t val)
{
	return ((val) << A4XX_GRAS_SC_WINDOW_SCISSOR_TL_X__SHIFT) & A4XX_GRAS_SC_WINDOW_SCISSOR_TL_X__MASK;
}
#define A4XX_GRAS_SC_WINDOW_SCISSOR_TL_Y__MASK			0x7fff0000
#define A4XX_GRAS_SC_WINDOW_SCISSOR_TL_Y__SHIFT			16
static inline uint32_t A4XX_GRAS_SC_WINDOW_SCISSOR_TL_Y(uint32_t val)
{
	return ((val) << A4XX_GRAS_SC_WINDOW_SCISSOR_TL_Y__SHIFT) & A4XX_GRAS_SC_WINDOW_SCISSOR_TL_Y__MASK;
}

#define REG_A4XX_GRAS_SC_WINDOW_SCISSOR_BR			0x0000209c
#define A4XX_GRAS_SC_WINDOW_SCISSOR_BR_WINDOW_OFFSET_DISABLE	0x80000000
#define A4XX_GRAS_SC_WINDOW_SCISSOR_BR_X__MASK			0x00007fff
#define A4XX_GRAS_SC_WINDOW_SCISSOR_BR_X__SHIFT			0
static inline uint32_t A4XX_GRAS_SC_WINDOW_SCISSOR_BR_X(uint32_t val)
{
	return ((val) << A4XX_GRAS_SC_WINDOW_SCISSOR_BR_X__SHIFT) & A4XX_GRAS_SC_WINDOW_SCISSOR_BR_X__MASK;
}
#define A4XX_GRAS_SC_WINDOW_SCISSOR_BR_Y__MASK			0x7fff0000
#define A4XX_GRAS_SC_WINDOW_SCISSOR_BR_Y__SHIFT			16
static inline uint32_t A4XX_GRAS_SC_WINDOW_SCISSOR_BR_Y(uint32_t val)
{
	return ((val) << A4XX_GRAS_SC_WINDOW_SCISSOR_BR_Y__SHIFT) & A4XX_GRAS_SC_WINDOW_SCISSOR_BR_Y__MASK;
}

#define REG_A4XX_GRAS_SU_MODE_CONTROL				0x00002078
#define A4XX_GRAS_SU_MODE_CONTROL_CULL_FRONT			0x00000001
#define A4XX_GRAS_SU_MODE_CONTROL_CULL_BACK			0x00000002
#define A4XX_GRAS_SU_MODE_CONTROL_FRONT_CW			0x00000004
#define A4XX_GRAS_SU_MODE_CONTROL_LINEHALFWIDTH__MASK		0x000007f8
#define A4XX_GRAS_SU_MODE_CONTROL_LINEHALFWIDTH__SHIFT		3
static inline uint32_t A4XX_GRAS_SU_MODE_CONTROL_LINEHALFWIDTH(float val)
{
	return ((((uint32_t)(val * 4.0))) << A4XX_GRAS_SU_MODE_CONTROL_LINEHALFWIDTH__SHIFT) & A4XX_GRAS_SU_MODE_CONTROL_LINEHALFWIDTH__MASK;
}
#define A4XX_GRAS_SU_MODE_CONTROL_POLY_OFFSET			0x00000800

#define REG_A4XX_GRAS_SC_CONTROL				0x0000207b
#define A4XX_GRAS_SC_CONTROL_RENDER_MODE__MASK			0x0000000c
#define A4XX_GRAS_SC_CONTROL_RENDER_MODE__SHIFT			2
static inline uint32_t A4XX_GRAS_SC_CONTROL_RENDER_MODE(enum a3xx_render_mode val)
{
	return ((val) << A4XX_GRAS_SC_CONTROL_RENDER_MODE__SHIFT) & A4XX_GRAS_SC_CONTROL_RENDER_MODE__MASK;
}
#define A4XX_GRAS_SC_CONTROL_RASTER_MODE__MASK			0x0000f000
#define A4XX_GRAS_SC_CONTROL_RASTER_MODE__SHIFT			12
static inline uint32_t A4XX_GRAS_SC_CONTROL_RASTER_MODE(uint32_t val)
{
	return ((val) << A4XX_GRAS_SC_CONTROL_RASTER_MODE__SHIFT) & A4XX_GRAS_SC_CONTROL_RASTER_MODE__MASK;
}

#define REG_A4XX_UCHE_CACHE_MODE_CONTROL			0x00000e80

#define REG_A4XX_UCHE_TRAP_BASE_HI				0x00000e84

#define REG_A4XX_UCHE_CACHE_STATUS				0x00000e88

#define REG_A4XX_UCHE_PERFCTR_UCHE_SEL_7			0x00000e95

#define REG_A4XX_HLSQ_TIMEOUT_THRESHOLD				0x00000e00

#define REG_A4XX_HLSQ_DEBUG_ECO_CONTROL				0x00000e04

#define REG_A4XX_HLSQ_PERF_PIPE_MASK				0x00000e0e

#define REG_A4XX_HLSQ_CONTROL_0					0x000023c0

#define REG_A4XX_HLSQ_UPDATE_CONTROL				0x000023db

#define REG_A4XX_PC_BINNING_COMMAND				0x00000d00
#define A4XX_PC_BINNING_COMMAND_BINNING_ENABLE			0x00000001

#define REG_A4XX_PC_DRAWCALL_SETUP_OVERRIDE			0x00000d0c

#define REG_A4XX_PC_PERFCTR_PC_SEL_0				0x00000d10

#define REG_A4XX_PC_PERFCTR_PC_SEL_7				0x00000d17

#define REG_A4XX_PC_BIN_BASE					0x000021c0

#define REG_A4XX_PC_RESTART_INDEX				0x000021c6

#define REG_A4XX_PC_GS_PARAM					0x000021e5

#define REG_A4XX_PC_HS_PARAM					0x000021e7

#define REG_A4XX_VBIF_ABIT_SORT					0x0000301c

#define REG_A4XX_VBIF_ABIT_SORT_CONF				0x0000301d

#define REG_A4XX_VBIF_GATE_OFF_WRREQ_EN				0x0000302a

#define REG_A4XX_VBIF_IN_RD_LIM_CONF0				0x0000302c

#define REG_A4XX_VBIF_IN_RD_LIM_CONF1				0x0000302d

#define REG_A4XX_VBIF_IN_WR_LIM_CONF0				0x00003030

#define REG_A4XX_VBIF_IN_WR_LIM_CONF1				0x00003031

#define REG_A4XX_VBIF_ROUND_ROBIN_QOS_ARB			0x00003049


#endif /* A4XX_XML */
