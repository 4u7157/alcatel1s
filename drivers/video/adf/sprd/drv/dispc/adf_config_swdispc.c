/*
 * Copyright (C) 2012 Spreadtrum Communications Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "sprd_adf_bridge.h"

static struct sprd_display_attachment swdispc_allowed_attachments[] = {
	[0] = {
		.interface_id = SPRD_INTERFACE_DSI0,
		.overlayengine_id = SPRD_OVERLAYENGINE_DISPC0,
	},
};

static struct sprd_display_config swdispc_display_config = {
	.id = 0x1,
	.n_devices = 1,
	.n_interfaces = 1,
	.n_overlayengines = 1,
	.n_allowed_attachments = ARRAY_SIZE(swdispc_allowed_attachments),
	.allowed_attachments = swdispc_allowed_attachments,
};

static struct sprd_adf_device_capability swdispc_device_capability = {
	.device_id = 0x1,

};

static struct sprd_adf_interface_capability swdispc_interface_capability = {
	.interface_id = 0x11,
	.fb_count = 3,
	.fb_format = ADF_PIXEL_FORMAT_RGBA_8888,
};

static struct sprd_adf_hwlayer_capability swdispc_hwlayer_capability[] = {
	[0] = {
	       .hwlayer_id = SPRD_LAYER_OSD0,
	       .format = ADF_PIXEL_FORMAT_RGB_565,
	       .rotation = ADF_TRANSFORM_NONE,
	       .scale = ADF_SCALE_NONE,
	       .blending = ADF_BLENDING_NONE,
	       },
};

static struct sprd_adf_overlayengine_capability
swdispc_overlayengine_capability = {
	.number_hwlayer = 1,
	.format = ADF_PIXEL_FORMAT_RGB_565,
	.rotation = ADF_TRANSFORM_NONE,
	.scale = ADF_SCALE_NONE,
	.blending = ADF_BLENDING_NONE,
	.hwlayer_ptr[0] = &swdispc_hwlayer_capability[0],
};

static struct sprd_adf_device_capability *swdispc_get_device_capability(int
								      dev_id)
{
	struct sprd_adf_device_capability *capability;

	ADF_DEBUG_GENERAL("entern\n");
	if (dev_id < 0) {
		ADF_DEBUG_WARN("parameter dev_id is illegal\n");
		return NULL;
	}

	capability = &swdispc_device_capability;

	return capability;
}

static struct sprd_adf_interface_capability
*swdispc_get_interface_capability(int dev_id, int intf_id)
{
	struct sprd_adf_interface_capability *capability;

	ADF_DEBUG_GENERAL("entern\n");
	if (dev_id < 0 || intf_id < 0) {
		ADF_DEBUG_WARN("parameter dev_id or intf_id is illegal\n");
		return NULL;
	}

	capability = &swdispc_interface_capability;

	return capability;
}

static struct sprd_adf_overlayengine_capability
*swdispc_get_overlayengine_capability(int dev_id, int eng_id)
{
	struct sprd_adf_overlayengine_capability *capability;

	ADF_DEBUG_GENERAL("entern\n");
	if (dev_id < 0 || eng_id < 0) {
		ADF_DEBUG_WARN("parameter dev_id or eng_id is illegal\n");
		return NULL;
	}

	capability = &swdispc_overlayengine_capability;
	return capability;
}

static struct sprd_display_config *swdispc_get_display_config(void)
{
	struct sprd_display_config *display_config = NULL;

	ADF_DEBUG_GENERAL("entern\n");

	display_config = &swdispc_display_config;

	return display_config;
}

static struct sprd_display_config_entry swdispc_display_config_entry = {
	.get_device_capability = swdispc_get_device_capability,
	.get_interface_capability = swdispc_get_interface_capability,
	.get_overlayengine_capability = swdispc_get_overlayengine_capability,
	.get_display_config = swdispc_get_display_config,
};

static struct ops_entry entry = {
	.ver = "swdispc",
	.ops = &swdispc_display_config_entry,
};

static int __init sprd_display_config_register(void)
{
	return disp_ops_register(&entry, &display_config_head);
}

subsys_initcall(sprd_display_config_register);
