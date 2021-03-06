//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXPlacesImageCache;
@protocol PXPlacesMapLayout, PXPlacesMapRenderer, PXPlacesMapSelectionHandler, PXPlacesMapUpdatePlan;

@protocol PXPlacesMapPipelineComponentProvider <NSObject>
@property(retain) PXPlacesImageCache *imageCache;
@property(readonly) id <PXPlacesMapSelectionHandler> selectionHandler;
@property(readonly) id <PXPlacesMapRenderer> renderer;
@property(readonly) id <PXPlacesMapUpdatePlan> updatePlan;
@property(readonly) id <PXPlacesMapLayout> layout;
@end

