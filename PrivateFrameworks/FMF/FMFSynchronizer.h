//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_semaphore;

@interface FMFSynchronizer : NSObject
{
    _Bool _timeoutOccurred;
    double _timeout;
    NSObject<OS_dispatch_semaphore> *_sem;
    NSString *_info;
}

@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem; // @synthesize sem=_sem;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool timeoutOccurred; // @synthesize timeoutOccurred=_timeoutOccurred;
- (void).cxx_destruct;
- (id)loggingID;
- (void)wait;
- (void)signal;
- (id)initWithDescription:(id)arg1 andTimeout:(double)arg2;

@end
