//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpotlight/CSSearchableIndex.h>

@interface MDSearchableIndex : CSSearchableIndex
{
}

+ (id)sharedInstance;
- (void)performIndexJob:(id)arg1;
- (void)performIndexJob:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)indexSearchableItems:(id)arg1 stateInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
