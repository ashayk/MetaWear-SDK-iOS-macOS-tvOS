#pragma once

enum class AccelerometerBoschRegister : uint8_t {
    POWER_MODE = 1,
    DATA_INTERRUPT_ENABLE,
    DATA_CONFIG,
    DATA_INTERRUPT,
    DATA_INTERRUPT_CONFIG,
    
    MOTION_INTERRUPT_ENABLE = 0x9,
    MOTION_CONFIG,
    MOTION_INTERRUPT,

    TAP_INTERRUPT_ENABLE,
    TAP_CONFIG,
    TAP_INTERRUPT,

    ORIENT_INTERRUPT_ENABLE = 0xf,
    ORIENT_CONFIG,
    ORIENT_INTERRUPT,

    ///<step counter/detector BMI160 only
    STEP_DETECTOR_INTERRUPT_EN= 0x17,
    STEP_DETECTOR_CONFIG,
    STEP_DETECTOR_INTERRUPT,
    STEP_COUNTER_DATA,
    STEP_COUNTER_RESET,
    PACKED_ACC_DATA
};
