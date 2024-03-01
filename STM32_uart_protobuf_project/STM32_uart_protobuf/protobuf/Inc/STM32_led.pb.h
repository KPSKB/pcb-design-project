/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.8 */

#ifndef PB_STM32_LED_PB_H_INCLUDED
#define PB_STM32_LED_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _ChangeLedStateMsg {
    bool has_led_state;
    int32_t led_state; /* In case of default value, the LED shall keep it's state */
} ChangeLedStateMsg;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define ChangeLedStateMsg_init_default           {false, 2}
#define ChangeLedStateMsg_init_zero              {false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define ChangeLedStateMsg_led_state_tag          1

/* Struct field encoding specification for nanopb */
#define ChangeLedStateMsg_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, INT32,    led_state,         1)
#define ChangeLedStateMsg_CALLBACK NULL
#define ChangeLedStateMsg_DEFAULT (const pb_byte_t*)"\x08\x02\x00"

extern const pb_msgdesc_t ChangeLedStateMsg_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define ChangeLedStateMsg_fields &ChangeLedStateMsg_msg

/* Maximum encoded size of messages (where known) */
#define ChangeLedStateMsg_size                   11
#define STM32_LED_PB_H_MAX_SIZE                  ChangeLedStateMsg_size

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif