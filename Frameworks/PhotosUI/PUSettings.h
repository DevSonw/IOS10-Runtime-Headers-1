//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UISettings.h>

@interface PUSettings : _UISettings
{
}

+ (void)addDeferredObservers;
+ (id)sharedInstance;
- (void)removeKeyPathObserver:(id)arg1;
- (void)addKeyPathObserver:(id)arg1;
- (void)removeKeyObserver:(id)arg1;
- (void)addKeyObserver:(id)arg1;
- (void)removeDeferredKeyObserver:(id)arg1;
- (void)addDeferredKeyObserver:(id)arg1;
- (void)performPostSaveActions;

@end
