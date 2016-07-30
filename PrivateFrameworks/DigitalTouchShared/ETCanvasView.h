//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <DigitalTouchShared/ETMessageDelegate-Protocol.h>
#import <DigitalTouchShared/UIGestureRecognizerDelegate-Protocol.h>

@class AVPlayerLayer, ETAngerMessage, ETGLSketchView, ETHeartbeatMessage, ETKissMessage, ETMessage, ETTapMessage, NSMutableDictionary, NSMutableSet, NSString, NSTimer, SKScene, SKView, UIColor, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer, UITouch;
@protocol ETCanvasViewDelegate, ETMessageTimeSource;

@interface ETCanvasView : UIView <ETMessageDelegate, UIGestureRecognizerDelegate>
{
    NSMutableSet *_playingMessages;
    ETGLSketchView *_currentSketchView;
    ETTapMessage *_currentTaps;
    ETHeartbeatMessage *_currentHeartbeat;
    NSTimer *_heartbeatDurationTimer;
    UILongPressGestureRecognizer *_heartbeatRecognizer;
    struct CGPoint _heartbeatStartCenter;
    double _lastActivityTimestamp;
    double _touchesBeganTimestamp;
    NSTimer *_sendMessageTimer;
    NSTimer *_idleTimer;
    _Bool _setAlwaysPaused;
    _Bool _clearInProgress;
    unsigned short _messageType;
    struct CGPoint _lastPt;
    UITouch *_drawingTouch;
    _Bool _drawingTouchStartedStroke;
    double _drawingTouchMovedDistance;
    struct CGRect _ignoredTouchesRect;
    _Bool _didIgnoreTouchesBegan;
    _Bool _ignoreTouchesUntilAllTouchesEnded;
    NSMutableSet *_touchesDown;
    NSMutableDictionary *_messageIdentifierToDoodleView;
    UITapGestureRecognizer *_tapRecognizer;
    NSTimer *_fastTapAllowableMovementTimer;
    double _lastFastTapTimestamp;
    UITapGestureRecognizer *_kissRecognizer;
    ETKissMessage *_currentKissMessage;
    UILongPressGestureRecognizer *_angerRecognizer;
    ETAngerMessage *_currentAnger;
    NSTimer *_angerDurationLimitTimer;
    double _wispDelay;
    _Bool _sendMessageOnTouchesEndedWithoutDelay;
    SKScene *_scene;
    SKView *_sceneView;
    UIImageView *_photoView;
    UIView *_videoView;
    AVPlayerLayer *_videoLayer;
    _Bool _canComposeHeartbeat;
    _Bool _canComposeTap;
    _Bool _canComposeKiss;
    _Bool _canComposeAnger;
    _Bool _isComposing;
    _Bool _usesMediaAppearance;
    _Bool _paused;
    _Bool _useFastVerticalWisp;
    id <ETCanvasViewDelegate> _canvasDelegate;
    id <ETMessageTimeSource> _timeSource;
    UIColor *_drawingColor;
    ETMessage *_parentMessage;
}

