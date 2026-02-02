#Temporarily Disable Integrated Webcam
sudo modprobe -r uvcvideo

# To create a video3 in /dev/
sudo modprobe v4l2loopback video_nr=3 exclusive_caps=1 card_label="External Camera"
# To create a video1 in /dev/
sudo modprobe v4l2loopback exclusive_caps=1 video_nr=0 card_label="External Camera"

gphoto2 --stdout --capture-movie | ffmpeg -i - -vcodec rawvideo -pix_fmt yuv420p -threads 0 -f v4l2 /dev/video3
gphoto2 --stdout --capture-movie | ffmpeg -i - -pix_fmt yuv420p -s 640x480 -threads 0 -f v4l2 /dev/video3

# play the output of the cam
ffplay /dev/video0
vlc v4l2:///dev/video0


#!/bin/bash
# -----------------------------------------
# nmcli Network Management - Command Notes
# Author: YourName
# Description: Cheat Sheet to manage network using nmcli
# -----------------------------------------

# -----------------------------------------
# 1. General Syntax (For Reference)
# -----------------------------------------
# nmcli [OPTIONS] OBJECT { COMMAND | help }

# -----------------------------------------
# 2. Show all network devices and their state
nmcli device           # Lists all network interfaces (e.g., wlan0, eth0)

# -----------------------------------------
# 3. Enable/Disable Networking
nmcli networking on    # Turns on all networking
nmcli networking off   # Turns off all networking

# -----------------------------------------
# 4. Show status of all devices
nmcli device status    # Shows state of all devices (connected, disconnected, unavailable)

# -----------------------------------------
# 5. List Available Wi-Fi Networks
nmcli device wifi list # Scans and lists nearby Wi-Fi networks with signal strength and security info

# -----------------------------------------
# 6. Connect to a Wi-Fi Network
# Replace <SSID> and <PASSWORD> with actual values
nmcli device wifi connect <SSID> password <PASSWORD>  # Connects to the Wi-Fi and creates a saved profile

# Example:
# nmcli device wifi connect "HomeNetwork" password "mypassword123"

# -----------------------------------------
# 7. Show All Saved Network Connections
nmcli connection show  # Lists all stored (configured) network connections

# -----------------------------------------
# 8. Disconnect from a Network
# Replace <CONNECTION_NAME> with actual connection name from `nmcli connection show`
nmcli connection down id <CONNECTION_NAME>  # Disconnects the specified saved network connection

# Example:
# nmcli connection down id "HomeNetwork"

# -----------------------------------------
# EOF
