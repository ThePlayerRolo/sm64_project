#include "src/game/envfx_snow.h"

const GeoLayout KBI_platform_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(400),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, KBI_platform_000_displaylist_mesh_layer_1),
			GEO_DISPLAY_LIST(LAYER_ALPHA, KBI_platform_000_displaylist_mesh_layer_4),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