@property(nonatomic) _Bool useFastVerticalWisp; // @synthesize useFastVerticalWisp=_useFastVerticalWisp;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) ETMessage *parentMessage; // @synthesize parentMessage=_parentMessage;
@property(nonatomic) _Bool usesMediaAppearance; // @synthesize usesMediaAppearance=_usesMediaAppearance;
@property(readonly, nonatomic) _Bool isComposing; // @synthesize isComposing=_isComposing;
@property(nonatomic) _Bool canComposeAnger; // @synthesize canComposeAnger=_canComposeAnger;
@property(nonatomic) _Bool canComposeKiss; // @synthesize canComposeKiss=_canComposeKiss;
@property(nonatomic) _Bool canComposeTap; // @synthesize canComposeTap=_canComposeTap;
@property(nonatomic) _Bool canComposeHeartbeat; // @synthesize canComposeHeartbeat=_canComposeHeartbeat;
@property(retain, nonatomic) UIColor *drawingColor; // @synthesize drawingColor=_drawingColor;
@property(nonatomic) __weak id <ETMessageTimeSource> timeSource; // @synthesize timeSource=_timeSource;
@property(nonatomic) __weak id <ETCanvasViewDelegate> canvasDelegate; // @synthesize canvasDelegate=_canvasDelegate;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)arg1;
- (void)messageDidStopPlaying:(id)arg1;
- (void)messageWillStopPlaying:(id)arg1;
- (void)messageWillReachSizeLimit:(id)arg1;
- (void)playMessage:(id)arg1;
- (void)playTestStrokeWithColor:(id)arg1 duration:(double)arg2;
- (void)_hideHeartbeatTimerFired;
- (void)_hideHeartbeat;
- (void)_showHeartbeatAtNormalizedPoint:(struct CGPoint)arg1 rotation:(double)arg2;
- (void)_sendHeartbeat;
- (void)_sendKiss;
- (void)_heartbeatRecognized:(id)arg1;
- (struct CGPoint)_viewPointNormalizedInSceneSpace:(struct CGPoint)arg1;
- (double)_angleOfRotationBetweenTwoFingers:(id)arg1;
- (void)sendCurrentMessage;
- (void)_sendTaps;
- (void)_sendSketch;
- (void)endMessageComposition;
- (_Bool)_sendMessageTimerFired;
- (void)_clearSendMessageTimer;
- (void)_startSendMessageTimer;
- (void)handleDotAtX:(float)arg1 Y:(float)arg2 color:(id)arg3 time:(double)arg4 isRemote:(_Bool)arg5;
- (void)handlePanAtX:(float)arg1 Y:(float)arg2 color:(id)arg3 time:(double)arg4 state:(long long)arg5 isRemote:(_Bool)arg6;
- (void)handleTapAtX:(float)arg1 Y:(float)arg2 color:(id)arg3 time:(double)arg4 isRemote:(_Bool)arg5;
- (void)_createSketchViewWithColor:(id)arg1 time:(double)arg2 message:(id)arg3;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_areRecognizersTrackingMultipleFingers;
- (void)_tapRecognized:(id)arg1;
- (void)_kissRecognized:(id)arg1;
- (void)_angerDurationLimitTimerFired;
- (void)_hideAnger;
- (void)_showAngerAtPoint:(struct CGPoint)arg1;
- (void)_sendAnger;
- (void)_angerRecognized:(id)arg1;
- (struct CGPoint)_normalizedGesturePoint:(id)arg1;
- (void)_fastTapAllowableMovementTimerFired;
- (void)_startFastTapAllowableMovementTimer;
- (void)updateIgnoredTouchesRectForStatusBarSize:(struct CGSize)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)_isTapTooRecentAfterKissGesture;
- (_Bool)_canComposeExclusiveMessage;
- (void)_checkForIdle;
- (void)_stopCheckForIdleTimer;
- (void)_startCheckForIdleTimer;
- (void)clearCanvasAnimated:(_Bool)arg1;
- (void)_clearDoodleViewForMessage:(id)arg1;
- (void)_animateOutSketchView:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)wispVisibleSketchViewsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setAlwaysPaused:(_Bool)arg1;
- (_Bool)_sketchesPaused;
- (void)_setSketchesPaused:(_Bool)arg1;
- (void)dealloc;
- (void)_endMessage:(id)arg1 withSend:(_Bool)arg2;
- (void)_setIsComposingMessageOfType:(unsigned short)arg1;
- (void)startDoodleMessageComposition;
- (void)_startDoodleMessageCompositionAtTime:(double)arg1;
- (_Bool)_tapsInProgress;
- (_Bool)isComposingSketch;
- (_Bool)isComposingHeartbeat;
- (_Bool)_sketchInProgress;
- (void)layoutSubviews;
- (void)_updatePhotoViewFrame;
- (void)_updateVideoViewFrame;
- (void)hideVideo;
- (void)showVideoForPlayer:(id)arg1;
- (void)hidePhoto;
- (void)showPhotoForImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
