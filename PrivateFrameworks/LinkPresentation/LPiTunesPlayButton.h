//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIPlayButton.h>

#import <LinkPresentation/MPUNowPlayingDelegate-Protocol.h>

@class MPUNowPlayingController, NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesPlayButton : SKUIPlayButton <MPUNowPlayingDelegate>
{
    NSString *_iTunesIdentifier;
    MPUNowPlayingController *_nowPlayingController;
}

- (void).cxx_destruct;
- (float)playButtonDefaultAlpha;
- (void)nowPlayingController:(id)arg1 nowPlayingInfoDidChange:(id)arg2;
- (void)nowPlayingController:(id)arg1 playbackStateDidChange:(_Bool)arg2;
- (void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2;
- (void)updateProgressForCurrentlyActiveTrackAnimated:(_Bool)arg1;
- (_Bool)matchesNowPlayingItem;
- (void)buttonPressed:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToWindow;
- (void)stopListeningForPlayback;
- (void)startListeningForPlayback;
- (void)_updatePlayState;
- (void)layoutSubviews;
- (float)buttonCornerRadius;
- (struct CGSize)buttonSize;
- (id)outerBorderColor;
- (id)cancelImage;
- (id)playImage;
- (id)initWithiTunesIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
