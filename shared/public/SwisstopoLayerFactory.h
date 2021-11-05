// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from layers.djinni

#pragma once

#include "LoaderInterface.h"
#include "SwisstopoLayerType.h"
#include "Tiled2dMapRasterLayerInterface.h"
#include "Tiled2dMapZoomInfo.h"
#include "WmtsLayerDescription.h"
#include <cstdint>
#include <memory>

class SwisstopoLayerFactory {
public:
    virtual ~SwisstopoLayerFactory() {}

    static std::shared_ptr<::Tiled2dMapRasterLayerInterface> createSwisstopoTiledRasterLayer(::SwisstopoLayerType layerType, const std::shared_ptr<::LoaderInterface> & loader);

    static std::shared_ptr<::Tiled2dMapRasterLayerInterface> createSwisstopoTiledRasterLayerFromMetadata(const ::WmtsLayerDescription & description, int32_t maxZoom, const ::Tiled2dMapZoomInfo & zoomInfo, const std::shared_ptr<::LoaderInterface> & loader);
};
