#!/bin/bash

killall -q polybar

polybar left &
ln -s /tmp/polybar_mqueue.$! /tmp/ipc-left &
polybar right &
ln -s /tmp/polybar_mqueue.$! /tmp/ipc-right &
polybar bottom &
ln -s /tmp/polybar_mqueue.$! /tmp/ipc-bottom &

