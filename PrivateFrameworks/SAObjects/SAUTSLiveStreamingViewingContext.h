//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAUTSViewingContext.h>

@class NSDate;

@interface SAUTSLiveStreamingViewingContext : SAUTSViewingContext
{
}

+ (id)liveStreamingViewingContextWithDictionary:(id)arg1 context:(id)arg2;
+ (id)liveStreamingViewingContext;
@property(nonatomic) _Bool watchingLive;
@property(copy, nonatomic) NSDate *eventStartTime;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
