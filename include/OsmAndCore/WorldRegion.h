#ifndef _OSMAND_CORE_WORLD_REGION_H_
#define _OSMAND_CORE_WORLD_REGION_H_

#include <OsmAndCore/stdlib_common.h>

#include <OsmAndCore/QtExtensions.h>
#include <QHash>
#include <QString>

#include <OsmAndCore.h>
#include <OsmAndCore/CommonTypes.h>
#include <OsmAndCore/LatLon.h>

namespace OsmAnd
{
    class BinaryMapObject;

    struct OSMAND_CORE_API WorldRegion Q_DECL_FINAL
    {
        WorldRegion();
        ~WorldRegion();

        QString fullRegionName;
        QString parentRegionName;
        QString regionName;
        bool boundary;

        QString downloadName;

        QString nativeName;
        QHash<QString, QString> localizedNames;

        QString regionLeftHandDriving;
        QString regionLang;
        QString regionMetric;
        QString regionRoadSigns;
        QString wikiLink;
        QString population;
        
        LatLon regionCenter;
        
        std::shared_ptr<const OsmAnd::BinaryMapObject> mapObject;
    };
}

#endif // !defined(_OSMAND_CORE_WORLD_REGION_H_)
