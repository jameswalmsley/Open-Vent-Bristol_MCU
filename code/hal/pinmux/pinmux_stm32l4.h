// Copyright (c) 2021 <OpenVent-Bristol, Donald Robson>

#ifndef PINMUX_STM32L4_H
#define PINMUX_STM32L4_H

#include "stm32l4/stm32l4xx_ll_gpio.h"

// pin
#define PINMUX_PIN_POS                (0u)
#define PINMUX_PIN_MASK               (0xF)
#define PINMUX_PORT_POS               (4u)
#define PINMUX_PORT_MASK              (0xF0)

#define PINMUX_PA                     (0u << PINMUX_PORT_POS)
#define PINMUX_PB                     (1u << PINMUX_PORT_POS)
#define PINMUX_PC                     (2u << PINMUX_PORT_POS)
#define PINMUX_PD                     (3u << PINMUX_PORT_POS)
#define PINMUX_PE                     (4u << PINMUX_PORT_POS)
#define PINMUX_PF                     (5u << PINMUX_PORT_POS)
#define PINMUX_PG                     (6u << PINMUX_PORT_POS)
#define PINMUX_PH                     (7u << PINMUX_PORT_POS)

// flags
#define PINMUX_INITIAL_OUT_VAL_POS    (0u)
#define PINMUX_INITIAL_OUT_VAL_MASK   (1u << PINMUX_INITIAL_OUT_VAL_POS)
#define PINMUX_INITIAL_OUT_VAL_LOW    (0u << PINMUX_INITIAL_OUT_VAL_POS)
#define PINMUX_INITIAL_OUT_VAL_HIGH   (1u << PINMUX_INITIAL_OUT_VAL_POS)

#define PINMUX_MODE_POS               (1u)
#define PINMUX_MODE_MASK              (3u << PINMUX_MODE_POS)
#define PINMUX_MODE_INPUT             (LL_GPIO_MODE_INPUT << PINMUX_MODE_POS)
#define PINMUX_MODE_OUTPUT            (LL_GPIO_MODE_OUTPUT << PINMUX_MODE_POS)
#define PINMUX_MODE_ALTERNATE         (LL_GPIO_MODE_ALTERNATE << PINMUX_MODE_POS)
#define PINMUX_MODE_ANALOG            (LL_GPIO_MODE_ANALOG << PINMUX_MODE_POS)

#define PINMUX_OUT_MODE_POS           (3u)
#define PINMUX_OUT_MODE_MASK          (1u << PINMUX_OUT_MODE_POS)
#define PINMUX_OUT_MODE_PUSH_PULL     (LL_GPIO_OUTPUT_PUSHPULL << PINMUX_OUT_MODE_POS)
#define PINMUX_OUT_MODE_OPEN_DRAIN    (LL_GPIO_OUTPUT_OPENDRAIN << PINMUX_OUT_MODE_POS)

#define PINMUX_SPEED_POS              (4u)
#define PINMUX_SPEED_MASK             (3u << PINMUX_SPEED_POS)
#define PINMUX_SPEED_LOW              (LL_GPIO_SPEED_FREQ_LOW << PINMUX_SPEED_POS)
#define PINMUX_SPEED_MEDIUM           (LL_GPIO_SPEED_FREQ_MEDIUM << PINMUX_SPEED_POS)
#define PINMUX_SPEED_HIGH             (LL_GPIO_SPEED_FREQ_HIGH << PINMUX_SPEED_POS)
#define PINMUX_SPEED_VERY_HIGH        (LL_GPIO_SPEED_FREQ_VERY_HIGH << PINMUX_SPEED_POS)

#define PINMUX_PULL_POS               (6u)
#define PINMUX_PULL_MASK              (3u << PINMUX_PULL_POS)
#define PINMUX_PULL_NO                (LL_GPIO_PULL_NO << PINMUX_PULL_POS)
#define PINMUX_PULL_UP                (LL_GPIO_PULL_UP << PINMUX_PULL_POS)
#define PINMUX_PULL_DOWN              (LL_GPIO_PULL_DOWN << PINMUX_PULL_POS)

#define PINMUX_INTERRUPT_POS          (10u)
#define PINMUX_INTERRUPT_MASK         (3u << PINMUX_INTERRUPT_POS)
#define PINMUX_INTERRUPT_NONE         (0u << PINMUX_INTERRUPT_POS)
#define PINMUX_INTERRUPT_FALLING      (1u << PINMUX_INTERRUPT_POS)
#define PINMUX_INTERRUPT_RISING       (2u << PINMUX_INTERRUPT_POS)
#define PINMUX_INTERRUPT_BOTH         (3u << PINMUX_INTERRUPT_POS)

#define PINMUX_ALT_FUNCTION_POS       (12u)
#define PINMUX_ALT_FUNCTION_MASK      (15u << PINMUX_ALT_FUNCTION_POS)
#define PINMUX_ALT_FUNCTION_0         (LL_GPIO_AF_0 << PINMUX_ALT_FUNCTION_POS)
#define PINMUX_ALT_FUNCTION_1         (LL_GPIO_AF_1 << PINMUX_ALT_FUNCTION_POS)
#define PINMUX_ALT_FUNCTION_2         (LL_GPIO_AF_2 << PINMUX_ALT_FUNCTION_POS)
#define PINMUX_ALT_FUNCTION_3         (LL_GPIO_AF_3 << PINMUX_ALT_FUNCTION_POS)
#define PINMUX_ALT_FUNCTION_4         (LL_GPIO_AF_4 << PINMUX_ALT_FUNCTION_POS)
#define PINMUX_ALT_FUNCTION_5         (LL_GPIO_AF_5 << PINMUX_ALT_FUNCTION_POS)
#define PINMUX_ALT_FUNCTION_6         (LL_GPIO_AF_6 << PINMUX_ALT_FUNCTION_POS)
#define PINMUX_ALT_FUNCTION_7         (LL_GPIO_AF_7 << PINMUX_ALT_FUNCTION_POS)
#define PINMUX_ALT_FUNCTION_8         (LL_GPIO_AF_8 << PINMUX_ALT_FUNCTION_POS)
#define PINMUX_ALT_FUNCTION_9         (LL_GPIO_AF_9 << PINMUX_ALT_FUNCTION_POS)
#define PINMUX_ALT_FUNCTION_10        (LL_GPIO_AF_10 << PINMUX_ALT_FUNCTION_POS)
#define PINMUX_ALT_FUNCTION_11        (LL_GPIO_AF_11 << PINMUX_ALT_FUNCTION_POS)
#define PINMUX_ALT_FUNCTION_12        (LL_GPIO_AF_12 << PINMUX_ALT_FUNCTION_POS)
#define PINMUX_ALT_FUNCTION_13        (LL_GPIO_AF_13 << PINMUX_ALT_FUNCTION_POS)
#define PINMUX_ALT_FUNCTION_14        (LL_GPIO_AF_14 << PINMUX_ALT_FUNCTION_POS)
#define PINMUX_ALT_FUNCTION_15        (LL_GPIO_AF_15 << PINMUX_ALT_FUNCTION_POS)

#endif /* PINMUX_STM32L4_H */
