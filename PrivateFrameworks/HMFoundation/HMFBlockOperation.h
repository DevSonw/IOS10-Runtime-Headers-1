//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSBlockOperation.h>

@class NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface HMFBlockOperation : NSBlockOperation
{
    NSObject<OS_dispatch_semaphore> *_finishedSemaphore;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)_finish;
- (void)finish;
- (void)_cancelWithError:(id)arg1;
- (void)cancelWithError:(id)arg1;
- (void)cancel;
- (void)_setFinishedSemaphore:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *finishedSemaphore; // @synthesize finishedSemaphore=_finishedSemaphore;
- (id)_finishedSemaphore;
- (void)_setError:(id)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (id)_error;
- (void)start;
@property(readonly, nonatomic) unsigned long long dispatchTimeout;
- (id)description;
- (id)debugDescription;
- (void)dealloc;
- (id)init;

@end
