set $mod Mod4
bindsym $mod+q exec alacritty
bindsym $mod+c kill
bindsym $mod+d exec dmenu_run
bindsym $mod+f fullscreen toggle
bindsym $mod+v floating toggle
bindsym $mod+Shift+e exec i3-msg exit
bindsym $mod+Shift+c reload
bindsym $mod+Shift+r exec reboot
bindsym $mod+Shift+p exec poweroff
bindsym $mod+j focus left
bindsym $mod+k focus down
bindsym $mod+l focus up
bindsym $mod+semicolon focus right
bindsym $mod+Shift+j move left
bindsym $mod+Shift+k move down
bindsym $mod+Shift+l move up
bindsym $mod+Shift+semicolon move right

bindsym $mod+1 workspace 1
bindsym $mod+2 workspace 2
bindsym $mod+3 workspace 3
bindsym $mod+4 workspace 4
bindsym $mod+5 workspace 5
bindsym $mod+6 workspace 6
bindsym $mod+7 workspace 7
bindsym $mod+8 workspace 8
bindsym $mod+9 workspace 9
bindsym $mod+0 workspace 10

bindsym $mod+Shift+1 move container to workspace 1
bindsym $mod+Shift+2 move container to workspace 2
bindsym $mod+Shift+3 move container to workspace 3
bindsym $mod+Shift+4 move container to workspace 4
bindsym $mod+Shift+5 move container to workspace 5
bindsym $mod+Shift+6 move container to workspace 6
bindsym $mod+Shift+7 move container to workspace 7
bindsym $mod+Shift+8 move container to workspace 8
bindsym $mod+Shift+9 move container to workspace 9
bindsym $mod+Shift+0 move container to workspace 10

bindsym XF86AudioMute exec pactl set-sink-mute @DEFAULT_SINK@ toggle
bindsym XF86AudioLowerVolume exec pactl set-sink-volume @DEFAULT_SINK@ -5%
bindsym XF86AudioRaiseVolume exec pactl set-sink-volume @DEFAULT_SINK@ +5%
bindsym XF86AudioMicMute exec pactl set-source-mute @DEFAULT_SOURCE@ toggle
bindsym XF86MonBrightnessDown exec brightnessctl set 5%-
bindsym XF86MonBrightnessUp exec brightnessctl set 5%+

bindsym Print exec maim -s | xclip -selection clipboard -t image/png

default_border pixel 1
client.focused #ab8fcf #ab8fcf #ab8fcf #ab8fcf
client.unfocused #000000 #000000 #000000 #000000

exec_always setxkbmap -layout us,ru -option grp:caps_toggle

include /etc/i3/config.d/*
