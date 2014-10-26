/****************************************************************************
 *
 *   Copyright (c) 2014 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
 * @file navigator_mode_params.c
 *
 * Parameter for all navigator modes.
 *
 * @author Martins Frolovs <martins.f@airdog.com>
 */

#include <nuttx/config.h>
#include <systemlib/param/param.h>

/*
 * Navigator mode parameters
 */

/**
 * Take-off altitude
 *
 *	Altitude to which vehicle will take-off.
 *
 * @unit meters
 * @min 0
 * @group Navigator
 */
PARAM_DEFINE_FLOAT(NAV_TAKEOFF_ALT, 10.0f);


/**
 * Step size for one commend in loiter navigator mode
 *
 * Altitude to fly back in RTL in meters
 *
 * @unit meters
 * @min 1
 * @group Navigator
 */
PARAM_DEFINE_FLOAT(LOI_STEP_LEN, 5.00f);

/**
 *	Velocity LPF.
 *
 *	Low pass filter. Time in seconds to average target movements.
 *
 *	@unit seconds
 *	@group Navigator
 */
PARAM_DEFINE_FLOAT(NAV_VEL_LPF, 0.3f);

/**
 * Acceptance radius to determine if setpoint have been reached
 *
 * @unit meters
 * @min 1
 * @max 50
 * @group Navigator
 */
PARAM_DEFINE_FLOAT(NAV_ACC_RAD, 2.00f);

/**
 * Minimum altitude above target in loiter.
 *
 * @unit meters
 * @group Navigator
 */
PARAM_DEFINE_FLOAT(LOI_MIN_ALT, 2.00f);

/**
 * Acceptance radius for takeoff setpoint
 *
 * @unit meters
 * @group Navigator
 */
PARAM_DEFINE_FLOAT(NAV_TAKEOFF_ACR, 2.00f);


