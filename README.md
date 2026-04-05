# zmk-config-selenium

This is a [ZMK](https://zmk.dev/) implementation of the [Selenium keymap](https://onedeadkey.github.io/selenium/).

This repository also contains Selenium firmware builds for these keyboards:
- [Corne](https://github.com/foostan/crkbd)
- [Ferris](https://github.com/pierrechevalier83/ferris)
- [Glove80](https://www.moergo.com/)
- [Quacken](https://github.com/Nuclear-Squid/Quacken)
- [Sweep](https://github.com/davidphilipbarr/Sweep)
- [Totem](https://github.com/GEIGEIGEIST/TOTEM)

# Usage

## Adding your keyboard to `zmk-config-selenium`

1. Fork `zmk-config-selenium`

2. Add your keyboard to `my_keyboard.yml`

Rename `my_keyboard.yml.sample` to `my_keyboard.yml`, and adjust its content for your keyboard.
If your keyboard is already listed in this file, you are all set.
You can remove all the keyboards definitions you don’t need from it.
If your keyboard is not listed, you will need to add it.
The syntax is the same as the one for ZMK `build.yaml` files.
For example, for a [lily58](https://github.com/kata0510/Lily58):
```
---
include:
  - board: nice_nano@2//zmk
    shield: lily58_left
    snippet: studio-rpc-usb-uart
    cmake-args: -DCONFIG_ZMK_STUDIO=y
  - board: nice_nano@2//zmk
    shield: lily58_right
    cmake-args: -DCONFIG_ZMK_STUDIO=y
```

If your keyboard is not part of `zmkfirmware/zmk` but needs an external ZMK
module, add it to `config/west.yml`.


3. Create a keymap

Your keymap should be defined in `config/$keyboard.keymap`.
In our example, it will be `config/lily58.keymap`.
Its content will define the keyboard geometry with the
`SELENIUM_KEYMAP_BINDINGS` macro.

For our lily58, this will be similar to this:
```
#define SELENIUM_KEYMAP_BINDINGS(LOUT1,  LROW1,  RROW1,  ROUT1, \
                                 LOUT2,  LROW2,  RROW2,  ROUT2, \
                                 LOUT3,  LROW3,  RROW3,  ROUT3, \
                                 LT1, LT2, LT3,  RT3, RT2, RT1) \
    &kp EQUAL &kp N1 &kp N2 &kp N3 &kp N4 &kp N5 &kp N6 &kp N7 &kp N8 &kp N9 &kp N0 &kp MINUS \
    LOUT1     LROW1                                                          RROW1  ROUT1     \
    LOUT2     LROW2                                                          RROW2  ROUT2     \
    LOUT3     LROW3                       &none  &none                       RROW3  ROUT3     \
              &none      LT1  LT2  LT3    &none  &none        RT3  RT2  RT1  &none

#include "../include/selenium/selenium.keymap"
```

You can find some examples in [`zmk-config-selenium/config`](config/).

At the end of your keymap, this line is mandatory
```
#include "../include/selenium/selenium.keymap"
```

You can adjust various options in
[`include/selenium/selenium.keymap`](include/selenium/selenium.keymap),
or even make some changes to the content of the keymap itself (its keys and layers).


4. Build the keymap

After committing your changes and pushing them to your fork, a firmware for
your keyboard should be build automatically in GitHub Actions!

### Pros and cons
- Manual enablement of the keyboard(s) build
- Must use `git rebase` or `git merge` to get newer `zmk-config-selenium` features
- Can build for multiple keyboards at once
- Will use the same set of options and tweaks for all builds
- Can tweak the keymap
