//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface AXSettingsObjectDestructionHelper : NSObject
{
    void *_listenerAddress;
    NSMutableArray *_selectorKeys;
}

- (void)dealloc;
- (void)addSelectorKey:(SEL)arg1;
- (id)initWithListenerAddress:(void *)arg1;

@end
