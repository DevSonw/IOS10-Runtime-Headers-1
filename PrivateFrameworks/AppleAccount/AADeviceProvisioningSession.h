//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AADeviceProvisioningSession : NSObject
{
    NSString *_dsid;
    unsigned long long _dsidNumber;
    struct OpaqueCFHTTPCookieStorage *_cookieStorageRef;
}

- (void).cxx_destruct;
- (int)eraseProvisioning;
- (int)synchronizeProvisioningWithData:(id)arg1;
- (int)provisionDeviceWithData:(id)arg1;
- (id)deviceProvisioningInfo;
- (void)addProvisioningInfoToURLRequest:(id)arg1 sendEmptyValues:(_Bool)arg2;
- (void)addProvisioningInfoToAARequest:(id)arg1 withFallback:(_Bool)arg2;
- (void)addProvisioningInfoToAARequest:(id)arg1;
- (void)setCookieStorageRef:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (id)initWithAccount:(id)arg1;
- (id)initWithDSID:(id)arg1;
- (id)init;

@end
