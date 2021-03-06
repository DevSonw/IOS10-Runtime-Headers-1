//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer;
@protocol CKVideoPreviewViewControllerDelegate;

@interface CKVideoPreviewViewController : UIViewController
{
    _Bool _redisplayStatusBar;
    _Bool _reachedEnd;
    id <CKVideoPreviewViewControllerDelegate> _videoPreviewDelegate;
    AVPlayerItem *_avPlayerItem;
    AVPlayer *_avPlayer;
    AVPlayerLayer *_avPlayerLayer;
}

@property(nonatomic) _Bool reachedEnd; // @synthesize reachedEnd=_reachedEnd;
@property(retain, nonatomic) AVPlayerLayer *avPlayerLayer; // @synthesize avPlayerLayer=_avPlayerLayer;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) AVPlayerItem *avPlayerItem; // @synthesize avPlayerItem=_avPlayerItem;
@property(nonatomic) _Bool redisplayStatusBar; // @synthesize redisplayStatusBar=_redisplayStatusBar;
@property(nonatomic) __weak id <CKVideoPreviewViewControllerDelegate> videoPreviewDelegate; // @synthesize videoPreviewDelegate=_videoPreviewDelegate;
- (void).cxx_destruct;
- (void)videoDidReachEnd:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause;
- (void)play;
- (_Bool)togglePlayPause;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing; // @dynamic playing;
- (void)dealloc;
- (void)setVideoFileURL:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)loadView;
- (id)init;

@end

