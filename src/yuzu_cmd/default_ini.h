// Copyright 2014 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

namespace DefaultINI {

const char* sdl2_config_file = R"(
[ControlsGeneral]
# The input devices and parameters for each Switch native input
# It should be in the format of "engine:[engine_name],[param1]:[value1],[param2]:[value2]..."
# Escape characters $0 (for ':'), $1 (for ',') and $2 (for '$') can be used in values

# for button input, the following devices are available:
#  - "keyboard" (default) for keyboard input. Required parameters:
#      - "code": the code of the key to bind
#  - "sdl" for joystick input using SDL. Required parameters:
#      - "joystick": the index of the joystick to bind
#      - "button"(optional): the index of the button to bind
#      - "hat"(optional): the index of the hat to bind as direction buttons
#      - "axis"(optional): the index of the axis to bind
#      - "direction"(only used for hat): the direction name of the hat to bind. Can be "up", "down", "left" or "right"
#      - "threshold"(only used for axis): a float value in (-1.0, 1.0) which the button is
#          triggered if the axis value crosses
#      - "direction"(only used for axis): "+" means the button is triggered when the axis value
#          is greater than the threshold; "-" means the button is triggered when the axis value
#          is smaller than the threshold
button_a=
button_b=
button_x=
button_y=
button_lstick=
button_rstick=
button_l=
button_r=
button_zl=
button_zr=
button_plus=
button_minus=
button_dleft=
button_dup=
button_dright=
button_ddown=
button_lstick_left=
button_lstick_up=
button_lstick_right=
button_lstick_down=
button_sl=
button_sr=
button_home=
button_screenshot=

# for analog input, the following devices are available:
#  - "analog_from_button" (default) for emulating analog input from direction buttons. Required parameters:
#      - "up", "down", "left", "right": sub-devices for each direction.
#          Should be in the format as a button input devices using escape characters, for example, "engine$0keyboard$1code$00"
#      - "modifier": sub-devices as a modifier.
#      - "modifier_scale": a float number representing the applied modifier scale to the analog input.
#          Must be in range of 0.0-1.0. Defaults to 0.5
#  - "sdl" for joystick input using SDL. Required parameters:
#      - "joystick": the index of the joystick to bind
#      - "axis_x": the index of the axis to bind as x-axis (default to 0)
#      - "axis_y": the index of the axis to bind as y-axis (default to 1)
lstick=
rstick=

# To use the debug_pad, prepend `debug_pad_` before each button setting above.
# i.e. debug_pad_button_a=

# Enable debug pad inputs to the guest
# 0 (default): Disabled, 1: Enabled
debug_pad_enabled =

# Whether to enable or disable vibration
# 0: Disabled, 1 (default): Enabled
vibration_enabled=

# Whether to enable or disable accurate vibrations
# 0 (default): Disabled, 1: Enabled
enable_accurate_vibrations=

# Enables controller motion inputs
# 0: Disabled, 1 (default): Enabled
motion_enabled =

# for motion input, the following devices are available:
#  - "motion_emu" (default) for emulating motion input from mouse input. Required parameters:
#      - "update_period": update period in milliseconds (default to 100)
#      - "sensitivity": the coefficient converting mouse movement to tilting angle (default to 0.01)
#  - "cemuhookudp" reads motion input from a udp server that uses cemuhook's udp protocol
motion_device=

# for touch input, the following devices are available:
#  - "emu_window" (default) for emulating touch input from mouse input to the emulation window. No parameters required
#  - "cemuhookudp" reads touch input from a udp server that uses cemuhook's udp protocol
#      - "min_x", "min_y", "max_x", "max_y": defines the udp device's touch screen coordinate system
touch_device=

# Whether to enable or disable touch input from button
# 0 (default): Disabled, 1: Enabled
use_touch_from_button=

# for mapping buttons to touch inputs.
#touch_from_button_map=1
#touch_from_button_maps_0_name=default
#touch_from_button_maps_0_count=2
#touch_from_button_maps_0_bind_0=foo
#touch_from_button_maps_0_bind_1=bar
# etc.

# List of Cemuhook UDP servers, delimited by ','.
# Default: 127.0.0.1:26760
# Example: 127.0.0.1:26760,123.4.5.67:26761
udp_input_servers =

# Enable controlling an axis via a mouse input.
# 0 (default): Off, 1: On
mouse_panning =

# Set mouse sensitivity.
# Default: 1.0
mouse_panning_sensitivity =

# Emulate an analog control stick from keyboard inputs.
# 0 (default): Disabled, 1: Enabled
emulate_analog_keyboard =

# Enable mouse inputs to the guest
# 0 (default): Disabled, 1: Enabled
mouse_enabled =

# Enable keyboard inputs to the guest
# 0 (default): Disabled, 1: Enabled
keyboard_enabled =

[Core]
# Whether to use multi-core for CPU emulation
# 0: Disabled, 1 (default): Enabled
use_multi_core=

[Cpu]
# Adjusts various optimizations.
# Auto-select mode enables choice unsafe optimizations.
# Accurate enables only safe optimizations.
# Unsafe allows any unsafe optimizations.
# 0 (default): Auto-select, 1: Accurate, 2: Enable unsafe optimizations
cpu_accuracy =

# Allow disabling safe optimizations.
# 0 (default): Disabled, 1: Enabled
cpu_debug_mode =

# Enable inline page tables optimization (faster guest memory access)
# 0: Disabled, 1 (default): Enabled
cpuopt_page_tables =

# Enable block linking CPU optimization (reduce block dispatcher use during predictable jumps)
# 0: Disabled, 1 (default): Enabled
cpuopt_block_linking =

# Enable return stack buffer CPU optimization (reduce block dispatcher use during predictable returns)
# 0: Disabled, 1 (default): Enabled
cpuopt_return_stack_buffer =

# Enable fast dispatcher CPU optimization (use a two-tiered dispatcher architecture)
# 0: Disabled, 1 (default): Enabled
cpuopt_fast_dispatcher =

# Enable context elimination CPU Optimization (reduce host memory use for guest context)
# 0: Disabled, 1 (default): Enabled
cpuopt_context_elimination =

# Enable constant propagation CPU optimization (basic IR optimization)
# 0: Disabled, 1 (default): Enabled
cpuopt_const_prop =

# Enable miscellaneous CPU optimizations (basic IR optimization)
# 0: Disabled, 1 (default): Enabled
cpuopt_misc_ir =

# Enable reduction of memory misalignment checks (reduce memory fallbacks for misaligned access)
# 0: Disabled, 1 (default): Enabled
cpuopt_reduce_misalign_checks =

# Enable Host MMU Emulation (faster guest memory access)
# 0: Disabled, 1 (default): Enabled
cpuopt_fastmem =

# Enable unfuse FMA (improve performance on CPUs without FMA)
# Only enabled if cpu_accuracy is set to Unsafe. Automatically chosen with cpu_accuracy = Auto-select.
# 0: Disabled, 1 (default): Enabled
cpuopt_unsafe_unfuse_fma =

# Enable faster FRSQRTE and FRECPE
# Only enabled if cpu_accuracy is set to Unsafe.
# 0: Disabled, 1 (default): Enabled
cpuopt_unsafe_reduce_fp_error =

# Enable faster ASIMD instructions (32 bits only)
# Only enabled if cpu_accuracy is set to Unsafe. Automatically chosen with cpu_accuracy = Auto-select.
# 0: Disabled, 1 (default): Enabled
cpuopt_unsafe_ignore_standard_fpcr =

# Enable inaccurate NaN handling
# Only enabled if cpu_accuracy is set to Unsafe. Automatically chosen with cpu_accuracy = Auto-select.
# 0: Disabled, 1 (default): Enabled
cpuopt_unsafe_inaccurate_nan =

# Disable address space checks (64 bits only)
# Only enabled if cpu_accuracy is set to Unsafe. Automatically chosen with cpu_accuracy = Auto-select.
# 0: Disabled, 1 (default): Enabled
cpuopt_unsafe_fastmem_check =

[Renderer]
# Which backend API to use.
# 0 (default): OpenGL, 1: Vulkan
backend =

# Enable graphics API debugging mode.
# 0 (default): Disabled, 1: Enabled
debug =

# Enable Nsight Aftermath crash dumps
# 0 (default): Disabled, 1: Enabled
nsight_aftermath =

# Disable shader loop safety checks, executing the shader without loop logic changes
# 0 (default): Disabled, 1: Enabled
disable_shader_loop_safety_checks =

# Which Vulkan physical device to use (defaults to 0)
vulkan_device =

# Aspect ratio
# 0: Default (16:9), 1: Force 4:3, 2: Force 21:9, 3: Stretch to Window
aspect_ratio =

# Anisotropic filtering
# 0: Default, 1: 2x, 2: 4x, 3: 8x, 4: 16x
max_anisotropy =

# Whether to enable V-Sync (caps the framerate at 60FPS) or not.
# 0 (default): Off, 1: On
use_vsync =

# Selects the OpenGL shader backend. NV_gpu_program5 is required for GLASM. If NV_gpu_program5 is
# not available and GLASM is selected, GLSL will be used.
# 0: GLSL, 1 (default): GLASM, 2: SPIR-V
shader_backend =

# Whether to allow asynchronous shader building.
# 0 (default): Off, 1: On
use_asynchronous_shaders =

# Enable NVDEC emulation.
# 0: Off, 1 (default): On
use_nvdec_emulation =

# Accelerate ASTC texture decoding.
# 0: Off, 1 (default): On
accelerate_astc =

# Turns on the frame limiter, which will limit frames output to the target game speed
# 0: Off, 1: On (default)
use_frame_limit =

# Limits the speed of the game to run no faster than this value as a percentage of target speed
# 1 - 9999: Speed limit as a percentage of target game speed. 100 (default)
frame_limit =

# Whether to use disk based shader cache
# 0: Off, 1 (default): On
use_disk_shader_cache =

# Which gpu accuracy level to use
# 0: Normal, 1 (default): High, 2: Extreme (Very slow)
gpu_accuracy =

# Whether to use asynchronous GPU emulation
# 0 : Off (slow), 1 (default): On (fast)
use_asynchronous_gpu_emulation =

# Inform the guest that GPU operations completed more quickly than they did.
# 0: Off, 1 (default): On
use_fast_gpu_time =

# Whether to use garbage collection or not for GPU caches.
# 0 (default): Off, 1: On
use_caches_gc =

# The clear color for the renderer. What shows up on the sides of the bottom screen.
# Must be in range of 0-255. Defaults to 0 for all.
bg_red =
bg_blue =
bg_green =

[Audio]
# Which audio output engine to use.
# auto (default): Auto-select
# cubeb: Cubeb audio engine (if available)
# sdl2: SDL2 audio engine (if available)
# null: No audio output
output_engine =

# Whether or not to enable the audio-stretching post-processing effect.
# This effect adjusts audio speed to match emulation speed and helps prevent audio stutter,
# at the cost of increasing audio latency.
# 0: No, 1 (default): Yes
enable_audio_stretching =

# Which audio device to use.
# auto (default): Auto-select
output_device =

# Output volume.
# 100 (default): 100%, 0; mute
volume =

[Data Storage]
# Whether to create a virtual SD card.
# 1 (default): Yes, 0: No
use_virtual_sd =

# Whether or not to enable gamecard emulation
# 1: Yes, 0 (default): No
gamecard_inserted =

# Whether or not the gamecard should be emulated as the current game
# If 'gamecard_inserted' is 0 this setting is irrelevant
# 1: Yes, 0 (default): No
gamecard_current_game =

# Path to an XCI file to use as the gamecard
# If 'gamecard_inserted' is 0 this setting is irrelevant
# If 'gamecard_current_game' is 1 this setting is irrelevant
gamecard_path =

[System]
# Whether the system is docked
# 1 (default): Yes, 0: No
use_docked_mode =

# Sets the seed for the RNG generator built into the switch
# rng_seed will be ignored and randomly generated if rng_seed_enabled is false
rng_seed_enabled =
rng_seed =

# Sets the current time (in seconds since 12:00 AM Jan 1, 1970) that will be used by the time service
# This will auto-increment, with the time set being the time the game is started
# This override will only occur if custom_rtc_enabled is true, otherwise the current time is used
custom_rtc_enabled =
custom_rtc =

# Sets the systems language index
# 0: Japanese, 1: English (default), 2: French, 3: German, 4: Italian, 5: Spanish, 6: Chinese,
# 7: Korean, 8: Dutch, 9: Portuguese, 10: Russian, 11: Taiwanese, 12: British English, 13: Canadian French,
# 14: Latin American Spanish, 15: Simplified Chinese, 16: Traditional Chinese
language_index =

# The system region that yuzu will use during emulation
# -1: Auto-select (default), 0: Japan, 1: USA, 2: Europe, 3: Australia, 4: China, 5: Korea, 6: Taiwan
region_index =

# The system time zone that yuzu will use during emulation
# 0: Auto-select (default), 1: Default (system archive value), Others: Index for specified time zone
time_zone_index =

# Sets the sound output mode.
# 0: Mono, 1 (default): Stereo, 2: Surround
sound_index =

[Miscellaneous]
# A filter which removes logs below a certain logging level.
# Examples: *:Debug Kernel.SVC:Trace Service.*:Critical
log_filter = *:Trace

# Use developer keys
# 0 (default): Disabled, 1: Enabled
use_dev_keys =

[Debugging]
# Record frame time data, can be found in the log directory. Boolean value
record_frame_times =
# Determines whether or not yuzu will dump the ExeFS of all games it attempts to load while loading them
dump_exefs=false
# Determines whether or not yuzu will dump all NSOs it attempts to load while loading them
dump_nso=false
# Determines whether or not yuzu will save the filesystem access log.
enable_fs_access_log=false
# Enables verbose reporting services
reporting_services =
# Determines whether or not yuzu will report to the game that the emulated console is in Kiosk Mode
# false: Retail/Normal Mode (default), true: Kiosk Mode
quest_flag =
# Determines whether debug asserts should be enabled, which will throw an exception on asserts.
# false: Disabled (default), true: Enabled
use_debug_asserts =
# Determines whether unimplemented HLE service calls should be automatically stubbed.
# false: Disabled (default), true: Enabled
use_auto_stub =
# Enables/Disables the macro JIT compiler
disable_macro_jit=false
# Presents guest frames as they become available. Experimental.
# false: Disabled (default), true: Enabled
disable_fps_limit=false

[WebService]
# Whether or not to enable telemetry
# 0: No, 1 (default): Yes
enable_telemetry =
# URL for Web API
web_api_url = https://api.yuzu-emu.org
# Username and token for yuzu Web Service
# See https://profile.yuzu-emu.org/ for more info
yuzu_username =
yuzu_token =

[Services]
# The name of the backend to use for BCAT
# If this is set to 'boxcat' boxcat will be used, otherwise a null implementation will be used
bcat_backend =

[AddOns]
# Used to disable add-ons
# List of title IDs of games that will have add-ons disabled (separated by '|'):
title_ids =
# For each title ID, have a key/value pair called `disabled_<title_id>` equal to the names of the add-ons to disable (sep. by '|')
# e.x. disabled_0100000000010000 = Update|DLC <- disables Updates and DLC on Super Mario Odyssey
)";
} // namespace DefaultINI
