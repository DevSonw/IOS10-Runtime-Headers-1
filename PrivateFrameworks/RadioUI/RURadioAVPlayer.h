//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPUFoundation/MPUAVPlayer.h>

@class MPCRadioStationPlaybackMetadata, NSObject, RadioStation;
@protocol OS_dispatch_queue;

@interface RURadioAVPlayer : MPUAVPlayer
{
    _Bool _checkedDefaultsForLastPlayedStation;
    MPCRadioStationPlaybackMetadata *_lastPlayedStationMetadata;
    NSObject<OS_dispatch_queue> *_lastPlayedStationSaveQueue;
    NSObject<OS_dispatch_queue> *_radioUIAccessQueue;
    _Bool _banningCurrentItemShouldSkipToNextItem;
}

@property(nonatomic) _Bool banningCurrentItemShouldSkipToNextItem; // @synthesize banningCurrentItemShouldSkipToNextItem=_banningCurrentItemShouldSkipToNextItem;
- (void).cxx_destruct;
- (void)_updateLastPlayedStationMetadata;
- (void)_itemLikedStateDidChangeNotification:(id)arg1;
- (void)_feederContentsDidChangeNotification:(id)arg1;
- (_Bool)beginOrTogglePlaybackWithCoordinator:(id)arg1;
- (_Bool)beginPlaybackWithCoordinator:(id)arg1;
@property(retain, nonatomic) MPCRadioStationPlaybackMetadata *lastPlayedStationMetadata;
@property(readonly, nonatomic) RadioStation *currentStation;
- (void)dealloc;
- (id)init;

@end

