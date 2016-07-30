//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLogMsgStateApplicationIdentifier, GEOLogMsgStateCarPlay, GEOLogMsgStateDeviceBase, GEOLogMsgStateDeviceConnection, GEOLogMsgStateDeviceIdentifier, GEOLogMsgStateDeviceLocale, GEOLogMsgStateExperiments, GEOLogMsgStateFlyover, GEOLogMsgStateMapLaunch, GEOLogMsgStateMapRestore, GEOLogMsgStateMapSettings, GEOLogMsgStateMapUI, GEOLogMsgStateMapUIShown, GEOLogMsgStateMapView, GEOLogMsgStateMapViewLocation, GEOLogMsgStateMapsServer, GEOLogMsgStateNavigation, GEOLogMsgStatePlaceCard, GEOLogMsgStatePlaceRequest, GEOLogMsgStateRoute, GEOLogMsgStateTileSet, GEOLogMsgStateTransit, GEOLogMsgStateUserSession, GEOLogMsgStateWatch, NSString;

@interface GEOLogMsgState : PBCodable <NSCopying>
{
    GEOLogMsgStateApplicationIdentifier *_applicationIdentifier;
    GEOLogMsgStateCarPlay *_carPlay;
    GEOLogMsgStateDeviceBase *_deviceBase;
    GEOLogMsgStateDeviceConnection *_deviceConnection;
    GEOLogMsgStateDeviceIdentifier *_deviceIdentifier;
    GEOLogMsgStateDeviceLocale *_deviceLocale;
    GEOLogMsgStateExperiments *_experiments;
    GEOLogMsgStateFlyover *_flyover;
    GEOLogMsgStateMapLaunch *_mapLaunch;
    GEOLogMsgStateMapRestore *_mapRestore;
    GEOLogMsgStateMapSettings *_mapSettings;
    GEOLogMsgStateMapUI *_mapUi;
    GEOLogMsgStateMapUIShown *_mapUiShown;
    GEOLogMsgStateMapView *_mapView;
    GEOLogMsgStateMapViewLocation *_mapViewLocation;
    GEOLogMsgStateMapsServer *_mapsServer;
    GEOLogMsgStateNavigation *_navigation;
    GEOLogMsgStatePlaceCard *_placeCard;
    GEOLogMsgStatePlaceRequest *_placeRequest;
    GEOLogMsgStateRoute *_route;
    NSString *_stateOrigin;
    int _stateType;
    GEOLogMsgStateTileSet *_tileSet;
    GEOLogMsgStateTransit *_transit;
    GEOLogMsgStateUserSession *_userSession;
    GEOLogMsgStateWatch *_watch;
    struct {
        unsigned int stateType:1;
    } _has;
}

@property(retain, nonatomic) GEOLogMsgStateMapRestore *mapRestore; // @synthesize mapRestore=_mapRestore;
@property(retain, nonatomic) GEOLogMsgStateNavigation *navigation; // @synthesize navigation=_navigation;
@property(retain, nonatomic) GEOLogMsgStatePlaceRequest *placeRequest; // @synthesize placeRequest=_placeRequest;
@property(retain, nonatomic) GEOLogMsgStateTileSet *tileSet; // @synthesize tileSet=_tileSet;
@property(retain, nonatomic) GEOLogMsgStateMapsServer *mapsServer; // @synthesize mapsServer=_mapsServer;
@property(retain, nonatomic) GEOLogMsgStateFlyover *flyover; // @synthesize flyover=_flyover;
@property(retain, nonatomic) GEOLogMsgStateRoute *route; // @synthesize route=_route;
@property(retain, nonatomic) GEOLogMsgStatePlaceCard *placeCard; // @synthesize placeCard=_placeCard;
@property(retain, nonatomic) GEOLogMsgStateMapLaunch *mapLaunch; // @synthesize mapLaunch=_mapLaunch;
@property(retain, nonatomic) GEOLogMsgStateExperiments *experiments; // @synthesize experiments=_experiments;
@property(retain, nonatomic) GEOLogMsgStateUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) GEOLogMsgStateMapUIShown *mapUiShown; // @synthesize mapUiShown=_mapUiShown;
@property(retain, nonatomic) GEOLogMsgStateMapUI *mapUi; // @synthesize mapUi=_mapUi;
@property(retain, nonatomic) GEOLogMsgStateMapSettings *mapSettings; // @synthesize mapSettings=_mapSettings;
@property(retain, nonatomic) GEOLogMsgStateTransit *transit; // @synthesize transit=_transit;
@property(retain, nonatomic) GEOLogMsgStateMapViewLocation *mapViewLocation; // @synthesize mapViewLocation=_mapViewLocation;
@property(retain, nonatomic) GEOLogMsgStateMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) GEOLogMsgStateWatch *watch; // @synthesize watch=_watch;
@property(retain, nonatomic) GEOLogMsgStateCarPlay *carPlay; // @synthesize carPlay=_carPlay;
@property(retain, nonatomic) GEOLogMsgStateDeviceConnection *deviceConnection; // @synthesize deviceConnection=_deviceConnection;
@property(retain, nonatomic) GEOLogMsgStateDeviceLocale *deviceLocale; // @synthesize deviceLocale=_deviceLocale;
@property(retain, nonatomic) GEOLogMsgStateDeviceBase *deviceBase; // @synthesize deviceBase=_deviceBase;
@property(retain, nonatomic) GEOLogMsgStateApplicationIdentifier *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(retain, nonatomic) GEOLogMsgStateDeviceIdentifier *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) NSString *stateOrigin; // @synthesize stateOrigin=_stateOrigin;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasMapRestore;
@property(readonly, nonatomic) _Bool hasNavigation;
@property(readonly, nonatomic) _Bool hasPlaceRequest;
@property(readonly, nonatomic) _Bool hasTileSet;
@property(readonly, nonatomic) _Bool hasMapsServer;
@property(readonly, nonatomic) _Bool hasFlyover;
@property(readonly, nonatomic) _Bool hasRoute;
@property(readonly, nonatomic) _Bool hasPlaceCard;
@property(readonly, nonatomic) _Bool hasMapLaunch;
@property(readonly, nonatomic) _Bool hasExperiments;
@property(readonly, nonatomic) _Bool hasUserSession;
@property(readonly, nonatomic) _Bool hasMapUiShown;
@property(readonly, nonatomic) _Bool hasMapUi;
@property(readonly, nonatomic) _Bool hasMapSettings;
@property(readonly, nonatomic) _Bool hasTransit;
@property(readonly, nonatomic) _Bool hasMapViewLocation;
@property(readonly, nonatomic) _Bool hasMapView;
@property(readonly, nonatomic) _Bool hasWatch;
@property(readonly, nonatomic) _Bool hasCarPlay;
@property(readonly, nonatomic) _Bool hasDeviceConnection;
@property(readonly, nonatomic) _Bool hasDeviceLocale;
@property(readonly, nonatomic) _Bool hasDeviceBase;
@property(readonly, nonatomic) _Bool hasApplicationIdentifier;
@property(readonly, nonatomic) _Bool hasDeviceIdentifier;
- (int)StringAsStateType:(id)arg1;
- (id)stateTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasStateType;
@property(nonatomic) int stateType; // @synthesize stateType=_stateType;
@property(readonly, nonatomic) _Bool hasStateOrigin;
- (void)dealloc;

@end
