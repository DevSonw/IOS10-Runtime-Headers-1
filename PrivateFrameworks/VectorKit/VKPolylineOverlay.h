//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/GEOComposedRouteObserver-Protocol.h>
#import <VectorKit/VKOverlay-Protocol.h>

@class GEOComposedRoute, GEOMapRegion, NSString, VKRouteLine;
@protocol VKPolylineOverlayRouteRibbonObserver;

@interface VKPolylineOverlay : NSObject <VKOverlay, GEOComposedRouteObserver>
{
    struct __CFSet *_observers;
    GEOComposedRoute *_composedRoute;
    _Bool _isReadyForSnapping;
    struct LabelExternalObjectsModerator *_labelExternalObjectsModerator;
    VKRouteLine *_routeRibbon;
    id <VKPolylineOverlayRouteRibbonObserver> _routeRibbonObserver;
    double _trafficTimeStamp;
    struct TrafficSegmentsAlongRoute *_trafficSegments;
}

@property(nonatomic) struct LabelExternalObjectsModerator *labelExternalObjectsModerator; // @synthesize labelExternalObjectsModerator=_labelExternalObjectsModerator;
@property(nonatomic) id <VKPolylineOverlayRouteRibbonObserver> routeRibbonObserver; // @synthesize routeRibbonObserver=_routeRibbonObserver;
@property(nonatomic) VKRouteLine *routeRibbon; // @synthesize routeRibbon=_routeRibbon;
@property(readonly, nonatomic) double trafficTimeStamp; // @synthesize trafficTimeStamp=_trafficTimeStamp;
@property(readonly, nonatomic) GEOComposedRoute *composedRoute; // @synthesize composedRoute=_composedRoute;
- (void)composedRoute:(id)arg1 changedSelectedRideInClusteredLeg:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;
- (void)composedRouteUpdatedTraffic:(id)arg1;
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;
- (_Bool)isSnappingForSceneTiles;
- (id)getPathsForPainter:(id)arg1 renderRegion:(id)arg2 shouldSnapToRoads:(_Bool)arg3 verifySnapping:(_Bool)arg4 snappingCompletionHandler:(CDUnknownBlockType)arg5;
- (void)_updateTraffic;
- (struct _NSRange)sectionRangeForBounds:(Box_3d7e3c2c)arg1;
@property(readonly, nonatomic) GEOMapRegion *boundingMapRegion;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic) _Bool containsTransit;
- (void)_setNeedsLayout;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithComposedRoute:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

