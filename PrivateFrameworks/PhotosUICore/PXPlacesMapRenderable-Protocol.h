//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSOrderedSet;
@protocol PXPlacesMapRenderer, PXPlacesMapSelectionHandler;

@protocol PXPlacesMapRenderable <NSObject>
@property(nonatomic) long long index;
@property(retain) NSOrderedSet *geotaggables;
@property __weak id <PXPlacesMapSelectionHandler> selectionHandler;
@property __weak id <PXPlacesMapRenderer> renderer;
@end

