// RISC-V Compliance Test Header File
// Copyright (c) 2017, Codasip Ltd. All Rights Reserved.
// See LICENSE for license details.
//
// Description: Common header file for RV32I tests


//
// In general the following registers are reserved
// ra, a0, t0
// Additionally on a fail, t1, t2 are overwritten
// x1, x10, x5, x6, x7 respectively
//

#ifndef _COMPLIANCE_IO_H
#define _COMPLIANCE_IO_H

//-----------------------------------------------------------------------
// RV IO Macros
//-----------------------------------------------------------------------

#define RVTEST_IO_INIT
#define RVTEST_IO_PUTC(_R)
#define RVTEST_IO_WRITE_STR(_STR)
#define RVTEST_IO_ASSERT_EQ(_R, _I)

#endif // _COMPLIANCE_IO_H
