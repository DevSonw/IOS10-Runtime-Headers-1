//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol UIKBCacheableView <NSObject>
@property(readonly, nonatomic) _Bool keepNonPersistent;
@property(readonly, nonatomic) double cachedWidth;
@property(readonly, nonatomic) _Bool cacheDeferable;
@property(readonly, nonatomic) NSString *cacheKey;
- (NSDictionary *)cacheKeysForRenderFlags:(NSArray *)arg1;

@optional
- (void)drawContentsOfRenderers:(NSArray *)arg1;
@end
