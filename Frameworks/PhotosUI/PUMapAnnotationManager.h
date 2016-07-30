//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUMapAnnotationQuadtreeDataSource-Protocol.h>

@class MKMapView, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, PUMapAnnotationQuadtree;
@protocol OS_dispatch_queue, PUMapAnnotationManagerDataSource;

__attribute__((visibility("hidden")))
@interface PUMapAnnotationManager : NSObject <PUMapAnnotationQuadtreeDataSource>
{
    NSMutableSet *_managedAnnotations;
    _Bool _showDebugOverlays;
    NSMutableArray *_debugOverlays;
    PUMapAnnotationQuadtree *_quadtree;
    unsigned int _currentTreeLevel;
    NSMutableSet *_activeAnnotations;
    NSMutableDictionary *_activeAnnotationAddresses;
    NSMutableSet *_pendingRemoves;
    NSMutableSet *_animatedRemoves;
    NSObject<OS_dispatch_queue> *_processingQueue;
    int _updateId;
    struct CGSize _currentMapSize;
    CDStruct_b7cb895d _currentCoordRegion;
    _Bool _alwaysFadeRemoves;
    id <PUMapAnnotationManagerDataSource> _dataSource;
    MKMapView *_mapView;
    struct CGSize _annotationSize;
}

+ (void)mergeOverlappingAnnotations:(id)arg1 withQuadtree:(id)arg2 treeLevel:(unsigned int)arg3 coordRegion:(CDStruct_b7cb895d)arg4 mapSize:(struct CGSize)arg5 annotationSize:(struct CGSize)arg6;
+ (_Bool)coordinateRegion:(CDStruct_b7cb895d)arg1 overlapsWithCoordinateRegion2:(CDStruct_b7cb895d)arg2;
+ (id)newAnnotationsFromQuadtree:(id)arg1 treeLevel:(unsigned int)arg2 coordRegion:(CDStruct_b7cb895d)arg3 mapSize:(struct CGSize)arg4 updateId:(int)arg5 referenceId:(int *)arg6 annotationSize:(struct CGSize)arg7;
@property(nonatomic) _Bool alwaysFadeRemoves; // @synthesize alwaysFadeRemoves=_alwaysFadeRemoves;
@property(nonatomic) struct CGSize annotationSize; // @synthesize annotationSize=_annotationSize;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak id <PUMapAnnotationManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)mapAnnotationQuadtree:(id)arg1 aggregateAnnotationForAnnotations:(id)arg2 averageCoordinate:(struct CLLocationCoordinate2D)arg3;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)_updateZPositionForAnnotations:(id)arg1 withAnimationInfoSet:(id)arg2;
- (_Bool)_addMappedAnimationInfoToInfoSet:(id)arg1 forRemoveAnnotation:(id)arg2 remainingRemoveAnnotationsToAnimate:(id)arg3 remainingAddedAnnotationsToAnimate:(id)arg4 addContainsRemoveMap:(id)arg5 removeContainsAddMap:(id)arg6 activeTreeLevel:(unsigned int)arg7 addAddressesToAnnotations:(id)arg8;
- (long long)_fadeTypeWithIsEqual:(_Bool)arg1 removeAnnotation:(id)arg2 addAnnotation:(id)arg3 isRemove:(_Bool)arg4;
- (void)_removeAnnotationFromMapView:(id)arg1 wasAnimated:(_Bool)arg2;
- (void)_updateAnnotationsWithIncomingAnnotationToAddress:(id)arg1;
- (id)_animatableMapViewAnnotations;
- (void)_updateAnnotationsFromQuadtreeWithTreeLevel:(unsigned int)arg1 coordRegion:(CDStruct_b7cb895d)arg2 mapSize:(struct CGSize)arg3 updateId:(int)arg4;
- (void)_internalUpdateAnnotationsTreeLevel:(unsigned int)arg1 coordRegion:(CDStruct_b7cb895d)arg2 mapSize:(struct CGSize)arg3 updateId:(int)arg4;
- (void)_updateAnnotationsForMapViewAdjustTreeLevel:(_Bool)arg1 forceUpdate:(_Bool)arg2;
- (void)updateAnnotationsForMapViewAdjustTreeLevel:(_Bool)arg1;
- (_Bool)_updateTreeLevelFromMap;
- (_Bool)_updateMapParams;
- (void)removeAnnotations:(id)arg1 thenAddAnnotations:(id)arg2;
- (void)removeAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (id)_puAnnotationViewForAnnotation:(id)arg1;
@property(readonly, nonatomic) NSArray *annotations;
- (void)removeAllMapAnnotations;
- (void)_executeOnProcessingQueueWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
