// SPDX-License-Identifier: GPL-2.0-or-later
// Copyright The Music Player Daemon Project

#ifndef MPC_MOUNT_H
#define MPC_MOUNT_H

struct mpd_connection;

int
cmd_mount(int argc, char **argv, struct mpd_connection *connection);

int
cmd_unmount(int argc, char **argv, struct mpd_connection *connection);

#endif /* MPC_MOUNT_H */
