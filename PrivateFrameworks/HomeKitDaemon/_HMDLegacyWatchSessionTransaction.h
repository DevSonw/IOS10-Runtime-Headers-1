//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDRemoteMessage, HMFTimer, NSString, NSUUID, _HMDLegacyWatchSession;

@interface _HMDLegacyWatchSessionTransaction : NSObject <HMFTimerDelegate>
{
    _Bool _complete;
    NSUUID *_identifier;
    _HMDLegacyWatchSession *_session;
    HMDRemoteMessage *_message;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _responseHandler;
    HMFTimer *_timer;
}

@property(readonly, copy, nonatomic) HMFTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) HMDRemoteMessage *message; // @synthesize message=_message;
@property(readonly, nonatomic) __weak _HMDLegacyWatchSession *session; // @synthesize session=_session;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (void)receiveResponse:(id)arg1;
- (id)requestMessageWithError:(id *)arg1;
- (void)stopWithError:(id)arg1;
- (void)start;
- (id)initWithMessage:(id)arg1 session:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
