//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUtilities/TUCallServicesProtocol-Protocol.h>

@class NSDictionary, TUDialRequest;

@protocol TUCallServicesDaemonDelegate <TUCallServicesProtocol>
- (void)pullCallFromClientUsingHandoffActivityUserInfo:(NSDictionary *)arg1 reply:(void (^)(TUCall *, NSArray *))arg2;
- (void)dialWithRequest:(TUDialRequest *)arg1 reply:(void (^)(TUCall *, NSArray *))arg2;
- (void)dialWithRequest:(TUDialRequest *)arg1;
- (void)requestInitialState:(void (^)(NSArray *))arg1;
@end

