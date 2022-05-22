// Copyright (C) 2018-2022 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include "cpu_test_utils.hpp"

namespace CPUTestUtils {
    const auto conv_ref_1D = CPUSpecificParams{{ncw}, {ncw}, {"ref_any"}, "ref_any"};
    const auto conv_ref_2D = CPUSpecificParams{{nchw}, {nchw}, {"ref_any"}, "ref_any"};
    const auto conv_ref_3D = CPUSpecificParams{{ncdhw}, {ncdhw}, {"ref_any"}, "ref_any"};

    const auto conv_gemm_1D = CPUSpecificParams{{ncw}, {ncw}, {"gemm_any"}, "jit_gemm"};
    const auto conv_gemm_2D = CPUSpecificParams{{nchw}, {nchw}, {"gemm_any"}, "jit_gemm"};
    const auto conv_gemm_3D = CPUSpecificParams{{ncdhw}, {ncdhw}, {"gemm_any"}, "jit_gemm"};

    const auto conv_gemm_1D_nspc = CPUSpecificParams{{nwc}, {nwc}, {"jit_gemm"}, "jit_gemm"};
    const auto conv_gemm_2D_nspc = CPUSpecificParams{{nhwc}, {nhwc}, {"jit_gemm"}, "jit_gemm"};
    const auto conv_gemm_3D_nspc = CPUSpecificParams{{ndhwc}, {ndhwc}, {"jit_gemm"}, "jit_gemm"};

    const auto conv_sse42_1D = CPUSpecificParams{{nCw8c}, {nCw8c}, {"jit_sse42"}, "jit_sse42"};
    const auto conv_sse42_2D = CPUSpecificParams{{nChw8c}, {nChw8c}, {"jit_sse42"}, "jit_sse42"};
    const auto conv_sse42_3D = CPUSpecificParams{{nCdhw8c}, {nCdhw8c}, {"jit_sse42"}, "jit_sse42"};
    const auto conv_sse42_dw_1D = CPUSpecificParams{{nCw8c}, {nCw8c}, {"jit_sse42_dw"}, "jit_sse42_dw"};
    const auto conv_sse42_dw_2D = CPUSpecificParams{{nChw8c}, {nChw8c}, {"jit_sse42_dw"}, "jit_sse42_dw"};
    const auto conv_sse42_dw_3D = CPUSpecificParams{{nCdhw8c}, {nCdhw8c}, {"jit_sse42_dw"}, "jit_sse42_dw"};

    const auto conv_sse42_plain_to_blocked_1D = CPUSpecificParams{{ncw}, {nCw8c}, {"jit_sse42"}, "jit_sse42"};
    const auto conv_sse42_plain_to_blocked_2D = CPUSpecificParams{{nchw}, {nChw8c}, {"jit_sse42"}, "jit_sse42"};
    const auto conv_sse42_plain_to_blocked_3D = CPUSpecificParams{{ncdhw}, {nCdhw8c}, {"jit_sse42"}, "jit_sse42"};

    const auto conv_sse42_1D_nspc = CPUSpecificParams{{nwc}, {nwc}, {"jit_sse42"}, "jit_sse42"};
    const auto conv_sse42_2D_nspc = CPUSpecificParams{{nhwc}, {nhwc}, {"jit_sse42"}, "jit_sse42"};
    const auto conv_sse42_3D_nspc = CPUSpecificParams{{ndhwc}, {ndhwc}, {"jit_sse42"}, "jit_sse42"};
    const auto conv_sse42_dw_1D_nspc = CPUSpecificParams{{nwc}, {nwc}, {"jit_sse42_dw"}, "jit_sse42_dw"};
    const auto conv_sse42_dw_2D_nspc = CPUSpecificParams{{nhwc}, {nhwc}, {"jit_sse42_dw"}, "jit_sse42_dw"};
    const auto conv_sse42_dw_3D_nspc = CPUSpecificParams{{ndhwc}, {ndhwc}, {"jit_sse42_dw"}, "jit_sse42_dw"};

    const auto conv_avx2_1D = CPUSpecificParams{{nCw8c}, {nCw8c}, {"jit_avx2"}, "jit_avx2"};
    const auto conv_avx2_2D = CPUSpecificParams{{nChw8c}, {nChw8c}, {"jit_avx2"}, "jit_avx2"};
    const auto conv_avx2_3D = CPUSpecificParams{{nCdhw8c}, {nCdhw8c}, {"jit_avx2"}, "jit_avx2"};
    const auto conv_avx2_dw_1D = CPUSpecificParams{{nCw8c}, {nCw8c}, {"jit_avx2_dw"}, "jit_avx2_dw"};
    const auto conv_avx2_dw_2D = CPUSpecificParams{{nChw8c}, {nChw8c}, {"jit_avx2_dw"}, "jit_avx2_dw"};
    const auto conv_avx2_dw_3D = CPUSpecificParams{{nCdhw8c}, {nCdhw8c}, {"jit_avx2_dw"}, "jit_avx2_dw"};
    const auto conv_avx2_planar_1D = CPUSpecificParams{{ncw}, {ncw}, {"jit_avx2"}, "jit_avx2"};
    const auto conv_avx2_planar_2D = CPUSpecificParams{{nchw}, {nchw}, {"jit_avx2"}, "jit_avx2"};
    const auto conv_avx2_planar_3D = CPUSpecificParams{{ncdhw}, {ncdhw}, {"jit_avx2"}, "jit_avx2"};

