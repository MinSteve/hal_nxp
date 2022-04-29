/*
 * Copyright (c) 2013 - 2014, Freescale Semiconductor, Inc.
 * Copyright 2016-2020 NXP
 * All rights reserved.
 *
 * NXP Confidential. This software is owned or controlled by NXP and may only be
 * used strictly in accordance with the applicable license terms. By expressly
 * accepting such terms or by downloading, installing, activating and/or otherwise
 * using the software, you are agreeing that you have read, and that you agree to
 * comply with and are bound by, such license terms. If you do not agree to be
 * bound by the applicable license terms, then you may not retain, install,
 * activate or otherwise use the software. The production use license in
 * Section 2.3 is expressly granted for this software.
 */

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.9, An object should be defined at block
 * scope if its identifier only appears in a single function.
 * All variables with this problem are defined in the linker files.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.11, When an array with external linkage
 * is declared, its size should be explicitly specified.
 * The size of the arrays can not be explicitly determined.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 11.4, A conversion should not be performed
 * between a pointer to object and an integer type.
 * The cast is required to initialize a pointer with an unsigned int define,
 * representing an address.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 11.6, A cast shall not be performed
 * between pointer to void and an arithmetic type.
 * The cast is required to initialize a pointer with an unsigned int define,
 * representing an address.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 2.1, A project shall not contain unreachable
 * code.
 * The condition compares two address defined in linker files that can be different.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External could be made static.
 * Function is defined for usage by application code.
 *
 * @section [global]
 * Violates MISRA 2012 Mandatory Rule 17.3, Symbol 'MFSPR' undeclared, assumed
 * to return int.
 * This is an e200 Power Architecture Assembly instruction used to retrieve
 * the core number.
 *
 */

#include "startup.h"
#include <stdint.h>


/*******************************************************************************
 * Static Variables
 ******************************************************************************/
static volatile uint32_t * const s_vectors[NUMBER_OF_CORES] = FEATURE_INTERRUPT_INT_VECTORS;

/*******************************************************************************
 * Code
 ******************************************************************************/

/*FUNCTION**********************************************************************
 *
 * Function Name : init_data_bss
 * Description   : Make necessary initializations for RAM.
 * - Copy the vector table from ROM to RAM.
 * - Copy initialized data from ROM to RAM.
 * - Copy code that should reside in RAM from ROM
 * - Clear the zero-initialized data section.
 *
 * Tool Chains:
 *   __GNUC__           : GNU Compiler Collection
 *   __ghs__            : Green Hills ARM Compiler
 *   __ICCARM__         : IAR ARM Compiler
 *   __DCC__            : Wind River Diab Compiler
 *   __ARMCC_VERSION    : ARMC Compiler
 *
 * Implements    : init_data_bss_Activity
 *END**************************************************************************/
