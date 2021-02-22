# J8K

![J8K](imgur.com image replace me!)

*A 8 key hotswap macropad with an oled screen and 2 encoders*

* Keyboard Maintainer: [MakerJake](https://github.com/yourusername)
* Hardware Supported: *J8K custom PCB*
* Hardware Availability: *not yet for sale*

The only keymap so far is a the via keymap as it has one layer. I am planning on update the number of keymaps soon. 

Via keymap:

    ___________________________________________________________________________
    | KC_MEDIA_PREV_TRACK | KC_MEDIA_NEXT_TRACK | RGB_M_R | KC_AUDIO_VOL_UP   |
    |________________________________________________________________________ |
    | KC_AUDIO_MUTE       | KC_F23,             | KC_F24  | KC_AUDIO_VOL_DOWN |
    |_________________________________________________________________________|
    
    The two encoders are set to page up/down and up/down (I will change this soon)

Make example for this keyboard (after setting up your build environment):

    make makerjake/J8K:via

Flashing example for this keyboard:

    make makerjake/J8K:via:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
