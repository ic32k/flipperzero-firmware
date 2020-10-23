#pragma once

// our tx pin is TIM2_CH4
extern TIM_HandleTypeDef htim2;

#define RC5_CARRIER_FREQUENCY 36000
#define RC5_DUTY_CYCLE 0.33

#define RC6_CARRIER_FREQUENCY 36000
#define RC6_DUTY_CYCLE 0.33

#define NEC_CARRIER_FREQUENCY 38000
#define NEC_DUTY_CYCLE 0.33

#define SIRC_CARRIER_FREQUENCY 40000
#define SIRC_DUTY_CYCLE 0.5