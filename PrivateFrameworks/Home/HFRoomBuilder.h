//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemBuilder.h>

#import <Home/HFWallpaperBuilder-Protocol.h>

@class HFMutableSetDiff, HFWallpaper, HMRoom, NAFuture, NSSet, NSString;

@interface HFRoomBuilder : HFItemBuilder <HFWallpaperBuilder>
{
    NSString *_name;
    HFWallpaper *_wallpaper;
    NAFuture *_loadedWallpaperFuture;
    HFMutableSetDiff *_accessoryUUIDs;
}

+ (Class)homeKitRepresentationClass;
@property(readonly, nonatomic) HFMutableSetDiff *accessoryUUIDs; // @synthesize accessoryUUIDs=_accessoryUUIDs;
@property(retain, nonatomic) NAFuture *loadedWallpaperFuture; // @synthesize loadedWallpaperFuture=_loadedWallpaperFuture;
@property(retain, nonatomic) HFWallpaper *wallpaper; // @synthesize wallpaper=_wallpaper;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)_updateAccessories;
- (id)_updateWallpaper;
- (id)_updateName;
- (id)_createRoom;
- (id)commitItem;
- (id)_performValidation;
- (id)wallpaperFuture;
@property(readonly, nonatomic) NSSet *accessories;
- (void)removeAccessory:(id)arg1;
- (void)addAccessory:(id)arg1;
- (void)setRoom:(id)arg1;
@property(readonly, nonatomic) HMRoom *room;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
