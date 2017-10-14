
Debian
====================
This directory contains files used to package goldbitd/goldbit-qt
for Debian-based Linux systems. If you compile goldbitd/goldbit-qt yourself, there are some useful files here.

## goldbit: URI support ##


goldbit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install goldbit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your goldbit-qt binary to `/usr/bin`
and the `../../share/pixmaps/goldbit128.png` to `/usr/share/pixmaps`

goldbit-qt.protocol (KDE)

