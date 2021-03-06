//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaServices/NSObject-Protocol.h>

@class MSVOperation, NSOperation, NSString;

@protocol MSVOperationCondition <NSObject>
- (void)evaluateForOperation:(MSVOperation *)arg1 completion:(void (^)(_Bool, NSError *))arg2;

@optional
@property(readonly, copy, nonatomic) NSString *mutualExclusionCategory;
- (NSOperation *)dependencyForOperation:(MSVOperation *)arg1;
@end

