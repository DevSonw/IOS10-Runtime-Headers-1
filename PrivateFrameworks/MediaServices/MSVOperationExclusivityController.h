//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSVOperationExclusivityController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_operations;
}

+ (id)sharedExclusivityController;
- (void).cxx_destruct;
- (void)removeOperation:(id)arg1 forCategories:(id)arg2;
- (void)addOperation:(id)arg1 forCategories:(id)arg2;
- (id)init;

@end
