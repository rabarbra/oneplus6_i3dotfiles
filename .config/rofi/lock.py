import subprocess
import os
import time
proc = subprocess.Popen(['i3lock', '-n', '-i', '~/pictures/lock.png'])
os.system("pkill -x onboard")
os.system("gsettings set org.onboard.window docking-enabled false")
os.system("onboard 2&>/dev/null &")
#keyb = subprocess.Popen(["onboard"])
proc.wait()
os.system("pkill -x onboard")
os.system("gsettings set org.onboard.window docking-enabled true")
os.system("onboard 2&>/dev/null &")
#keyb.terminate()