    const auto conv_avx2_plain_to_blocked_1D = CPUSpecificParams{{ncw}, {nCw8c}, {"jit_avx2"}, "jit_avx2"};
    const auto conv_avx2_plain_to_blocked_2D = CPUSpecificParams{{nchw}, {nChw8c}, {"jit_avx2"}, "jit_avx2"};
    const auto conv_avx2_plain_to_blocked_3D = CPUSpecificParams{{ncdhw}, {nCdhw8c}, {"jit_avx2"}, "jit_avx2"};

    const auto conv_avx2_1D_nspc = CPUSpecificParams{{nwc}, {nwc}, {"jit_avx2"}, "jit_avx2"};
    const auto conv_avx2_2D_nspc = CPUSpecificParams{{nhwc}, {nhwc}, {"jit_avx2"}, "jit_avx2"};
    const auto conv_avx2_3D_nspc = CPUSpecificParams{{ndhwc}, {ndhwc}, {"jit_avx2"}, "jit_avx2"};
    const auto conv_avx2_dw_1D_nspc = CPUSpecificParams{{nwc}, {nwc}, {"jit_avx2_dw"}, "jit_avx2_dw"};
    const auto conv_avx2_dw_2D_nspc = CPUSpecificParams{{nhwc}, {nhwc}, {"jit_avx2_dw"}, "jit_avx2_dw"};
    const auto conv_avx2_dw_3D_nspc = CPUSpecificParams{{ndhwc}, {ndhwc}, {"jit_avx2_dw"}, "jit_avx2_dw"};

    const auto conv_avx512_1D = CPUSpecificParams{{nCw16c}, {nCw16c}, {"jit_avx512"}, "jit_avx512"};
    const auto conv_avx512_2D = CPUSpecificParams{{nChw16c}, {nChw16c}, {"jit_avx512"}, "jit_avx512"};
    const auto conv_avx512_3D = CPUSpecificParams{{nCdhw16c}, {nCdhw16c}, {"jit_avx512"}, "jit_avx512"};
    const auto conv_avx512_dw_1D = CPUSpecificParams{{nCw16c}, {nCw16c}, {"jit_avx512_dw"}, "jit_avx512_dw"};
    const auto conv_avx512_dw_2D = CPUSpecificParams{{nChw16c}, {nChw16c}, {"jit_avx512_dw"}, "jit_avx512_dw"};
    const auto conv_avx512_dw_3D = CPUSpecificParams{{nCdhw16c}, {nCdhw16c}, {"jit_avx512_dw"}, "jit_avx512_dw"};
    const auto conv_avx512_planar_1D = CPUSpecificParams{{ncw}, {ncw}, {"jit_avx512"}, "jit_avx512"};
    const auto conv_avx512_planar_2D = CPUSpecificParams{{nchw}, {nchw}, {"jit_avx512"}, "jit_avx512"};
    const auto conv_avx512_planar_3D = CPUSpecificParams{{ncdhw}, {ncdhw}, {"jit_avx512"}, "jit_avx512"};

    const auto conv_avx512_plain_to_blocked_1D = CPUSpecificParams{{ncw}, {nCw16c}, {"jit_avx512"}, "jit_avx512"};
    const auto conv_avx512_plain_to_blocked_2D = CPUSpecificParams{{nchw}, {nChw16c}, {"jit_avx512"}, "jit_avx512"};
    const auto conv_avx512_plain_to_blocked_3D = CPUSpecificParams{{ncdhw}, {nCdhw16c}, {"jit_avx512"}, "jit_avx512"};

    const auto conv_avx512_1D_nspc = CPUSpecificParams{{nwc}, {nwc}, {"jit_avx512"}, "jit_avx512"};
    const auto conv_avx512_2D_nspc = CPUSpecificParams{{nhwc}, {nhwc}, {"jit_avx512"}, "jit_avx512"};
    const auto conv_avx512_3D_nspc = CPUSpecificParams{{ndhwc}, {ndhwc}, {"jit_avx512"}, "jit_avx512"};
    const auto conv_avx512_dw_1D_nspc = CPUSpecificParams{{nwc}, {nwc}, {"jit_avx512_dw"}, "jit_avx512_dw"};
    const auto conv_avx512_dw_2D_nspc = CPUSpecificParams{{nhwc}, {nhwc}, {"jit_avx512_dw"}, "jit_avx512_dw"};
    const auto conv_avx512_dw_3D_nspc = CPUSpecificParams{{ndhwc}, {ndhwc}, {"jit_avx512_dw"}, "jit_avx512_dw"};

