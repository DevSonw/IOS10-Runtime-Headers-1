//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface IMWeakObjectCache : NSObject
{
    NSMutableDictionary *_weakObjectCache;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _tableLock;
}

+ (id)sharedInstance;
- (void)removeObject:(id)arg1 key:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)copyObjectForKey:(id)arg1;
- (id)copyOrSetObject:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

@end
