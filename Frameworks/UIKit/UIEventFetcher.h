//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableArray;
@protocol UIEventFetcherSink;

__attribute__((visibility("hidden")))
@interface UIEventFetcher : NSObject
{
    NSMutableArray *_incomingHIDEvents;
    NSMutableArray *_incomingHIDEventsFiltered;
    struct __CFRunLoop *_cfRunLoop;
    struct __CFRunLoopSource *_triggerHandOffEventsRunLoopSource;
    CDUnknownBlockType _receiveBlock;
    CDUnknownBlockType _addToFilteredEventsBlock;
    CDUnknownBlockType _gameControllerEventFilterGenerator;
    NSMutableArray *_eventFilters;
    CADisplayLink *_displayLink;
    long long _countOfDigitizerEventsReceivedSinceLastDisplayLinkCallback;
    _Bool _didDispatchOneMoveEventSinceLastDisplayLinkCallback;
    id <UIEventFetcherSink> _eventFetcherSink;
}

@property(retain, nonatomic) id <UIEventFetcherSink> eventFetcherSink; // @synthesize eventFetcherSink=_eventFetcherSink;
- (void).cxx_destruct;
- (void)_removeHIDGameControllerEventObserver;
- (void)_setHIDGameControllerEventObserver:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)signalEventsAvailable;
- (void)filterEvents;
- (void)drainEventsIntoEnvironment:(id)arg1;
- (void)_receiveHIDEventInternal:(struct __IOHIDEvent *)arg1;
- (void)_receiveHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)setupThreadAndRun;
- (void)threadMain;
- (void)displayLinkDidFire:(id)arg1;
- (void)setupForRunLoop:(id)arg1;
- (void)_setupFilterChain;
- (void)_removeHIDEventFilter:(CDUnknownBlockType)arg1;
- (void)_addHIDEventFilter:(CDUnknownBlockType)arg1;
- (id)init;

@end