    const auto conv_avx512_1D_nspc_brgconv = CPUSpecificParams{{nwc}, {nwc}, {"brgconv_avx512"}, "brgconv_avx512"};
    const auto conv_avx512_2D_nspc_brgconv = CPUSpecificParams{{nhwc}, {nhwc}, {"brgconv_avx512"}, "brgconv_avx512"};
    const auto conv_avx512_3D_nspc_brgconv = CPUSpecificParams{{ndhwc}, {ndhwc}, {"brgconv_avx512"}, "brgconv_avx512"};

    const auto conv_avx512_1D_nspc_brgconv_amx = CPUSpecificParams{{nwc}, {nwc}, {"brgconv_avx512_amx"}, "brgconv_avx512_amx"};
    const auto conv_avx512_2D_nspc_brgconv_amx = CPUSpecificParams{{nhwc}, {nhwc}, {"brgconv_avx512_amx"}, "brgconv_avx512_amx"};
    const auto conv_avx512_3D_nspc_brgconv_amx = CPUSpecificParams{{ndhwc}, {ndhwc}, {"brgconv_avx512_amx"}, "brgconv_avx512_amx"};

    const auto conv_sse42_1D_1x1 = CPUSpecificParams{{nCw8c}, {nCw8c}, {"jit_sse42_1x1"}, "jit_sse42_1x1"};
    const auto conv_avx2_1D_1x1 = CPUSpecificParams{{nCw8c}, {nCw8c}, {"jit_avx2_1x1"}, "jit_avx2_1x1"};
    const auto conv_avx512_1D_1x1 = CPUSpecificParams{{nCw16c}, {nCw16c}, {"jit_avx512_1x1"}, "jit_avx512_1x1"};

    const auto conv_sse42_1D_1x1_nspc = CPUSpecificParams{{nwc}, {nwc}, {"jit_sse42_1x1"}, "jit_sse42_1x1"};
    const auto conv_avx2_1D_1x1_nspc = CPUSpecificParams{{nwc}, {nwc}, {"jit_avx2_1x1"}, "jit_avx2_1x1"};
    const auto conv_avx512_1D_1x1_nspc = CPUSpecificParams{{nwc}, {nwc}, {"jit_avx512_1x1"}, "jit_avx512_1x1"};
    const auto conv_avx512_1D_1x1_nspc_brgconv = CPUSpecificParams{{nwc}, {nwc}, {"brgconv_avx512_1x1"}, "brgconv_avx512_1x1"};
    const auto conv_avx512_1D_1x1_nspc_brgconv_amx = CPUSpecificParams{{nwc}, {nwc}, {"brgconv_avx512_amx_1x1"}, "brgconv_avx512_amx_1x1"};

    const auto conv_sse42_2D_1x1 = CPUSpecificParams{{nChw8c}, {nChw8c}, {"jit_sse42_1x1"}, "jit_sse42_1x1"};
    const auto conv_avx2_2D_1x1 = CPUSpecificParams{{nChw8c}, {nChw8c}, {"jit_avx2_1x1"}, "jit_avx2_1x1"};
    const auto conv_avx512_2D_1x1 = CPUSpecificParams{{nChw16c}, {nChw16c}, {"jit_avx512_1x1"}, "jit_avx512_1x1"};

    const auto conv_sse42_2D_1x1_nspc = CPUSpecificParams{{nhwc}, {nhwc}, {"jit_sse42_1x1"}, "jit_sse42_1x1"};
    const auto conv_avx2_2D_1x1_nspc = CPUSpecificParams{{nhwc}, {nhwc}, {"jit_avx2_1x1"}, "jit_avx2_1x1"};
    const auto conv_avx512_2D_1x1_nspc = CPUSpecificParams{{nhwc}, {nhwc}, {"jit_avx512_1x1"}, "jit_avx512_1x1"};
    const auto conv_avx512_2D_1x1_nspc_brgconv = CPUSpecificParams{{nhwc}, {nhwc}, {"brgconv_avx512_1x1"}, "brgconv_avx512_1x1"};
    const auto conv_avx512_2D_1x1_nspc_brgconv_amx = CPUSpecificParams{{nhwc}, {nhwc}, {"brgconv_avx512_amx_1x1"}, "brgconv_avx512_amx_1x1"};

    const auto conv_winograd = CPUSpecificParams{{nChw16c}, {nChw16c}, {"jit_avx512_winograd"}, "jit_avx512_winograd"};
} // namespace CPUTestUtils
