// Autogenerated C header file for Weight Scale
#ifndef _JACDAC_SPEC_WEIGHT_SCALE_H
#define _JACDAC_SPEC_WEIGHT_SCALE_H 1

#define JD_SERVICE_CLASS_WEIGHT_SCALE  0x1f4d5040

// enum Variant (uint32_t)
#define JD_WEIGHT_SCALE_VARIANT_BODY 0x1
#define JD_WEIGHT_SCALE_VARIANT_FOOD 0x2
#define JD_WEIGHT_SCALE_VARIANT_JEWELRY 0x3

/**
 * Read-only kg u16.16 (uint32_t). The reported weight.
 */
#define JD_WEIGHT_SCALE_REG_WEIGHT JD_REG_READING

/**
 * Read-only kg u16.16 (uint32_t). The estimate error on the reported reading.
 */
#define JD_WEIGHT_SCALE_REG_WEIGHT_ERROR JD_REG_READING_ERROR

/**
 * Read-write kg u16.16 (uint32_t). Calibrated zero offset error on the scale, i.e. the measured weight when nothing is on the scale.
 * You do not need to subtract that from the reading, it has already been done.
 */
#define JD_WEIGHT_SCALE_REG_ZERO_OFFSET 0x80

/**
 * Read-write u16.16 (uint32_t). Calibrated gain on the weight scale error.
 */
#define JD_WEIGHT_SCALE_REG_GAIN 0x81

/**
 * Constant kg u16.16 (uint32_t). Maximum supported weight on the scale.
 */
#define JD_WEIGHT_SCALE_REG_MAX_WEIGHT JD_REG_MAX_READING

/**
 * Constant kg u16.16 (uint32_t). Minimum recommend weight on the scale.
 */
#define JD_WEIGHT_SCALE_REG_MIN_WEIGHT JD_REG_MIN_READING

/**
 * Constant kg u16.16 (uint32_t). Smallest, yet distinguishable change in reading.
 */
#define JD_WEIGHT_SCALE_REG_WEIGHT_RESOLUTION JD_REG_READING_RESOLUTION

/**
 * Constant Variant (uint32_t). The type of physical scale
 */
#define JD_WEIGHT_SCALE_REG_VARIANT JD_REG_VARIANT

/**
 * No args. Call this command when there is nothing on the scale. If supported, the module should save the calibration data.
 */
#define JD_WEIGHT_SCALE_CMD_CALIBRATE_ZERO_OFFSET 0x80

/**
 * Argument: weight g u22.10 (uint32_t). Call this command with the weight of the thing on the scale.
 */
#define JD_WEIGHT_SCALE_CMD_CALIBRATE_GAIN 0x81

#endif
