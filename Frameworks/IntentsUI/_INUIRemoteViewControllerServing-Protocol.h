//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IntentsUI/NSObject-Protocol.h>

@class INInteraction;

@protocol _INUIRemoteViewControllerServing <NSObject>
- (void)requestDesiredSize;
- (void)queryRepresentedPropertiesWithCompletion:(void (^)(NSArray *))arg1;
- (void)configureWithInteraction:(INInteraction *)arg1 context:(unsigned long long)arg2 completion:(void (^)(struct CGSize))arg3;
@end
