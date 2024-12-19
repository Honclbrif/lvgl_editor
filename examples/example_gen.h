/**
 * @file example_gen.h
 *
 */

#ifndef EXAMPLE_GEN_H
#define EXAMPLE_GEN_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

/*Include all the widget and components of this library*/
#include "dark_slider/dark_slider.h"
#include "slider_box/slider_box.h"
#include "components/headings/h1_gen.h"
#include "components/headings/h2_gen.h"
#include "components/headings/h3_gen.h"
#include "components/buttons/button_default_gen.h"
#include "components/buttons/button_error_gen.h"
#include "components/buttons/button_warning_gen.h"
#include "components/home_gen.h"
#include "components/scratchpad_gen.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Initialize the component library
 */
void example_init_gen(void);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*EXAMPLE_GEN_H*/