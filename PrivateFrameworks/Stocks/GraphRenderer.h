//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface GraphRenderer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _cancelled;
}

+ (void)clearSharedRenderer;
+ (id)sharedRenderer;
- (void).cxx_destruct;
- (void)performRenderOperation:(id)arg1;
- (id)init;

@end

