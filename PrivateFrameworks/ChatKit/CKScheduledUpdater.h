//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKManualUpdater.h>

@class NSCountedSet;

@interface CKScheduledUpdater : CKManualUpdater
{
    _Bool _updateSynchronouslyIfPossible;
    NSCountedSet *_holdingUpdatesKeys;
}

@property(nonatomic) _Bool updateSynchronouslyIfPossible; // @synthesize updateSynchronouslyIfPossible=_updateSynchronouslyIfPossible;
@property(retain, nonatomic) NSCountedSet *holdingUpdatesKeys; // @synthesize holdingUpdatesKeys=_holdingUpdatesKeys;
- (void).cxx_destruct;
- (void)invalidate;
- (void)updateIfNeeded;
- (_Bool)isHoldingUpdates;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (void)setNeedsUpdate;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)description;
- (void)dealloc;

@end