void init_data_bss(void)
{
    uint32_t n;
    uint8_t coreId;
/* For ARMC we are using the library method of initializing DATA, Custom Section and
 * Code RAM sections so the below variables are not needed */
#if !defined(__ARMCC_VERSION)
    /* Declare pointers for various data sections. These pointers
     * are initialized using values pulled in from the linker file */
    uint8_t * data_ram;
    uint8_t * code_ram;
    uint8_t * bss_start;
    uint8_t * custom_ram;
    const uint8_t * data_rom, * data_rom_end;
    const uint8_t * code_rom, * code_rom_end;
    const uint8_t * bss_end;
    const uint8_t * custom_rom, * custom_rom_end;
#endif
    /* Addresses for VECTOR_TABLE and VECTOR_RAM come from the linker file */

#if defined(__ARMCC_VERSION)
    extern uint32_t __RAM_VECTOR_TABLE_SIZE;
    extern uint32_t __VECTOR_ROM;
    extern uint32_t __VECTOR_RAM;
#else
    extern uint32_t __RAM_VECTOR_TABLE_SIZE[];
    extern uint32_t __VECTOR_TABLE[];
    extern uint32_t __VECTOR_RAM[];
#endif
    /* Get section information from linker files */
#if defined(__ICCARM__)
    /* Data */
    data_ram        = __section_begin(".data");
    data_rom        = __section_begin(".data_init");
    data_rom_end    = __section_end(".data_init");

    /* CODE RAM */
    #pragma section = "__CODE_ROM"
    #pragma section = "__CODE_RAM"
    code_ram        = __section_begin("__CODE_RAM");
    code_rom        = __section_begin("__CODE_ROM");
    code_rom_end    = __section_end("__CODE_ROM");

    /* BSS */
    bss_start       = __section_begin(".bss");
    bss_end         = __section_end(".bss");

    custom_ram      = __section_begin(".customSection");
    custom_rom      = __section_begin(".customSection_init");
    custom_rom_end  = __section_end(".customSection_init");
    
#elif defined (__ARMCC_VERSION)
    /* VECTOR TABLE*/
    uint8_t * vector_table_size = (uint8_t *)__RAM_VECTOR_TABLE_SIZE;
    uint32_t * vector_rom    = (uint32_t *)__VECTOR_ROM;
    uint32_t * vector_ram    = (uint32_t *)__VECTOR_RAM;
#else
    extern uint32_t __DATA_ROM[];
    extern uint32_t __DATA_RAM[];
    extern uint32_t __DATA_END[];

    extern uint32_t __CODE_RAM[];
    extern uint32_t __CODE_ROM[];
    extern uint32_t __CODE_END[];

    extern uint32_t __BSS_START[];
    extern uint32_t __BSS_END[];

    extern uint32_t __CUSTOM_ROM[];
    extern uint32_t __CUSTOM_END[];

    /* Data */
    data_ram        = (uint8_t *)__DATA_RAM;
    data_rom        = (uint8_t *)__DATA_ROM;
    data_rom_end    = (uint8_t *)__DATA_END;
    /* CODE RAM */
    code_ram        = (uint8_t *)__CODE_RAM;
    code_rom        = (uint8_t *)__CODE_ROM;
    code_rom_end    = (uint8_t *)__CODE_END;
    /* BSS */
    bss_start       = (uint8_t *)__BSS_START;
    bss_end         = (uint8_t *)__BSS_END;

	/* Custom section */
    custom_ram      = CUSTOMSECTION_SECTION_START;
    custom_rom      = (uint8_t *)__CUSTOM_ROM;
    custom_rom_end  = (uint8_t *)__CUSTOM_END;

#endif

#if !defined(__ARMCC_VERSION)
    /* Copy initialized data from ROM to RAM */
    while (data_rom_end != data_rom)
    {
        *data_ram = *data_rom;
        data_ram++;
        data_rom++;
    }

    /* Copy functions from ROM to RAM */
    while (code_rom_end != code_rom)
    {
        *code_ram = *code_rom;
        code_ram++;
        code_rom++;
    }

    /* Clear the zero-initialized data section */
    while(bss_end != bss_start)
    {
        *bss_start = 0;
        bss_start++;
    }

    /* Copy customsection rom to ram */
    while(custom_rom_end != custom_rom)
    {
        *custom_ram = *custom_rom;
        custom_rom++;
        custom_ram++;
    }
#endif
    coreId = (uint8_t)GET_CORE_ID();
#if defined (__ARMCC_VERSION)
        /* Copy the vector table from ROM to RAM */
                /* Workaround */
        for (n = 0; n < (((uint32_t)(vector_table_size))/sizeof(uint32_t)); n++)
        {
            vector_ram[n] = vector_rom[n];
        }
        /* Point the VTOR to the position of vector table */
         *s_vectors[coreId] = (uint32_t) __VECTOR_RAM;
#else
    /* Check if VECTOR_TABLE copy is needed */
    if (__VECTOR_RAM != __VECTOR_TABLE)
    {
        /* Copy the vector table from ROM to RAM */
        for (n = 0; n < (((uint32_t)__RAM_VECTOR_TABLE_SIZE)/sizeof(uint32_t)); n++)
        {
            __VECTOR_RAM[n] = __VECTOR_TABLE[n];
        }
        /* Point the VTOR to the position of vector table */
        *s_vectors[coreId] = (uint32_t)__VECTOR_RAM;
    }
    else
    {
        /* Point the VTOR to the position of vector table */
        *s_vectors[coreId] = (uint32_t)__VECTOR_TABLE;
    }
#endif

}

/*******************************************************************************
 * EOF
 ******************************************************************************/

