init:
	west init -l config
	west update
	west zephyr-export

buildall: (build "left") (build "right")

build side:
	west build -s zmk/app -d build/{{side}} -b xiao_ble -- -DSHIELD=totem_{{side}} -DZMK_CONFIG=$(pwd)/config/ -DZMK_EXTRA_MODULES=$(pwd)/zmk-config-totem/

